#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NFBBEBJKMJF_BELNCMIINKG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define NFBBEBJKMJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NFBBEBJKMJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NFBBEBJKMJF_JGJHKGBODHB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NFBBEBJKMJF_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NFBBEBJKMJF_NJGKCNDGKBA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NFBBEBJKMJF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0C5080)
#define NFBBEBJKMJF_PHEPBDPENBG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NFBBEBJKMJF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NFBBEBJKMJF_TypeDefinitionIndex = 14398;

struct alignas(4) NFBBEBJKMJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBBEBJKMJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFBBEBJKMJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NFBBEBJKMJF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NFBBEBJKMJF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NFBBEBJKMJF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBBEBJKMJF_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::String* JGJHKGBODHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBBEBJKMJF_JGJHKGBODHB_OFFSET))(this);
	}

	::System::String* NJGKCNDGKBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBBEBJKMJF_NJGKCNDGKBA_OFFSET))(this);
	}

	/*
	::NFBBEBJKMJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFBBEBJKMJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFBBEBJKMJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BELNCMIINKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBBEBJKMJF_BELNCMIINKG_OFFSET))(this);
	}

	::System::String* PHEPBDPENBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBBEBJKMJF_PHEPBDPENBG_OFFSET))(this);
	}
};
