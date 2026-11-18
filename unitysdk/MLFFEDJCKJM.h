#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GBMCEJLFEMO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLFFEDJCKJM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MLFFEDJCKJM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85D700)
#define MLFFEDJCKJM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MLFFEDJCKJM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MLFFEDJCKJM_HLMJBOEMBIB_1_OFFSET UNITYSDK_OFFSET(0x1CCE22B0)
#define MLFFEDJCKJM_HLMJBOEMBIB_OFFSET UNITYSDK_OFFSET(0x1CCE2240)
#define MLFFEDJCKJM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85D740)
#define MLFFEDJCKJM___INIT_OFFSET UNITYSDK_OFFSET(0x85D6E0)

inline static constexpr unsigned int MLFFEDJCKJM_TypeDefinitionIndex = 12616;

struct alignas(8) MLFFEDJCKJM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFFEDJCKJM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLFFEDJCKJM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFFEDJCKJM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MLFFEDJCKJM HLMJBOEMBIB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLFFEDJCKJM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLFFEDJCKJM_HLMJBOEMBIB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MLFFEDJCKJM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLFFEDJCKJM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLFFEDJCKJM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MLFFEDJCKJM HLMJBOEMBIB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MLFFEDJCKJM EIFONLCJOPG)
	{
		return ((::MLFFEDJCKJM(*)(::FlatBuffers::ByteBuffer*, ::MLFFEDJCKJM))((::PBYTE)hIl2Cpp + MLFFEDJCKJM_HLMJBOEMBIB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFFEDJCKJM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GBMCEJLFEMO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GBMCEJLFEMO&))((::PBYTE)hIl2Cpp + MLFFEDJCKJM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
