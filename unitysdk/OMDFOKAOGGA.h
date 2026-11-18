#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OMDFOKAOGGA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OMDFOKAOGGA_CHBBFKDEOBO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OMDFOKAOGGA_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x754970)
#define OMDFOKAOGGA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMDFOKAOGGA_KAMIAFGDADO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OMDFOKAOGGA_KCHPJKPIODI_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OMDFOKAOGGA_MBBOCLIDFJG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OMDFOKAOGGA_MKOEBAGJEKC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OMDFOKAOGGA_NIEHAFDHIHA_OFFSET UNITYSDK_OFFSET(0x754920)
#define OMDFOKAOGGA_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define OMDFOKAOGGA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EDB5350)
#define OMDFOKAOGGA_PLPMPDEPKMA_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define OMDFOKAOGGA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OMDFOKAOGGA_TypeDefinitionIndex = 15733;

struct alignas(4) OMDFOKAOGGA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFOKAOGGA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMDFOKAOGGA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CHBBFKDEOBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFOKAOGGA_CHBBFKDEOBO_OFFSET))(this);
	}

	::System::Int32 NIEHAFDHIHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFOKAOGGA_NIEHAFDHIHA_OFFSET))(this);
	}

	::System::Int32 KCHPJKPIODI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFOKAOGGA_KCHPJKPIODI_OFFSET))(this);
	}

	::System::Int32 PLPMPDEPKMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFOKAOGGA_PLPMPDEPKMA_OFFSET))(this);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFOKAOGGA_FEMLPHIGLAP_OFFSET))(this);
	}

	/*
	static ::OMDFOKAOGGA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OMDFOKAOGGA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OMDFOKAOGGA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* KAMIAFGDADO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFOKAOGGA_KAMIAFGDADO_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFOKAOGGA_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::Int32 MBBOCLIDFJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFOKAOGGA_MBBOCLIDFJG_OFFSET))(this);
	}

	/*
	::OMDFOKAOGGA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMDFOKAOGGA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMDFOKAOGGA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MKOEBAGJEKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFOKAOGGA_MKOEBAGJEKC_OFFSET))(this);
	}
};
