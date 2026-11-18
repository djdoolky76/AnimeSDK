#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OICFHEBNAEE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KBACPMBPKEB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KBACPMBPKEB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KBACPMBPKEB_CBFABJJBIOD_OFFSET UNITYSDK_OFFSET(0x756440)
#define KBACPMBPKEB_CEINNDGEIHD_OFFSET UNITYSDK_OFFSET(0x754920)
#define KBACPMBPKEB_DMOLIELPHPA_OFFSET UNITYSDK_OFFSET(0x7666F0)
#define KBACPMBPKEB_EJMJMJCIKMF_OFFSET UNITYSDK_OFFSET(0x76FA90)
#define KBACPMBPKEB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBACPMBPKEB_GKOKJPOPMDA_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KBACPMBPKEB_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define KBACPMBPKEB_HNPIFGEHMKL_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define KBACPMBPKEB_IICIBABMACP_OFFSET UNITYSDK_OFFSET(0x756720)
#define KBACPMBPKEB_KMHJBEEJCJL_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define KBACPMBPKEB_MHCKLCJJLIF_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define KBACPMBPKEB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x174918A0)
#define KBACPMBPKEB_ONLLMDIGMPA_OFFSET UNITYSDK_OFFSET(0x758320)
#define KBACPMBPKEB_PAIPIOOCDAJ_OFFSET UNITYSDK_OFFSET(0x761240)
#define KBACPMBPKEB_PGANNIPJBCM_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KBACPMBPKEB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KBACPMBPKEB_TypeDefinitionIndex = 15277;

struct alignas(4) KBACPMBPKEB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACPMBPKEB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBACPMBPKEB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CEINNDGEIHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACPMBPKEB_CEINNDGEIHD_OFFSET))(this);
	}

	/*
	::KBACPMBPKEB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBACPMBPKEB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBACPMBPKEB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IICIBABMACP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACPMBPKEB_IICIBABMACP_OFFSET))(this);
	}

	::System::Boolean HNPIFGEHMKL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KBACPMBPKEB_HNPIFGEHMKL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KBACPMBPKEB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KBACPMBPKEB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KBACPMBPKEB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Single DMOLIELPHPA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACPMBPKEB_DMOLIELPHPA_OFFSET))(this);
	}

	::System::Int32 MHCKLCJJLIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACPMBPKEB_MHCKLCJJLIF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACPMBPKEB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACPMBPKEB_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* ONLLMDIGMPA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACPMBPKEB_ONLLMDIGMPA_OFFSET))(this);
	}

	::System::Int32 CBFABJJBIOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACPMBPKEB_CBFABJJBIOD_OFFSET))(this);
	}

	::System::String* PGANNIPJBCM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACPMBPKEB_PGANNIPJBCM_OFFSET))(this);
	}

	::System::Int32 PAIPIOOCDAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACPMBPKEB_PAIPIOOCDAJ_OFFSET))(this);
	}

	::System::Boolean EJMJMJCIKMF(::System::Int32 HPMEONKHFGG, ::OICFHEBNAEE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OICFHEBNAEE&))((::PBYTE)hIl2Cpp + KBACPMBPKEB_EJMJMJCIKMF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* KMHJBEEJCJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACPMBPKEB_KMHJBEEJCJL_OFFSET))(this);
	}

	::System::String* GKOKJPOPMDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACPMBPKEB_GKOKJPOPMDA_OFFSET))(this);
	}
};
