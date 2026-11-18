#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OFJPGIECELO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPKFDIKBCGM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GPKFDIKBCGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FCC40)
#define GPKFDIKBCGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GPKFDIKBCGM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GPKFDIKBCGM_NCMEPIPEIOH_1_OFFSET UNITYSDK_OFFSET(0x1A5C5840)
#define GPKFDIKBCGM_NCMEPIPEIOH_OFFSET UNITYSDK_OFFSET(0x1A5C57D0)
#define GPKFDIKBCGM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FCC30)
#define GPKFDIKBCGM___INIT_OFFSET UNITYSDK_OFFSET(0x7FCC10)

inline static constexpr unsigned int GPKFDIKBCGM_TypeDefinitionIndex = 14712;

struct alignas(8) GPKFDIKBCGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKFDIKBCGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPKFDIKBCGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKFDIKBCGM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OFJPGIECELO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFJPGIECELO&))((::PBYTE)hIl2Cpp + GPKFDIKBCGM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GPKFDIKBCGM NCMEPIPEIOH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPKFDIKBCGM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPKFDIKBCGM_NCMEPIPEIOH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::GPKFDIKBCGM NCMEPIPEIOH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GPKFDIKBCGM EIFONLCJOPG)
	{
		return ((::GPKFDIKBCGM(*)(::FlatBuffers::ByteBuffer*, ::GPKFDIKBCGM))((::PBYTE)hIl2Cpp + GPKFDIKBCGM_NCMEPIPEIOH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GPKFDIKBCGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPKFDIKBCGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPKFDIKBCGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKFDIKBCGM_GHKKNCCLPAN_OFFSET))(this);
	}
};
