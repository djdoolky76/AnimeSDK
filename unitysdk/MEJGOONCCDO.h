#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MEJGOONCCDO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MEJGOONCCDO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEJGOONCCDO_KKJBOOCKLJE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MEJGOONCCDO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BB15A80)
#define MEJGOONCCDO_POKLHIKGCOC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MEJGOONCCDO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MEJGOONCCDO_TypeDefinitionIndex = 9170;

struct alignas(4) MEJGOONCCDO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJGOONCCDO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEJGOONCCDO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MEJGOONCCDO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MEJGOONCCDO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MEJGOONCCDO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 POKLHIKGCOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJGOONCCDO_POKLHIKGCOC_OFFSET))(this);
	}

	::System::String* KKJBOOCKLJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJGOONCCDO_KKJBOOCKLJE_OFFSET))(this);
	}

	/*
	::MEJGOONCCDO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEJGOONCCDO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEJGOONCCDO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
