#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JDHJEOLLHEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JDHJEOLLHEG_GBDHPMDIJDK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JDHJEOLLHEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JDHJEOLLHEG_MFPMIFLLCAJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JDHJEOLLHEG_NHBJFCKFNCN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JDHJEOLLHEG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x193582B0)
#define JDHJEOLLHEG_OCLNGPOCFPO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JDHJEOLLHEG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JDHJEOLLHEG_TypeDefinitionIndex = 11671;

struct alignas(4) JDHJEOLLHEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHJEOLLHEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDHJEOLLHEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* OCLNGPOCFPO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHJEOLLHEG_OCLNGPOCFPO_OFFSET))(this);
	}

	::System::Int32 MFPMIFLLCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHJEOLLHEG_MFPMIFLLCAJ_OFFSET))(this);
	}

	::System::String* NHBJFCKFNCN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHJEOLLHEG_NHBJFCKFNCN_OFFSET))(this);
	}

	/*
	static ::JDHJEOLLHEG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JDHJEOLLHEG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JDHJEOLLHEG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GBDHPMDIJDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHJEOLLHEG_GBDHPMDIJDK_OFFSET))(this);
	}

	/*
	::JDHJEOLLHEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JDHJEOLLHEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDHJEOLLHEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
