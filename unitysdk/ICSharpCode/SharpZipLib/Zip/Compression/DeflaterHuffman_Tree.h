#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression { class DeflaterHuffman; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_BUILDCODES_OFFSET UNITYSDK_OFFSET(0x1ED381E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_BUILDLENGTH_OFFSET UNITYSDK_OFFSET(0x1ED3A2C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_BUILDTREE_OFFSET UNITYSDK_OFFSET(0x1ED39150)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_CALCBLFREQ_OFFSET UNITYSDK_OFFSET(0x1ED39A20)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_CHECKEMPTY_OFFSET UNITYSDK_OFFSET(0x1ED3A170)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_GETENCODEDLENGTH_OFFSET UNITYSDK_OFFSET(0x1ED39CF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_RESET_OFFSET UNITYSDK_OFFSET(0x1ED37F60)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_SETSTATICCODES_OFFSET UNITYSDK_OFFSET(0x1ED39E60)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_WRITESYMBOL_OFFSET UNITYSDK_OFFSET(0x1ED38AF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_WRITETREE_OFFSET UNITYSDK_OFFSET(0x1ED38440)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED37E00)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int DeflaterHuffman_Tree_TypeDefinitionIndex = 6841;

	class DeflaterHuffman_Tree : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* length; // 0x10
		::Il2CppArray<::System::Int16>* codes; // 0x18
		::Il2CppArray<::System::Int16>* freqs; // 0x20
		::Il2CppArray<::System::Int32>* bl_counts; // 0x28
		::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman* dh; // 0x30
		::System::Int32 maxLength; // 0x38
		::System::Int32 minNumCodes; // 0x3C
		::System::Int32 numCodes; // 0x40

		::System::Void _ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman* dh, ::System::Int32 elems, ::System::Int32 minCodes, ::System::Int32 maxLength)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE__CTOR_OFFSET))(this, dh, elems, minCodes, maxLength);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_RESET_OFFSET))(this);
		}

		::System::Void WriteSymbol(::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_WRITESYMBOL_OFFSET))(this, code);
		}

		::System::Void CheckEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_CHECKEMPTY_OFFSET))(this);
		}

		::System::Void SetStaticCodes(::Il2CppArray<::System::Int16>* staticCodes, ::Il2CppArray<::System::Byte>* staticLengths)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int16>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_SETSTATICCODES_OFFSET))(this, staticCodes, staticLengths);
		}

		::System::Void BuildCodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_BUILDCODES_OFFSET))(this);
		}

		::System::Void BuildTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_BUILDTREE_OFFSET))(this);
		}

		::System::Int32 GetEncodedLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_GETENCODEDLENGTH_OFFSET))(this);
		}

		::System::Void CalcBLFreq(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree* blTree)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_CALCBLFREQ_OFFSET))(this, blTree);
		}

		::System::Void WriteTree(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree* blTree)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_WRITETREE_OFFSET))(this, blTree);
		}

		::System::Void BuildLength(::Il2CppArray<::System::Int32>* childs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_BUILDLENGTH_OFFSET))(this, childs);
		}
	};
}
