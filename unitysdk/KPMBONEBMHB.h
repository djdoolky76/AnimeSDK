#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KPMBONEBMHB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KPMBONEBMHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KPMBONEBMHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KPMBONEBMHB_GPCKAGNJOGI_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define KPMBONEBMHB_IGDDEPJJBJE_OFFSET UNITYSDK_OFFSET(0x754C20)
#define KPMBONEBMHB_JFBACAMKFDI_OFFSET UNITYSDK_OFFSET(0x755790)
#define KPMBONEBMHB_MKDFJACFCIN_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define KPMBONEBMHB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18DF3180)
#define KPMBONEBMHB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KPMBONEBMHB_TypeDefinitionIndex = 17050;

struct alignas(4) KPMBONEBMHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMBONEBMHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPMBONEBMHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean GPCKAGNJOGI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KPMBONEBMHB_GPCKAGNJOGI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMBONEBMHB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean MKDFJACFCIN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KPMBONEBMHB_MKDFJACFCIN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KPMBONEBMHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPMBONEBMHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPMBONEBMHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IGDDEPJJBJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMBONEBMHB_IGDDEPJJBJE_OFFSET))(this);
	}

	::System::Int32 JFBACAMKFDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMBONEBMHB_JFBACAMKFDI_OFFSET))(this);
	}

	/*
	static ::KPMBONEBMHB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KPMBONEBMHB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KPMBONEBMHB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
