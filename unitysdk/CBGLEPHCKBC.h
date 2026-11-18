#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AKDLDIIOBDI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBGLEPHCKBC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CBGLEPHCKBC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9A50)
#define CBGLEPHCKBC_EEOFHEEAECD_1_OFFSET UNITYSDK_OFFSET(0x1A53B820)
#define CBGLEPHCKBC_EEOFHEEAECD_OFFSET UNITYSDK_OFFSET(0x1A53B520)
#define CBGLEPHCKBC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CBGLEPHCKBC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CBGLEPHCKBC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F9AA0)
#define CBGLEPHCKBC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9A90)
#define CBGLEPHCKBC___INIT_OFFSET UNITYSDK_OFFSET(0x7F9A30)

inline static constexpr unsigned int CBGLEPHCKBC_TypeDefinitionIndex = 12510;

struct alignas(8) CBGLEPHCKBC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGLEPHCKBC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBGLEPHCKBC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CBGLEPHCKBC EEOFHEEAECD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CBGLEPHCKBC EIFONLCJOPG)
	{
		return ((::CBGLEPHCKBC(*)(::FlatBuffers::ByteBuffer*, ::CBGLEPHCKBC))((::PBYTE)hIl2Cpp + CBGLEPHCKBC_EEOFHEEAECD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AKDLDIIOBDI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AKDLDIIOBDI&))((::PBYTE)hIl2Cpp + CBGLEPHCKBC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CBGLEPHCKBC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CBGLEPHCKBC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBGLEPHCKBC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGLEPHCKBC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGLEPHCKBC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AKDLDIIOBDI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AKDLDIIOBDI&, ::System::Int32&))((::PBYTE)hIl2Cpp + CBGLEPHCKBC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::CBGLEPHCKBC EEOFHEEAECD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CBGLEPHCKBC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBGLEPHCKBC_EEOFHEEAECD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
