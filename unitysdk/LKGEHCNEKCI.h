#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LKGEHCNEKCI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LKGEHCNEKCI_AFDKMEKANEH_OFFSET UNITYSDK_OFFSET(0x755260)
#define LKGEHCNEKCI_AHMIBKNNIBM_OFFSET UNITYSDK_OFFSET(0x757D20)
#define LKGEHCNEKCI_BAFPGMCLAGF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LKGEHCNEKCI_BBJPNPFPFOK_OFFSET UNITYSDK_OFFSET(0x7A5700)
#define LKGEHCNEKCI_BENFLKBGKOD_OFFSET UNITYSDK_OFFSET(0x761000)
#define LKGEHCNEKCI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LKGEHCNEKCI_BNHEAFCOILJ_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define LKGEHCNEKCI_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LKGEHCNEKCI_DHDIOCOGIDP_OFFSET UNITYSDK_OFFSET(0x7631A0)
#define LKGEHCNEKCI_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define LKGEHCNEKCI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LKGEHCNEKCI_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x757190)
#define LKGEHCNEKCI_HAECLLIGKED_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define LKGEHCNEKCI_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LKGEHCNEKCI_JBHHFDOHCFC_OFFSET UNITYSDK_OFFSET(0x762A90)
#define LKGEHCNEKCI_KLGAECCEMKC_OFFSET UNITYSDK_OFFSET(0x757690)
#define LKGEHCNEKCI_KPINILEMPGA_OFFSET UNITYSDK_OFFSET(0x757760)
#define LKGEHCNEKCI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17337C60)
#define LKGEHCNEKCI_OCHHBPKLBNC_OFFSET UNITYSDK_OFFSET(0x789B10)
#define LKGEHCNEKCI_PGFOLCNDHKD_OFFSET UNITYSDK_OFFSET(0x762910)
#define LKGEHCNEKCI_PKLHBMBBNCA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define LKGEHCNEKCI_PNDMDJDODCB_OFFSET UNITYSDK_OFFSET(0x755570)
#define LKGEHCNEKCI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LKGEHCNEKCI_TypeDefinitionIndex = 10076;

struct alignas(4) LKGEHCNEKCI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKGEHCNEKCI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LKGEHCNEKCI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LKGEHCNEKCI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* BNHEAFCOILJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_BNHEAFCOILJ_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	::LKGEHCNEKCI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LKGEHCNEKCI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* AHMIBKNNIBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_AHMIBKNNIBM_OFFSET))(this);
	}

	::System::Int32 PGFOLCNDHKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_PGFOLCNDHKD_OFFSET))(this);
	}

	::System::String* KPINILEMPGA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_KPINILEMPGA_OFFSET))(this);
	}

	::System::String* HAECLLIGKED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_HAECLLIGKED_OFFSET))(this);
	}

	::System::Boolean BBJPNPFPFOK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_BBJPNPFPFOK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* PKLHBMBBNCA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_PKLHBMBBNCA_OFFSET))(this);
	}

	::System::String* PNDMDJDODCB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_PNDMDJDODCB_OFFSET))(this);
	}

	::System::Int32 DHDIOCOGIDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_DHDIOCOGIDP_OFFSET))(this);
	}

	::System::String* BENFLKBGKOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_BENFLKBGKOD_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_ENJENAJGHFI_OFFSET))(this);
	}

	::System::String* JBHHFDOHCFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_JBHHFDOHCFC_OFFSET))(this);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Int32 AFDKMEKANEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_AFDKMEKANEH_OFFSET))(this);
	}

	::System::Int32 BAFPGMCLAGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_BAFPGMCLAGF_OFFSET))(this);
	}

	::System::String* KLGAECCEMKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_KLGAECCEMKC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean OCHHBPKLBNC(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LKGEHCNEKCI_OCHHBPKLBNC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
