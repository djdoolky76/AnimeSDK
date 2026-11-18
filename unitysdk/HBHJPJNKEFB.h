#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HBHJPJNKEFB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HBHJPJNKEFB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HBHJPJNKEFB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HBHJPJNKEFB_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HBHJPJNKEFB_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HBHJPJNKEFB_LENCEGIELFL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HBHJPJNKEFB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152D5A40)
#define HBHJPJNKEFB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HBHJPJNKEFB_TypeDefinitionIndex = 11964;

struct alignas(4) HBHJPJNKEFB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBHJPJNKEFB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBHJPJNKEFB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HBHJPJNKEFB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HBHJPJNKEFB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HBHJPJNKEFB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBHJPJNKEFB_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* LENCEGIELFL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBHJPJNKEFB_LENCEGIELFL_OFFSET))(this);
	}

	/*
	::HBHJPJNKEFB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBHJPJNKEFB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBHJPJNKEFB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBHJPJNKEFB_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBHJPJNKEFB_HKELPCLHLEC_OFFSET))(this);
	}
};
