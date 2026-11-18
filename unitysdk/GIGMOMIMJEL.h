#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GIGMOMIMJEL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GIGMOMIMJEL_CAJBHDLHHJE_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define GIGMOMIMJEL_DPJFPPNNBJB_OFFSET UNITYSDK_OFFSET(0x761240)
#define GIGMOMIMJEL_EOEFOJMNHLO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GIGMOMIMJEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GIGMOMIMJEL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BACAB80)
#define GIGMOMIMJEL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GIGMOMIMJEL_TypeDefinitionIndex = 17122;

struct alignas(4) GIGMOMIMJEL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGMOMIMJEL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIGMOMIMJEL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GIGMOMIMJEL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GIGMOMIMJEL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GIGMOMIMJEL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 EOEFOJMNHLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGMOMIMJEL_EOEFOJMNHLO_OFFSET))(this);
	}

	::System::Int32 DPJFPPNNBJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGMOMIMJEL_DPJFPPNNBJB_OFFSET))(this);
	}

	/*
	::GIGMOMIMJEL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GIGMOMIMJEL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIGMOMIMJEL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean CAJBHDLHHJE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GIGMOMIMJEL_CAJBHDLHHJE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
