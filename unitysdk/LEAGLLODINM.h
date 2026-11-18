#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LCGBLGJBDIL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LEAGLLODINM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LEAGLLODINM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8199D0)
#define LEAGLLODINM_BKNJMBIJKCE_1_OFFSET UNITYSDK_OFFSET(0x1BA856E0)
#define LEAGLLODINM_BKNJMBIJKCE_OFFSET UNITYSDK_OFFSET(0x1BA85670)
#define LEAGLLODINM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LEAGLLODINM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LEAGLLODINM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x819A10)
#define LEAGLLODINM___INIT_OFFSET UNITYSDK_OFFSET(0x8199B0)

inline static constexpr unsigned int LEAGLLODINM_TypeDefinitionIndex = 12307;

struct alignas(8) LEAGLLODINM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAGLLODINM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEAGLLODINM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LEAGLLODINM BKNJMBIJKCE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEAGLLODINM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEAGLLODINM_BKNJMBIJKCE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::LEAGLLODINM BKNJMBIJKCE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LEAGLLODINM EIFONLCJOPG)
	{
		return ((::LEAGLLODINM(*)(::FlatBuffers::ByteBuffer*, ::LEAGLLODINM))((::PBYTE)hIl2Cpp + LEAGLLODINM_BKNJMBIJKCE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LCGBLGJBDIL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCGBLGJBDIL&))((::PBYTE)hIl2Cpp + LEAGLLODINM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAGLLODINM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LEAGLLODINM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEAGLLODINM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEAGLLODINM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAGLLODINM_PPOMNIFACOL_OFFSET))(this);
	}
};
