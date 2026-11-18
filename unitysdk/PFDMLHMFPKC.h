#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BILDEENCPDN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFDMLHMFPKC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PFDMLHMFPKC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8ABD00)
#define PFDMLHMFPKC_EHJPGFIJDGB_1_OFFSET UNITYSDK_OFFSET(0x1D002B00)
#define PFDMLHMFPKC_EHJPGFIJDGB_OFFSET UNITYSDK_OFFSET(0x1D002A90)
#define PFDMLHMFPKC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PFDMLHMFPKC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PFDMLHMFPKC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8ABCF0)
#define PFDMLHMFPKC___INIT_OFFSET UNITYSDK_OFFSET(0x8ABCD0)

inline static constexpr unsigned int PFDMLHMFPKC_TypeDefinitionIndex = 12985;

struct alignas(8) PFDMLHMFPKC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDMLHMFPKC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFDMLHMFPKC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BILDEENCPDN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BILDEENCPDN&))((::PBYTE)hIl2Cpp + PFDMLHMFPKC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PFDMLHMFPKC EHJPGFIJDGB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFDMLHMFPKC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFDMLHMFPKC_EHJPGFIJDGB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDMLHMFPKC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDMLHMFPKC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PFDMLHMFPKC EHJPGFIJDGB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PFDMLHMFPKC EIFONLCJOPG)
	{
		return ((::PFDMLHMFPKC(*)(::FlatBuffers::ByteBuffer*, ::PFDMLHMFPKC))((::PBYTE)hIl2Cpp + PFDMLHMFPKC_EHJPGFIJDGB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::PFDMLHMFPKC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFDMLHMFPKC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFDMLHMFPKC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
