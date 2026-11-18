#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CAMPGPOKBGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CAMPGPOKBGM_BHOCGBENING_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CAMPGPOKBGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CAMPGPOKBGM_HIGENBLIONK_OFFSET UNITYSDK_OFFSET(0x754920)
#define CAMPGPOKBGM_HIJHBGPDLLD_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CAMPGPOKBGM_IJHAIIOAONF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CAMPGPOKBGM_JLNPLGPGBLN_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CAMPGPOKBGM_PFMJELMIOHB_OFFSET UNITYSDK_OFFSET(0x756D50)
#define CAMPGPOKBGM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CAMPGPOKBGM_TypeDefinitionIndex = 11764;

struct alignas(4) CAMPGPOKBGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPGPOKBGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAMPGPOKBGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* JLNPLGPGBLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPGPOKBGM_JLNPLGPGBLN_OFFSET))(this);
	}

	::System::String* HIJHBGPDLLD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPGPOKBGM_HIJHBGPDLLD_OFFSET))(this);
	}

	::System::Int32 HIGENBLIONK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPGPOKBGM_HIGENBLIONK_OFFSET))(this);
	}

	::System::Int32 BHOCGBENING()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPGPOKBGM_BHOCGBENING_OFFSET))(this);
	}

	::System::String* PFMJELMIOHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPGPOKBGM_PFMJELMIOHB_OFFSET))(this);
	}

	::System::Int32 IJHAIIOAONF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPGPOKBGM_IJHAIIOAONF_OFFSET))(this);
	}

	/*
	::CAMPGPOKBGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAMPGPOKBGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAMPGPOKBGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
