#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EHCLOMHADLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FBD90)
#define EHCLOMHADLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EHCLOMHADLM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EHCLOMHADLM_JBBCONJGDOD_1_OFFSET UNITYSDK_OFFSET(0x1A59CC90)
#define EHCLOMHADLM_JBBCONJGDOD_OFFSET UNITYSDK_OFFSET(0x1A59CC20)
#define EHCLOMHADLM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FBD80)
#define EHCLOMHADLM___INIT_OFFSET UNITYSDK_OFFSET(0x7FBD60)

inline static constexpr unsigned int EHCLOMHADLM_TypeDefinitionIndex = 9754;

struct alignas(8) EHCLOMHADLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCLOMHADLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHCLOMHADLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCLOMHADLM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCLOMHADLM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EHCLOMHADLM JBBCONJGDOD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHCLOMHADLM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHCLOMHADLM_JBBCONJGDOD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::EHCLOMHADLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHCLOMHADLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHCLOMHADLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EHCLOMHADLM JBBCONJGDOD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EHCLOMHADLM EIFONLCJOPG)
	{
		return ((::EHCLOMHADLM(*)(::FlatBuffers::ByteBuffer*, ::EHCLOMHADLM))((::PBYTE)hIl2Cpp + EHCLOMHADLM_JBBCONJGDOD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
