declare class NfcNativeHelper extends NSObject {

	static alloc(): NfcNativeHelper; // inherited from NSObject

	static new(): NfcNativeHelper; // inherited from NSObject

	getHexString(data: NSData): string;

	getUID(tag: NFCTag): string;
}