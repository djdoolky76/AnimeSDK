#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JMOMGAJINCE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JMOMGAJINCE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JMOMGAJINCE_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JMOMGAJINCE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B89C2F0)
#define JMOMGAJINCE_PJCCDMGHNJP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JMOMGAJINCE_PJKLEBBCMEB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JMOMGAJINCE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JMOMGAJINCE_TypeDefinitionIndex = 9685;

struct alignas(4) JMOMGAJINCE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOMGAJINCE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMOMGAJINCE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOMGAJINCE_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Int32 PJKLEBBCMEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOMGAJINCE_PJKLEBBCMEB_OFFSET))(this);
	}

	/*
	::JMOMGAJINCE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMOMGAJINCE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMOMGAJINCE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PJCCDMGHNJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOMGAJINCE_PJCCDMGHNJP_OFFSET))(this);
	}

	/*
	static ::JMOMGAJINCE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JMOMGAJINCE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JMOMGAJINCE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
