#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IKKMDLNEIKO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IKKMDLNEIKO_EDEEHOEBCHI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IKKMDLNEIKO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IKKMDLNEIKO_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IKKMDLNEIKO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B628330)
#define IKKMDLNEIKO_OPCFEFMMJFA_OFFSET UNITYSDK_OFFSET(0x766400)
#define IKKMDLNEIKO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IKKMDLNEIKO_TypeDefinitionIndex = 11957;

struct alignas(4) IKKMDLNEIKO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKMDLNEIKO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKKMDLNEIKO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean OPCFEFMMJFA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKMDLNEIKO_OPCFEFMMJFA_OFFSET))(this);
	}

	::System::String* EDEEHOEBCHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKMDLNEIKO_EDEEHOEBCHI_OFFSET))(this);
	}

	/*
	::IKKMDLNEIKO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IKKMDLNEIKO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKKMDLNEIKO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKMDLNEIKO_NKCNGLADFNA_OFFSET))(this);
	}

	/*
	static ::IKKMDLNEIKO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IKKMDLNEIKO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IKKMDLNEIKO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
