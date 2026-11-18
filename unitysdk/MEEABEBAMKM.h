#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HDGKELCAADO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEEABEBAMKM_ABPHIHNJJPI_1_OFFSET UNITYSDK_OFFSET(0x19575A40)
#define MEEABEBAMKM_ABPHIHNJJPI_OFFSET UNITYSDK_OFFSET(0x195759D0)
#define MEEABEBAMKM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MEEABEBAMKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5760)
#define MEEABEBAMKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEEABEBAMKM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MEEABEBAMKM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E5750)
#define MEEABEBAMKM___INIT_OFFSET UNITYSDK_OFFSET(0x7E5730)

inline static constexpr unsigned int MEEABEBAMKM_TypeDefinitionIndex = 14878;

struct alignas(8) MEEABEBAMKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEABEBAMKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEEABEBAMKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MEEABEBAMKM ABPHIHNJJPI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEEABEBAMKM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEEABEBAMKM_ABPHIHNJJPI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HDGKELCAADO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HDGKELCAADO&))((::PBYTE)hIl2Cpp + MEEABEBAMKM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEABEBAMKM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MEEABEBAMKM ABPHIHNJJPI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MEEABEBAMKM EIFONLCJOPG)
	{
		return ((::MEEABEBAMKM(*)(::FlatBuffers::ByteBuffer*, ::MEEABEBAMKM))((::PBYTE)hIl2Cpp + MEEABEBAMKM_ABPHIHNJJPI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEABEBAMKM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MEEABEBAMKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEEABEBAMKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEEABEBAMKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
