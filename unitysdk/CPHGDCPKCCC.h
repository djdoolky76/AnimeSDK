#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CPHGDCPKCCC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CPHGDCPKCCC_AMMMMILILIE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CPHGDCPKCCC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CPHGDCPKCCC_CMDLKAGGBEA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define CPHGDCPKCCC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CPHGDCPKCCC_LOMMMCAOIFC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define CPHGDCPKCCC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CPHGDCPKCCC_TypeDefinitionIndex = 13515;

struct alignas(4) CPHGDCPKCCC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHGDCPKCCC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPHGDCPKCCC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CPHGDCPKCCC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPHGDCPKCCC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPHGDCPKCCC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHGDCPKCCC_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LOMMMCAOIFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHGDCPKCCC_LOMMMCAOIFC_OFFSET))(this);
	}

	::System::String* CMDLKAGGBEA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHGDCPKCCC_CMDLKAGGBEA_OFFSET))(this);
	}

	::System::Int32 AMMMMILILIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHGDCPKCCC_AMMMMILILIE_OFFSET))(this);
	}
};
