#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/APPOGNAPFOM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOFGFGHHHNK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GOFGFGHHHNK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x811E40)
#define GOFGFGHHHNK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GOFGFGHHHNK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GOFGFGHHHNK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x811E90)
#define GOFGFGHHHNK_PBADDABILDF_1_OFFSET UNITYSDK_OFFSET(0x1B7BDD60)
#define GOFGFGHHHNK_PBADDABILDF_OFFSET UNITYSDK_OFFSET(0x1B7BDCF0)
#define GOFGFGHHHNK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x811E80)
#define GOFGFGHHHNK___INIT_OFFSET UNITYSDK_OFFSET(0x811E20)

inline static constexpr unsigned int GOFGFGHHHNK_TypeDefinitionIndex = 13438;

struct alignas(8) GOFGFGHHHNK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFGFGHHHNK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOFGFGHHHNK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GOFGFGHHHNK PBADDABILDF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOFGFGHHHNK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOFGFGHHHNK_PBADDABILDF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GOFGFGHHHNK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOFGFGHHHNK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOFGFGHHHNK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::APPOGNAPFOM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::APPOGNAPFOM&))((::PBYTE)hIl2Cpp + GOFGFGHHHNK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFGFGHHHNK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GOFGFGHHHNK PBADDABILDF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GOFGFGHHHNK EIFONLCJOPG)
	{
		return ((::GOFGFGHHHNK(*)(::FlatBuffers::ByteBuffer*, ::GOFGFGHHHNK))((::PBYTE)hIl2Cpp + GOFGFGHHHNK_PBADDABILDF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFGFGHHHNK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::APPOGNAPFOM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::APPOGNAPFOM&, ::System::Int32&))((::PBYTE)hIl2Cpp + GOFGFGHHHNK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
