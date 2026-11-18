#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMGFLBOAJJI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8095F0)
#define EMGFLBOAJJI_CMLEDAEAEPF_1_OFFSET UNITYSDK_OFFSET(0x1B0FE690)
#define EMGFLBOAJJI_CMLEDAEAEPF_OFFSET UNITYSDK_OFFSET(0x1B0FE620)
#define EMGFLBOAJJI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EMGFLBOAJJI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EMGFLBOAJJI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8095E0)
#define EMGFLBOAJJI___INIT_OFFSET UNITYSDK_OFFSET(0x8095C0)

inline static constexpr unsigned int EMGFLBOAJJI_TypeDefinitionIndex = 15667;

struct alignas(8) EMGFLBOAJJI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGFLBOAJJI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMGFLBOAJJI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EMGFLBOAJJI CMLEDAEAEPF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMGFLBOAJJI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMGFLBOAJJI_CMLEDAEAEPF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGFLBOAJJI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::EMGFLBOAJJI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMGFLBOAJJI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMGFLBOAJJI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EMGFLBOAJJI CMLEDAEAEPF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EMGFLBOAJJI EIFONLCJOPG)
	{
		return ((::EMGFLBOAJJI(*)(::FlatBuffers::ByteBuffer*, ::EMGFLBOAJJI))((::PBYTE)hIl2Cpp + EMGFLBOAJJI_CMLEDAEAEPF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGFLBOAJJI_GHKKNCCLPAN_OFFSET))(this);
	}
};
