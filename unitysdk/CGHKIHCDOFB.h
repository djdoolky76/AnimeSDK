#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CGHKIHCDOFB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CGHKIHCDOFB_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CGHKIHCDOFB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CGHKIHCDOFB_IOJPEFBJNAD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CGHKIHCDOFB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F2B7E0)
#define CGHKIHCDOFB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CGHKIHCDOFB_TypeDefinitionIndex = 13199;

struct alignas(4) CGHKIHCDOFB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHKIHCDOFB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGHKIHCDOFB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CGHKIHCDOFB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CGHKIHCDOFB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGHKIHCDOFB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CGHKIHCDOFB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CGHKIHCDOFB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CGHKIHCDOFB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IOJPEFBJNAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHKIHCDOFB_IOJPEFBJNAD_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHKIHCDOFB_DNKLBHKEDEM_OFFSET))(this);
	}
};
