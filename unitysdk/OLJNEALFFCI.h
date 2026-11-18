#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OLJNEALFFCI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OLJNEALFFCI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OLJNEALFFCI_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define OLJNEALFFCI_DBCCHAJMJEO_OFFSET UNITYSDK_OFFSET(0x7636B0)
#define OLJNEALFFCI_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OLJNEALFFCI_DPNEEJMJLFF_OFFSET UNITYSDK_OFFSET(0x761BD0)
#define OLJNEALFFCI_EGOBLICIMPB_OFFSET UNITYSDK_OFFSET(0x758E30)
#define OLJNEALFFCI_ELJPPPBJKAJ_OFFSET UNITYSDK_OFFSET(0x761710)
#define OLJNEALFFCI_FFEMJINMDBE_OFFSET UNITYSDK_OFFSET(0x755260)
#define OLJNEALFFCI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OLJNEALFFCI_IBLOCABKIHP_OFFSET UNITYSDK_OFFSET(0x763C00)
#define OLJNEALFFCI_ICEPJNCOIBO_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define OLJNEALFFCI_IMBKNAADDJM_OFFSET UNITYSDK_OFFSET(0x754970)
#define OLJNEALFFCI_JIJHAOLLAEC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OLJNEALFFCI_LEHJFMAMFJO_OFFSET UNITYSDK_OFFSET(0x7618B0)
#define OLJNEALFFCI_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define OLJNEALFFCI_MIFGEOAHFJP_OFFSET UNITYSDK_OFFSET(0x7AD3A0)
#define OLJNEALFFCI_NEBLIFEABCP_OFFSET UNITYSDK_OFFSET(0x758320)
#define OLJNEALFFCI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x191380E0)
#define OLJNEALFFCI_PKLHBMBBNCA_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define OLJNEALFFCI_PMBCAKACFJP_OFFSET UNITYSDK_OFFSET(0x756B10)
#define OLJNEALFFCI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OLJNEALFFCI_TypeDefinitionIndex = 13475;

struct alignas(4) OLJNEALFFCI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLJNEALFFCI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 IMBKNAADDJM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_IMBKNAADDJM_OFFSET))(this);
	}

	::System::String* LFPFCAFBOEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_LFPFCAFBOEK_OFFSET))(this);
	}

	::System::String* NEBLIFEABCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_NEBLIFEABCP_OFFSET))(this);
	}

	::System::String* ELJPPPBJKAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_ELJPPPBJKAJ_OFFSET))(this);
	}

	::System::String* ICEPJNCOIBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_ICEPJNCOIBO_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* LEHJFMAMFJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_LEHJFMAMFJO_OFFSET))(this);
	}

	/*
	::OLJNEALFFCI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLJNEALFFCI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLJNEALFFCI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PKLHBMBBNCA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_PKLHBMBBNCA_OFFSET))(this);
	}

	::System::Int32 EGOBLICIMPB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_EGOBLICIMPB_OFFSET))(this);
	}

	::System::Boolean DBCCHAJMJEO(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + OLJNEALFFCI_DBCCHAJMJEO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* PMBCAKACFJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_PMBCAKACFJP_OFFSET))(this);
	}

	::System::Int32 DPNEEJMJLFF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_DPNEEJMJLFF_OFFSET))(this);
	}

	::System::String* BHMMKDGCLGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Int32 FFEMJINMDBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_FFEMJINMDBE_OFFSET))(this);
	}

	::System::Int32 JIJHAOLLAEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJNEALFFCI_JIJHAOLLAEC_OFFSET))(this);
	}

	::System::Boolean IBLOCABKIHP(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + OLJNEALFFCI_IBLOCABKIHP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OLJNEALFFCI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OLJNEALFFCI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OLJNEALFFCI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean MIFGEOAHFJP(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + OLJNEALFFCI_MIFGEOAHFJP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
