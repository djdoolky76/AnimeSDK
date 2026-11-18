#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GLCJLCCMLBK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GLCJLCCMLBK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GLCJLCCMLBK_CCDBAOOFMFA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define GLCJLCCMLBK_CFFIGNDOICM_OFFSET UNITYSDK_OFFSET(0x761930)
#define GLCJLCCMLBK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLCJLCCMLBK_ICNBPPMEIKB_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define GLCJLCCMLBK_OAEOELMJIIE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GLCJLCCMLBK_OGNMEDNMNHE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GLCJLCCMLBK_OLMMLKDHLBJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GLCJLCCMLBK_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x754920)
#define GLCJLCCMLBK_PKILOHFGFKF_OFFSET UNITYSDK_OFFSET(0x757290)
#define GLCJLCCMLBK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GLCJLCCMLBK_TypeDefinitionIndex = 12653;

struct alignas(4) GLCJLCCMLBK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCJLCCMLBK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLCJLCCMLBK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CCDBAOOFMFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCJLCCMLBK_CCDBAOOFMFA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCJLCCMLBK_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* OAEOELMJIIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCJLCCMLBK_OAEOELMJIIE_OFFSET))(this);
	}

	::System::Int32 ICNBPPMEIKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCJLCCMLBK_ICNBPPMEIKB_OFFSET))(this);
	}

	::System::Int32 OGNMEDNMNHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCJLCCMLBK_OGNMEDNMNHE_OFFSET))(this);
	}

	::System::String* OLMMLKDHLBJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCJLCCMLBK_OLMMLKDHLBJ_OFFSET))(this);
	}

	/*
	::GLCJLCCMLBK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLCJLCCMLBK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLCJLCCMLBK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PKILOHFGFKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCJLCCMLBK_PKILOHFGFKF_OFFSET))(this);
	}

	::System::Boolean CFFIGNDOICM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCJLCCMLBK_CFFIGNDOICM_OFFSET))(this);
	}

	::System::Int32 PDAADHDFGKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCJLCCMLBK_PDAADHDFGKP_OFFSET))(this);
	}
};
