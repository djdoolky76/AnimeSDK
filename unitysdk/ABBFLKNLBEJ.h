#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ABBFLKNLBEJ_AFOGBDCMPNF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ABBFLKNLBEJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ABBFLKNLBEJ_CCIGIACLLPF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ABBFLKNLBEJ_DDKKJOFODIP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define ABBFLKNLBEJ_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ABBFLKNLBEJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ABBFLKNLBEJ_GIJINLEADED_OFFSET UNITYSDK_OFFSET(0x755A00)
#define ABBFLKNLBEJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1576A020)
#define ABBFLKNLBEJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ABBFLKNLBEJ_TypeDefinitionIndex = 13154;

struct alignas(4) ABBFLKNLBEJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBFLKNLBEJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABBFLKNLBEJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ABBFLKNLBEJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABBFLKNLBEJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABBFLKNLBEJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* AFOGBDCMPNF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBFLKNLBEJ_AFOGBDCMPNF_OFFSET))(this);
	}

	::System::String* GIJINLEADED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBFLKNLBEJ_GIJINLEADED_OFFSET))(this);
	}

	::System::String* CCIGIACLLPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBFLKNLBEJ_CCIGIACLLPF_OFFSET))(this);
	}

	/*
	static ::ABBFLKNLBEJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ABBFLKNLBEJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ABBFLKNLBEJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBFLKNLBEJ_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::String* DDKKJOFODIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBFLKNLBEJ_DDKKJOFODIP_OFFSET))(this);
	}
};
