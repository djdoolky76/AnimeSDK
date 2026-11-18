#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LKDBKHGIFGO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AOFNGJKDLGC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AOFNGJKDLGC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FB030)
#define AOFNGJKDLGC_FPIDCGNLDCG_1_OFFSET UNITYSDK_OFFSET(0x1A572A40)
#define AOFNGJKDLGC_FPIDCGNLDCG_OFFSET UNITYSDK_OFFSET(0x1A572980)
#define AOFNGJKDLGC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AOFNGJKDLGC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AOFNGJKDLGC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FB070)
#define AOFNGJKDLGC___INIT_OFFSET UNITYSDK_OFFSET(0x7FB010)

inline static constexpr unsigned int AOFNGJKDLGC_TypeDefinitionIndex = 9997;

struct alignas(8) AOFNGJKDLGC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFNGJKDLGC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOFNGJKDLGC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AOFNGJKDLGC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AOFNGJKDLGC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOFNGJKDLGC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LKDBKHGIFGO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LKDBKHGIFGO&))((::PBYTE)hIl2Cpp + AOFNGJKDLGC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AOFNGJKDLGC FPIDCGNLDCG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AOFNGJKDLGC EIFONLCJOPG)
	{
		return ((::AOFNGJKDLGC(*)(::FlatBuffers::ByteBuffer*, ::AOFNGJKDLGC))((::PBYTE)hIl2Cpp + AOFNGJKDLGC_FPIDCGNLDCG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFNGJKDLGC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AOFNGJKDLGC FPIDCGNLDCG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AOFNGJKDLGC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOFNGJKDLGC_FPIDCGNLDCG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFNGJKDLGC_PPOMNIFACOL_OFFSET))(this);
	}
};
