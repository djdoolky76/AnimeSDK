#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JOOOIMGAEMP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JOOOIMGAEMP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JOOOIMGAEMP_ELLMJDLCBJB_OFFSET UNITYSDK_OFFSET(0x754920)
#define JOOOIMGAEMP_FFHGPBBEGEF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JOOOIMGAEMP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JOOOIMGAEMP_MIFKBCHDOAP_OFFSET UNITYSDK_OFFSET(0x76FBF0)
#define JOOOIMGAEMP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B63AEE0)
#define JOOOIMGAEMP_PANOHFGFIHN_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define JOOOIMGAEMP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JOOOIMGAEMP_TypeDefinitionIndex = 10753;

struct alignas(4) JOOOIMGAEMP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOOIMGAEMP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOOOIMGAEMP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOOIMGAEMP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 FFHGPBBEGEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOOIMGAEMP_FFHGPBBEGEF_OFFSET))(this);
	}

	/*
	::JOOOIMGAEMP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JOOOIMGAEMP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOOOIMGAEMP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JOOOIMGAEMP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JOOOIMGAEMP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JOOOIMGAEMP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean PANOHFGFIHN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOOIMGAEMP_PANOHFGFIHN_OFFSET))(this);
	}

	::System::Int32 ELLMJDLCBJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOOIMGAEMP_ELLMJDLCBJB_OFFSET))(this);
	}

	::System::Boolean MIFKBCHDOAP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOOIMGAEMP_MIFKBCHDOAP_OFFSET))(this);
	}
};
