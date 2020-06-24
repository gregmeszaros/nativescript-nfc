declare class NFCHelper extends NSObject {

	static alloc(): NFCHelper; // inherited from NSObject

	static new(): NFCHelper; // inherited from NSObject

	getHexString(data: NSData): string;
	getUID(tag: NFCTag): string;
}