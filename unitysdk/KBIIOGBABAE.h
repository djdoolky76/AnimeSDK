#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KBIIOGBABAE_ACNKCONGPKG_OFFSET UNITYSDK_OFFSET(0x757E20)
#define KBIIOGBABAE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KBIIOGBABAE_APIIIGIHJCD_OFFSET UNITYSDK_OFFSET(0x756220)
#define KBIIOGBABAE_BBJGHAGDKOM_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define KBIIOGBABAE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KBIIOGBABAE_DIKAFINONAF_OFFSET UNITYSDK_OFFSET(0x7588B0)
#define KBIIOGBABAE_DNGGOCLEHLM_OFFSET UNITYSDK_OFFSET(0x755710)
#define KBIIOGBABAE_FFGMGMOHIIO_OFFSET UNITYSDK_OFFSET(0x761710)
#define KBIIOGBABAE_GCIPHBIEFIE_OFFSET UNITYSDK_OFFSET(0x757190)
#define KBIIOGBABAE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBIIOGBABAE_GPHPKFDJOIO_OFFSET UNITYSDK_OFFSET(0x763920)
#define KBIIOGBABAE_HOEFNCKELMB_OFFSET UNITYSDK_OFFSET(0x7578F0)
#define KBIIOGBABAE_HPDIKKKGINP_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define KBIIOGBABAE_IOEHNECCDGE_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define KBIIOGBABAE_JIMBCOANCEH_OFFSET UNITYSDK_OFFSET(0x757330)
#define KBIIOGBABAE_KCJFIJLMFCD_OFFSET UNITYSDK_OFFSET(0x756720)
#define KBIIOGBABAE_KPDGMKDDMAM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KBIIOGBABAE_LKGBPNAPBEH_OFFSET UNITYSDK_OFFSET(0x754920)
#define KBIIOGBABAE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B142A10)
#define KBIIOGBABAE_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KBIIOGBABAE_OHODLCEJHFI_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define KBIIOGBABAE_OOKLPHOIEKC_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define KBIIOGBABAE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KBIIOGBABAE_TypeDefinitionIndex = 15726;

struct alignas(4) KBIIOGBABAE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBIIOGBABAE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean GPHPKFDJOIO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KBIIOGBABAE_GPHPKFDJOIO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* FFGMGMOHIIO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_FFGMGMOHIIO_OFFSET))(this);
	}

	::System::Int32 JIMBCOANCEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_JIMBCOANCEH_OFFSET))(this);
	}

	::System::Int32 KPDGMKDDMAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_KPDGMKDDMAM_OFFSET))(this);
	}

	::System::Int32 BBJGHAGDKOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_BBJGHAGDKOM_OFFSET))(this);
	}

	::System::Boolean HOEFNCKELMB(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + KBIIOGBABAE_HOEFNCKELMB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LKGBPNAPBEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_LKGBPNAPBEH_OFFSET))(this);
	}

	::System::Int32 OHODLCEJHFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_OHODLCEJHFI_OFFSET))(this);
	}

	::System::Int32 HPDIKKKGINP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_HPDIKKKGINP_OFFSET))(this);
	}

	::System::Int32 APIIIGIHJCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_APIIIGIHJCD_OFFSET))(this);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_OEBELJGDNCE_OFFSET))(this);
	}

	::System::String* ACNKCONGPKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_ACNKCONGPKG_OFFSET))(this);
	}

	::System::Int32 KCJFIJLMFCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_KCJFIJLMFCD_OFFSET))(this);
	}

	::System::String* IOEHNECCDGE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_IOEHNECCDGE_OFFSET))(this);
	}

	::System::Boolean OOKLPHOIEKC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KBIIOGBABAE_OOKLPHOIEKC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::KBIIOGBABAE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBIIOGBABAE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBIIOGBABAE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean DIKAFINONAF(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + KBIIOGBABAE_DIKAFINONAF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* DNGGOCLEHLM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_DNGGOCLEHLM_OFFSET))(this);
	}

	/*
	static ::KBIIOGBABAE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KBIIOGBABAE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KBIIOGBABAE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GCIPHBIEFIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIIOGBABAE_GCIPHBIEFIE_OFFSET))(this);
	}
};
