#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JALCEGMFNHB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JALCEGMFNHB_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JALCEGMFNHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JALCEGMFNHB_DOFLCNACOKC_OFFSET UNITYSDK_OFFSET(0x754920)
#define JALCEGMFNHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JALCEGMFNHB_IEJBHOLKNPO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JALCEGMFNHB_JFNBMOEDJKH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JALCEGMFNHB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BAEE620)
#define JALCEGMFNHB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JALCEGMFNHB_TypeDefinitionIndex = 15036;

struct alignas(4) JALCEGMFNHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JALCEGMFNHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JALCEGMFNHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DOFLCNACOKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JALCEGMFNHB_DOFLCNACOKC_OFFSET))(this);
	}

	::System::String* JFNBMOEDJKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JALCEGMFNHB_JFNBMOEDJKH_OFFSET))(this);
	}

	/*
	::JALCEGMFNHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JALCEGMFNHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JALCEGMFNHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* AJFFCMNAIEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JALCEGMFNHB_AJFFCMNAIEN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JALCEGMFNHB_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IEJBHOLKNPO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JALCEGMFNHB_IEJBHOLKNPO_OFFSET))(this);
	}

	/*
	static ::JALCEGMFNHB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JALCEGMFNHB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JALCEGMFNHB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
