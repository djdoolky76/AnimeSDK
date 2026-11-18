#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BAEAGCCFMDM_AOCCAFAHICN_1_OFFSET UNITYSDK_OFFSET(0x17A750D0)
#define BAEAGCCFMDM_AOCCAFAHICN_OFFSET UNITYSDK_OFFSET(0x17A75030)
#define BAEAGCCFMDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B17A0)
#define BAEAGCCFMDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BAEAGCCFMDM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BAEAGCCFMDM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1790)
#define BAEAGCCFMDM___INIT_OFFSET UNITYSDK_OFFSET(0x7B1770)

inline static constexpr unsigned int BAEAGCCFMDM_TypeDefinitionIndex = 15407;

struct alignas(8) BAEAGCCFMDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEAGCCFMDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAEAGCCFMDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BAEAGCCFMDM AOCCAFAHICN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BAEAGCCFMDM EIFONLCJOPG)
	{
		return ((::BAEAGCCFMDM(*)(::FlatBuffers::ByteBuffer*, ::BAEAGCCFMDM))((::PBYTE)hIl2Cpp + BAEAGCCFMDM_AOCCAFAHICN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BAEAGCCFMDM AOCCAFAHICN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAEAGCCFMDM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAEAGCCFMDM_AOCCAFAHICN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEAGCCFMDM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEAGCCFMDM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::BAEAGCCFMDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAEAGCCFMDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAEAGCCFMDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
