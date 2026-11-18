#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CLLKEAHOLDH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIJEKOLFALM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IIJEKOLFALM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DF440)
#define IIJEKOLFALM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IIJEKOLFALM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IIJEKOLFALM_OOKDJHJMHDK_1_OFFSET UNITYSDK_OFFSET(0x1934FEC0)
#define IIJEKOLFALM_OOKDJHJMHDK_OFFSET UNITYSDK_OFFSET(0x1934FE20)
#define IIJEKOLFALM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DF480)
#define IIJEKOLFALM___INIT_OFFSET UNITYSDK_OFFSET(0x7DF420)

inline static constexpr unsigned int IIJEKOLFALM_TypeDefinitionIndex = 17554;

struct alignas(8) IIJEKOLFALM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJEKOLFALM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIJEKOLFALM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IIJEKOLFALM OOKDJHJMHDK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IIJEKOLFALM EIFONLCJOPG)
	{
		return ((::IIJEKOLFALM(*)(::FlatBuffers::ByteBuffer*, ::IIJEKOLFALM))((::PBYTE)hIl2Cpp + IIJEKOLFALM_OOKDJHJMHDK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IIJEKOLFALM OOKDJHJMHDK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIJEKOLFALM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIJEKOLFALM_OOKDJHJMHDK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IIJEKOLFALM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIJEKOLFALM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIJEKOLFALM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CLLKEAHOLDH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CLLKEAHOLDH&))((::PBYTE)hIl2Cpp + IIJEKOLFALM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJEKOLFALM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJEKOLFALM_PPOMNIFACOL_OFFSET))(this);
	}
};
