#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JJLHMMHIJIO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPHEACGMGLM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GPHEACGMGLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8140)
#define GPHEACGMGLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GPHEACGMGLM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GPHEACGMGLM_HNELNHLDNIM_1_OFFSET UNITYSDK_OFFSET(0x1A4E22E0)
#define GPHEACGMGLM_HNELNHLDNIM_OFFSET UNITYSDK_OFFSET(0x1A4E2270)
#define GPHEACGMGLM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F8130)
#define GPHEACGMGLM___INIT_OFFSET UNITYSDK_OFFSET(0x7F8110)

inline static constexpr unsigned int GPHEACGMGLM_TypeDefinitionIndex = 16504;

struct alignas(8) GPHEACGMGLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHEACGMGLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPHEACGMGLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GPHEACGMGLM HNELNHLDNIM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPHEACGMGLM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPHEACGMGLM_HNELNHLDNIM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHEACGMGLM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GPHEACGMGLM HNELNHLDNIM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GPHEACGMGLM EIFONLCJOPG)
	{
		return ((::GPHEACGMGLM(*)(::FlatBuffers::ByteBuffer*, ::GPHEACGMGLM))((::PBYTE)hIl2Cpp + GPHEACGMGLM_HNELNHLDNIM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GPHEACGMGLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPHEACGMGLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPHEACGMGLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JJLHMMHIJIO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JJLHMMHIJIO&))((::PBYTE)hIl2Cpp + GPHEACGMGLM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHEACGMGLM_GHKKNCCLPAN_OFFSET))(this);
	}
};
