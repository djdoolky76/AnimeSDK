#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IKOPEHLPKNG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HCAOGAAOHLB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HCAOGAAOHLB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HCAOGAAOHLB_DABPDLIEFLM_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define HCAOGAAOHLB_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x755890)
#define HCAOGAAOHLB_GEAIDCBOJNI_OFFSET UNITYSDK_OFFSET(0x756440)
#define HCAOGAAOHLB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCAOGAAOHLB_HAIBKBNCFHP_OFFSET UNITYSDK_OFFSET(0x756720)
#define HCAOGAAOHLB_JNNIOGKJIMO_OFFSET UNITYSDK_OFFSET(0x755190)
#define HCAOGAAOHLB_KGAJODAINDL_OFFSET UNITYSDK_OFFSET(0x7EA020)
#define HCAOGAAOHLB_NDDMOGPKLKA_OFFSET UNITYSDK_OFFSET(0x757190)
#define HCAOGAAOHLB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5C5B60)
#define HCAOGAAOHLB_OCELFCLHBBG_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define HCAOGAAOHLB_PIDNKEMCENJ_OFFSET UNITYSDK_OFFSET(0x754A70)
#define HCAOGAAOHLB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HCAOGAAOHLB_TypeDefinitionIndex = 17213;

struct alignas(4) HCAOGAAOHLB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAOGAAOHLB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCAOGAAOHLB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JNNIOGKJIMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAOGAAOHLB_JNNIOGKJIMO_OFFSET))(this);
	}

	/*
	static ::HCAOGAAOHLB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HCAOGAAOHLB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HCAOGAAOHLB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAOGAAOHLB_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::HCAOGAAOHLB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCAOGAAOHLB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCAOGAAOHLB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAOGAAOHLB_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::Boolean KGAJODAINDL(::System::Int32 HPMEONKHFGG, ::IKOPEHLPKNG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IKOPEHLPKNG&))((::PBYTE)hIl2Cpp + HCAOGAAOHLB_KGAJODAINDL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HAIBKBNCFHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAOGAAOHLB_HAIBKBNCFHP_OFFSET))(this);
	}

	::System::Boolean PIDNKEMCENJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HCAOGAAOHLB_PIDNKEMCENJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OCELFCLHBBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAOGAAOHLB_OCELFCLHBBG_OFFSET))(this);
	}

	::System::Int32 DABPDLIEFLM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAOGAAOHLB_DABPDLIEFLM_OFFSET))(this);
	}

	::System::String* NDDMOGPKLKA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAOGAAOHLB_NDDMOGPKLKA_OFFSET))(this);
	}

	::System::Int32 GEAIDCBOJNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAOGAAOHLB_GEAIDCBOJNI_OFFSET))(this);
	}
};
