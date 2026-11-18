#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CPCFDGJFLBF_AFIKPGHMNCI_OFFSET UNITYSDK_OFFSET(0x754920)
#define CPCFDGJFLBF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CPCFDGJFLBF_EDCKDFNJBIC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CPCFDGJFLBF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CPCFDGJFLBF_NMNOFIGLGGE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CPCFDGJFLBF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18793A10)
#define CPCFDGJFLBF_PMBCAKACFJP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CPCFDGJFLBF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CPCFDGJFLBF_TypeDefinitionIndex = 11577;

struct alignas(4) CPCFDGJFLBF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCFDGJFLBF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPCFDGJFLBF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PMBCAKACFJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCFDGJFLBF_PMBCAKACFJP_OFFSET))(this);
	}

	/*
	static ::CPCFDGJFLBF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CPCFDGJFLBF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CPCFDGJFLBF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 EDCKDFNJBIC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCFDGJFLBF_EDCKDFNJBIC_OFFSET))(this);
	}

	/*
	::CPCFDGJFLBF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPCFDGJFLBF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPCFDGJFLBF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AFIKPGHMNCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCFDGJFLBF_AFIKPGHMNCI_OFFSET))(this);
	}

	::System::Int32 NMNOFIGLGGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCFDGJFLBF_NMNOFIGLGGE_OFFSET))(this);
	}
};
