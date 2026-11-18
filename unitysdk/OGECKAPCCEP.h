#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PJMGFIHFLCI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGECKAPCCEP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OGECKAPCCEP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81AC30)
#define OGECKAPCCEP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGECKAPCCEP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OGECKAPCCEP_HOCOCMLFPOF_1_OFFSET UNITYSDK_OFFSET(0x1BAB4720)
#define OGECKAPCCEP_HOCOCMLFPOF_OFFSET UNITYSDK_OFFSET(0x1BAB4620)
#define OGECKAPCCEP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81AC70)
#define OGECKAPCCEP___INIT_OFFSET UNITYSDK_OFFSET(0x81AC10)

inline static constexpr unsigned int OGECKAPCCEP_TypeDefinitionIndex = 16023;

struct alignas(8) OGECKAPCCEP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGECKAPCCEP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGECKAPCCEP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OGECKAPCCEP HOCOCMLFPOF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OGECKAPCCEP EIFONLCJOPG)
	{
		return ((::OGECKAPCCEP(*)(::FlatBuffers::ByteBuffer*, ::OGECKAPCCEP))((::PBYTE)hIl2Cpp + OGECKAPCCEP_HOCOCMLFPOF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OGECKAPCCEP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGECKAPCCEP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGECKAPCCEP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGECKAPCCEP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGECKAPCCEP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OGECKAPCCEP HOCOCMLFPOF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGECKAPCCEP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGECKAPCCEP_HOCOCMLFPOF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PJMGFIHFLCI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PJMGFIHFLCI&))((::PBYTE)hIl2Cpp + OGECKAPCCEP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
