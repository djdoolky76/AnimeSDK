#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LBHMCBPCACM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LBHMCBPCACM_CHCJBFFDBNF_OFFSET UNITYSDK_OFFSET(0x758780)
#define LBHMCBPCACM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LBHMCBPCACM_GJCLOMGJKIB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LBHMCBPCACM_JEBMBHFOLCL_OFFSET UNITYSDK_OFFSET(0x756D50)
#define LBHMCBPCACM_KKNNPLPEOFO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LBHMCBPCACM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1612AB50)
#define LBHMCBPCACM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LBHMCBPCACM_TypeDefinitionIndex = 13252;

struct alignas(4) LBHMCBPCACM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHMCBPCACM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBHMCBPCACM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GJCLOMGJKIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHMCBPCACM_GJCLOMGJKIB_OFFSET))(this);
	}

	::System::Int32 KKNNPLPEOFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHMCBPCACM_KKNNPLPEOFO_OFFSET))(this);
	}

	::System::Int32 CHCJBFFDBNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHMCBPCACM_CHCJBFFDBNF_OFFSET))(this);
	}

	/*
	static ::LBHMCBPCACM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LBHMCBPCACM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LBHMCBPCACM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* JEBMBHFOLCL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHMCBPCACM_JEBMBHFOLCL_OFFSET))(this);
	}

	/*
	::LBHMCBPCACM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBHMCBPCACM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBHMCBPCACM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
