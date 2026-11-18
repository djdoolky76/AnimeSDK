#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LIFHIOPNGIC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LIFHIOPNGIC_EPDHLJJHEBG_OFFSET UNITYSDK_OFFSET(0x754970)
#define LIFHIOPNGIC_FGNDPHHBOHC_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LIFHIOPNGIC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LIFHIOPNGIC_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LIFHIOPNGIC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19DA8EA0)
#define LIFHIOPNGIC_ODKAFLJKNFP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LIFHIOPNGIC_PEIMCJBOLNJ_OFFSET UNITYSDK_OFFSET(0x758780)
#define LIFHIOPNGIC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LIFHIOPNGIC_TypeDefinitionIndex = 17015;

struct alignas(4) LIFHIOPNGIC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFHIOPNGIC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIFHIOPNGIC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FGNDPHHBOHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFHIOPNGIC_FGNDPHHBOHC_OFFSET))(this);
	}

	/*
	static ::LIFHIOPNGIC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LIFHIOPNGIC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LIFHIOPNGIC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ODKAFLJKNFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFHIOPNGIC_ODKAFLJKNFP_OFFSET))(this);
	}

	::System::Int32 EPDHLJJHEBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFHIOPNGIC_EPDHLJJHEBG_OFFSET))(this);
	}

	::System::Int32 PEIMCJBOLNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFHIOPNGIC_PEIMCJBOLNJ_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFHIOPNGIC_LPFMNKEFPMM_OFFSET))(this);
	}

	/*
	::LIFHIOPNGIC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIFHIOPNGIC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIFHIOPNGIC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
