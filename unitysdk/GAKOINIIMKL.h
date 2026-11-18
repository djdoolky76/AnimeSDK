#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GAKOINIIMKL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GAKOINIIMKL_ALCKDNFNHHD_OFFSET UNITYSDK_OFFSET(0x7D4550)
#define GAKOINIIMKL_ANEGGDENAHE_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define GAKOINIIMKL_ANMIGKPMIOA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GAKOINIIMKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GAKOINIIMKL_DJOOGNDHDAA_OFFSET UNITYSDK_OFFSET(0x755E40)
#define GAKOINIIMKL_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x757290)
#define GAKOINIIMKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GAKOINIIMKL_GKEIIKNFKJH_OFFSET UNITYSDK_OFFSET(0x755190)
#define GAKOINIIMKL_HCCNJNBJIAO_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GAKOINIIMKL_LHCDCDOMCHC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GAKOINIIMKL_LLGHEFIBJPP_OFFSET UNITYSDK_OFFSET(0x757D20)
#define GAKOINIIMKL_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x755320)
#define GAKOINIIMKL_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x756440)
#define GAKOINIIMKL_NOBEBMPMICA_OFFSET UNITYSDK_OFFSET(0x7C1C70)
#define GAKOINIIMKL_OBADNBBFBCD_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GAKOINIIMKL_PBJHIAOGPHD_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define GAKOINIIMKL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GAKOINIIMKL_TypeDefinitionIndex = 16275;

struct alignas(4) GAKOINIIMKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAKOINIIMKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PBJHIAOGPHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_PBJHIAOGPHD_OFFSET))(this);
	}

	::System::String* OBADNBBFBCD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_OBADNBBFBCD_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 DJOOGNDHDAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_DJOOGNDHDAA_OFFSET))(this);
	}

	::System::Boolean ALCKDNFNHHD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_ALCKDNFNHHD_OFFSET))(this);
	}

	::System::String* ANEGGDENAHE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_ANEGGDENAHE_OFFSET))(this);
	}

	/*
	::GAKOINIIMKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GAKOINIIMKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAKOINIIMKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LHCDCDOMCHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_LHCDCDOMCHC_OFFSET))(this);
	}

	::System::String* LLGHEFIBJPP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_LLGHEFIBJPP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 GKEIIKNFKJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_GKEIIKNFKJH_OFFSET))(this);
	}

	::System::Boolean NOBEBMPMICA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_NOBEBMPMICA_OFFSET))(this);
	}

	::System::Int32 ANMIGKPMIOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_ANMIGKPMIOA_OFFSET))(this);
	}

	::System::String* HCCNJNBJIAO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_HCCNJNBJIAO_OFFSET))(this);
	}

	::System::Int32 NGKOPBCHFOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_NGKOPBCHFOP_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKOINIIMKL_LNOBBAIGKJL_OFFSET))(this);
	}
};
