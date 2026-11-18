#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DEAAPFOCFFA_BBJGHAGDKOM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DEAAPFOCFFA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DEAAPFOCFFA_BLFKNELJFFB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DEAAPFOCFFA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEAAPFOCFFA_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DEAAPFOCFFA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DEAAPFOCFFA_TypeDefinitionIndex = 16011;

struct alignas(4) DEAAPFOCFFA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAAPFOCFFA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEAAPFOCFFA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAAPFOCFFA_OKGKODNEICJ_OFFSET))(this);
	}

	::System::Int32 BBJGHAGDKOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAAPFOCFFA_BBJGHAGDKOM_OFFSET))(this);
	}

	::System::Int32 BLFKNELJFFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAAPFOCFFA_BLFKNELJFFB_OFFSET))(this);
	}

	/*
	::DEAAPFOCFFA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEAAPFOCFFA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEAAPFOCFFA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
