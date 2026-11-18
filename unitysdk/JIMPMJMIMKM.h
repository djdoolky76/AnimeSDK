#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FMAKGKECNJP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JIMPMJMIMKM_AHIBFIDLFOA_1_OFFSET UNITYSDK_OFFSET(0x1B8983A0)
#define JIMPMJMIMKM_AHIBFIDLFOA_OFFSET UNITYSDK_OFFSET(0x1B898330)
#define JIMPMJMIMKM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JIMPMJMIMKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x815040)
#define JIMPMJMIMKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JIMPMJMIMKM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JIMPMJMIMKM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x815030)
#define JIMPMJMIMKM___INIT_OFFSET UNITYSDK_OFFSET(0x815010)

inline static constexpr unsigned int JIMPMJMIMKM_TypeDefinitionIndex = 16747;

struct alignas(8) JIMPMJMIMKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMPMJMIMKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIMPMJMIMKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JIMPMJMIMKM AHIBFIDLFOA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIMPMJMIMKM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIMPMJMIMKM_AHIBFIDLFOA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMPMJMIMKM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMPMJMIMKM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::JIMPMJMIMKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIMPMJMIMKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIMPMJMIMKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FMAKGKECNJP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMAKGKECNJP&))((::PBYTE)hIl2Cpp + JIMPMJMIMKM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JIMPMJMIMKM AHIBFIDLFOA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JIMPMJMIMKM EIFONLCJOPG)
	{
		return ((::JIMPMJMIMKM(*)(::FlatBuffers::ByteBuffer*, ::JIMPMJMIMKM))((::PBYTE)hIl2Cpp + JIMPMJMIMKM_AHIBFIDLFOA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
