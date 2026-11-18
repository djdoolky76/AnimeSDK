#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PFNOINNHGCN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PFNOINNHGCN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PFNOINNHGCN_CCDBAOOFMFA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define PFNOINNHGCN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PFNOINNHGCN_OGNMEDNMNHE_OFFSET UNITYSDK_OFFSET(0x754970)
#define PFNOINNHGCN_OLMMLKDHLBJ_OFFSET UNITYSDK_OFFSET(0x756B10)
#define PFNOINNHGCN_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define PFNOINNHGCN_PKILOHFGFKF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PFNOINNHGCN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PFNOINNHGCN_TypeDefinitionIndex = 13134;

struct alignas(4) PFNOINNHGCN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNOINNHGCN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFNOINNHGCN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PDAADHDFGKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNOINNHGCN_PDAADHDFGKP_OFFSET))(this);
	}

	/*
	::PFNOINNHGCN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFNOINNHGCN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFNOINNHGCN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* OLMMLKDHLBJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNOINNHGCN_OLMMLKDHLBJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNOINNHGCN_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* PKILOHFGFKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNOINNHGCN_PKILOHFGFKF_OFFSET))(this);
	}

	::System::Int32 OGNMEDNMNHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNOINNHGCN_OGNMEDNMNHE_OFFSET))(this);
	}

	::System::String* CCDBAOOFMFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNOINNHGCN_CCDBAOOFMFA_OFFSET))(this);
	}
};
