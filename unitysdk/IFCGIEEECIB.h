#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IFCGIEEECIB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IFCGIEEECIB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IFCGIEEECIB_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define IFCGIEEECIB_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define IFCGIEEECIB_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IFCGIEEECIB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFCGIEEECIB_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define IFCGIEEECIB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4F5DD0)
#define IFCGIEEECIB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IFCGIEEECIB_TypeDefinitionIndex = 12574;

struct alignas(4) IFCGIEEECIB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCGIEEECIB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFCGIEEECIB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCGIEEECIB_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCGIEEECIB_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCGIEEECIB_IFDIOIOCGDP_OFFSET))(this);
	}

	/*
	::IFCGIEEECIB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFCGIEEECIB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFCGIEEECIB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCGIEEECIB_DPCDIABPPEE_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCGIEEECIB_DNKLBHKEDEM_OFFSET))(this);
	}

	/*
	static ::IFCGIEEECIB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IFCGIEEECIB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IFCGIEEECIB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
