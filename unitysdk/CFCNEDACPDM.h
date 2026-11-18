#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CFCNEDACPDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CFCNEDACPDM_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CFCNEDACPDM_FIKIPBPIOKE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CFCNEDACPDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CFCNEDACPDM_HCPEDFJEICD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CFCNEDACPDM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CFCNEDACPDM_TypeDefinitionIndex = 9926;

struct alignas(4) CFCNEDACPDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCNEDACPDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFCNEDACPDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HCPEDFJEICD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCNEDACPDM_HCPEDFJEICD_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCNEDACPDM_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 FIKIPBPIOKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCNEDACPDM_FIKIPBPIOKE_OFFSET))(this);
	}

	/*
	::CFCNEDACPDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFCNEDACPDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFCNEDACPDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
