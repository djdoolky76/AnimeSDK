#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NBBACDHJNKO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LEEMBICENNP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LEEMBICENNP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x801CB0)
#define LEEMBICENNP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LEEMBICENNP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LEEMBICENNP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x801CA0)
#define LEEMBICENNP_PGAAKACFCKN_1_OFFSET UNITYSDK_OFFSET(0x1AAF92E0)
#define LEEMBICENNP_PGAAKACFCKN_OFFSET UNITYSDK_OFFSET(0x1AAF9240)
#define LEEMBICENNP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x801C90)
#define LEEMBICENNP___INIT_OFFSET UNITYSDK_OFFSET(0x801C70)

inline static constexpr unsigned int LEEMBICENNP_TypeDefinitionIndex = 13591;

struct alignas(8) LEEMBICENNP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEEMBICENNP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEEMBICENNP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LEEMBICENNP PGAAKACFCKN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LEEMBICENNP EIFONLCJOPG)
	{
		return ((::LEEMBICENNP(*)(::FlatBuffers::ByteBuffer*, ::LEEMBICENNP))((::PBYTE)hIl2Cpp + LEEMBICENNP_PGAAKACFCKN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::LEEMBICENNP PGAAKACFCKN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEEMBICENNP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEEMBICENNP_PGAAKACFCKN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEEMBICENNP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NBBACDHJNKO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NBBACDHJNKO&, ::System::Int32&))((::PBYTE)hIl2Cpp + LEEMBICENNP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEEMBICENNP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NBBACDHJNKO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NBBACDHJNKO&))((::PBYTE)hIl2Cpp + LEEMBICENNP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LEEMBICENNP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEEMBICENNP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEEMBICENNP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
