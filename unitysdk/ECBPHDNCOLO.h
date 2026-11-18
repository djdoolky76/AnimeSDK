#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ECBPHDNCOLO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ECBPHDNCOLO_CJBMHNCHNHO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define ECBPHDNCOLO_CNIMPNICLOH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ECBPHDNCOLO_FFMBGCLLCIF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define ECBPHDNCOLO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ECBPHDNCOLO_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ECBPHDNCOLO_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x754920)
#define ECBPHDNCOLO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ECBPHDNCOLO_TypeDefinitionIndex = 15065;

struct alignas(4) ECBPHDNCOLO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBPHDNCOLO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECBPHDNCOLO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CNIMPNICLOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBPHDNCOLO_CNIMPNICLOH_OFFSET))(this);
	}

	/*
	::ECBPHDNCOLO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECBPHDNCOLO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECBPHDNCOLO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBPHDNCOLO_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::Int32 FFMBGCLLCIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBPHDNCOLO_FFMBGCLLCIF_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBPHDNCOLO_NKCNGLADFNA_OFFSET))(this);
	}

	::System::String* CJBMHNCHNHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBPHDNCOLO_CJBMHNCHNHO_OFFSET))(this);
	}
};
