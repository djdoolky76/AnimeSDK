#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DMPOFOEKFJF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DMPOFOEKFJF_BENFLKBGKOD_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define DMPOFOEKFJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DMPOFOEKFJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMPOFOEKFJF_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x758780)
#define DMPOFOEKFJF_KFEGMMNHELM_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define DMPOFOEKFJF_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DMPOFOEKFJF_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x755E40)
#define DMPOFOEKFJF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A9DCE0)
#define DMPOFOEKFJF_OOAMMDCDIGF_OFFSET UNITYSDK_OFFSET(0x754920)
#define DMPOFOEKFJF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DMPOFOEKFJF_TypeDefinitionIndex = 11171;

struct alignas(4) DMPOFOEKFJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPOFOEKFJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMPOFOEKFJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DMPOFOEKFJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMPOFOEKFJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMPOFOEKFJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPOFOEKFJF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 KFEGMMNHELM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPOFOEKFJF_KFEGMMNHELM_OFFSET))(this);
	}

	/*
	static ::DMPOFOEKFJF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DMPOFOEKFJF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DMPOFOEKFJF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPOFOEKFJF_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::String* BENFLKBGKOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPOFOEKFJF_BENFLKBGKOD_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPOFOEKFJF_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 OOAMMDCDIGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPOFOEKFJF_OOAMMDCDIGF_OFFSET))(this);
	}

	::System::Int32 IGKFAFBGBAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPOFOEKFJF_IGKFAFBGBAP_OFFSET))(this);
	}
};
