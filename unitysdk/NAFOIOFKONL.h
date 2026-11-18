#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NAFOIOFKONL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NAFOIOFKONL_BMGFPALBIJC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define NAFOIOFKONL_EEFLCOKJGLA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NAFOIOFKONL_EOMNALDJOIL_OFFSET UNITYSDK_OFFSET(0x754920)
#define NAFOIOFKONL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NAFOIOFKONL_ICOELJNGAPB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NAFOIOFKONL_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NAFOIOFKONL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NAFOIOFKONL_TypeDefinitionIndex = 16780;

struct alignas(4) NAFOIOFKONL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFOIOFKONL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAFOIOFKONL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ICOELJNGAPB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFOIOFKONL_ICOELJNGAPB_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFOIOFKONL_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 EOMNALDJOIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFOIOFKONL_EOMNALDJOIL_OFFSET))(this);
	}

	::System::String* EEFLCOKJGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFOIOFKONL_EEFLCOKJGLA_OFFSET))(this);
	}

	/*
	::NAFOIOFKONL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NAFOIOFKONL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAFOIOFKONL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BMGFPALBIJC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFOIOFKONL_BMGFPALBIJC_OFFSET))(this);
	}
};
