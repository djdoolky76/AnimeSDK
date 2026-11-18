#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define AEIDNDJNFPC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AEIDNDJNFPC_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define AEIDNDJNFPC_GCKLAJCDKOH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AEIDNDJNFPC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AEIDNDJNFPC_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AEIDNDJNFPC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A514EF0)
#define AEIDNDJNFPC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AEIDNDJNFPC_TypeDefinitionIndex = 16153;

struct alignas(4) AEIDNDJNFPC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDNDJNFPC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEIDNDJNFPC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GCKLAJCDKOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDNDJNFPC_GCKLAJCDKOH_OFFSET))(this);
	}

	/*
	::AEIDNDJNFPC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEIDNDJNFPC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEIDNDJNFPC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDNDJNFPC_DPCDIABPPEE_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDNDJNFPC_LPFMNKEFPMM_OFFSET))(this);
	}

	/*
	static ::AEIDNDJNFPC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AEIDNDJNFPC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AEIDNDJNFPC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
