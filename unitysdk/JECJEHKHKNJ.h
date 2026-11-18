#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JECJEHKHKNJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JECJEHKHKNJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JECJEHKHKNJ_EALNKIPNBND_OFFSET UNITYSDK_OFFSET(0x757C10)
#define JECJEHKHKNJ_EAMDMMOMDBB_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define JECJEHKHKNJ_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x757E20)
#define JECJEHKHKNJ_FFHEGKGPEHF_OFFSET UNITYSDK_OFFSET(0x7553C0)
#define JECJEHKHKNJ_FHOGDDPHIOC_OFFSET UNITYSDK_OFFSET(0x755440)
#define JECJEHKHKNJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JECJEHKHKNJ_HAEPBCFIKIN_OFFSET UNITYSDK_OFFSET(0x755710)
#define JECJEHKHKNJ_HAKCGJKMBFL_OFFSET UNITYSDK_OFFSET(0x755E40)
#define JECJEHKHKNJ_HCCNJNBJIAO_OFFSET UNITYSDK_OFFSET(0x761710)
#define JECJEHKHKNJ_HPPEIACLCCH_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define JECJEHKHKNJ_JIMPBGPCJPD_OFFSET UNITYSDK_OFFSET(0x756140)
#define JECJEHKHKNJ_JKLABPHIHCH_OFFSET UNITYSDK_OFFSET(0x755890)
#define JECJEHKHKNJ_LHCDCDOMCHC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JECJEHKHKNJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4F3ED0)
#define JECJEHKHKNJ_OBADNBBFBCD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JECJEHKHKNJ_OCHHBPKLBNC_OFFSET UNITYSDK_OFFSET(0x765AF0)
#define JECJEHKHKNJ_PGFOLCNDHKD_OFFSET UNITYSDK_OFFSET(0x756280)
#define JECJEHKHKNJ_PMBCAKACFJP_OFFSET UNITYSDK_OFFSET(0x757290)
#define JECJEHKHKNJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JECJEHKHKNJ_TypeDefinitionIndex = 13299;

struct alignas(4) JECJEHKHKNJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JECJEHKHKNJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* OBADNBBFBCD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_OBADNBBFBCD_OFFSET))(this);
	}

	::System::Int32 HAKCGJKMBFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_HAKCGJKMBFL_OFFSET))(this);
	}

	/*
	static ::JECJEHKHKNJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JECJEHKHKNJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean JIMPBGPCJPD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_JIMPBGPCJPD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EAMDMMOMDBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_EAMDMMOMDBB_OFFSET))(this);
	}

	::System::Boolean FFHEGKGPEHF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_FFHEGKGPEHF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FHOGDDPHIOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_FHOGDDPHIOC_OFFSET))(this);
	}

	::System::String* PMBCAKACFJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_PMBCAKACFJP_OFFSET))(this);
	}

	::System::Int32 EALNKIPNBND()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_EALNKIPNBND_OFFSET))(this);
	}

	::System::String* HPPEIACLCCH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_HPPEIACLCCH_OFFSET))(this);
	}

	/*
	::JECJEHKHKNJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JECJEHKHKNJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HCCNJNBJIAO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_HCCNJNBJIAO_OFFSET))(this);
	}

	::System::Int32 JKLABPHIHCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_JKLABPHIHCH_OFFSET))(this);
	}

	::System::Int32 PGFOLCNDHKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_PGFOLCNDHKD_OFFSET))(this);
	}

	::System::Boolean OCHHBPKLBNC(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_OCHHBPKLBNC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* HAEPBCFIKIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_HAEPBCFIKIN_OFFSET))(this);
	}

	::System::Int32 LHCDCDOMCHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECJEHKHKNJ_LHCDCDOMCHC_OFFSET))(this);
	}
};
