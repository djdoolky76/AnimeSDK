#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LHBBIAOBPKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LHBBIAOBPKD_CPHNNMBPFCG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LHBBIAOBPKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHBBIAOBPKD_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LHBBIAOBPKD_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x754920)
#define LHBBIAOBPKD_PHHBAMMBKLA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LHBBIAOBPKD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LHBBIAOBPKD_TypeDefinitionIndex = 17596;

struct alignas(4) LHBBIAOBPKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBBIAOBPKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHBBIAOBPKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBBIAOBPKD_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBBIAOBPKD_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 PHHBAMMBKLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBBIAOBPKD_PHHBAMMBKLA_OFFSET))(this);
	}

	/*
	::LHBBIAOBPKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHBBIAOBPKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHBBIAOBPKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CPHNNMBPFCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBBIAOBPKD_CPHNNMBPFCG_OFFSET))(this);
	}
};
