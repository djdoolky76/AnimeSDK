#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PLKGJLENECO_AAFNAMAEOGF_OFFSET UNITYSDK_OFFSET(0x756440)
#define PLKGJLENECO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PLKGJLENECO_AFDKMEKANEH_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define PLKGJLENECO_BAFPGMCLAGF_OFFSET UNITYSDK_OFFSET(0x757450)
#define PLKGJLENECO_BBJPNPFPFOK_OFFSET UNITYSDK_OFFSET(0x756140)
#define PLKGJLENECO_BENFLKBGKOD_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define PLKGJLENECO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PLKGJLENECO_BNHEAFCOILJ_OFFSET UNITYSDK_OFFSET(0x7606B0)
#define PLKGJLENECO_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x755710)
#define PLKGJLENECO_DHDIOCOGIDP_OFFSET UNITYSDK_OFFSET(0x761980)
#define PLKGJLENECO_DHNOLPMMNCN_OFFSET UNITYSDK_OFFSET(0x762A10)
#define PLKGJLENECO_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x758320)
#define PLKGJLENECO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLKGJLENECO_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define PLKGJLENECO_GPODGBEGJHK_OFFSET UNITYSDK_OFFSET(0x755370)
#define PLKGJLENECO_HAECLLIGKED_OFFSET UNITYSDK_OFFSET(0x757E20)
#define PLKGJLENECO_JBHHFDOHCFC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PLKGJLENECO_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x757760)
#define PLKGJLENECO_LPFHBOMNFPE_OFFSET UNITYSDK_OFFSET(0x762910)
#define PLKGJLENECO_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define PLKGJLENECO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0E01E0)
#define PLKGJLENECO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PLKGJLENECO_TypeDefinitionIndex = 13462;

struct alignas(4) PLKGJLENECO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLKGJLENECO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* JBHHFDOHCFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_JBHHFDOHCFC_OFFSET))(this);
	}

	::System::Int32 AFDKMEKANEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_AFDKMEKANEH_OFFSET))(this);
	}

	::System::Int32 BAFPGMCLAGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_BAFPGMCLAGF_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Boolean DHNOLPMMNCN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PLKGJLENECO_DHNOLPMMNCN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_NKCNGLADFNA_OFFSET))(this);
	}

	::System::String* BNHEAFCOILJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_BNHEAFCOILJ_OFFSET))(this);
	}

	::System::Int32 LPFHBOMNFPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_LPFHBOMNFPE_OFFSET))(this);
	}

	::System::String* JLEGHNGEBOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_JLEGHNGEBOG_OFFSET))(this);
	}

	/*
	::PLKGJLENECO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLKGJLENECO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLKGJLENECO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DHDIOCOGIDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_DHDIOCOGIDP_OFFSET))(this);
	}

	::System::Int32 AAFNAMAEOGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_AAFNAMAEOGF_OFFSET))(this);
	}

	/*
	static ::PLKGJLENECO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 JGKNCPMELON, ::System::Int32 BPJGOHCLDGM, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PLKGJLENECO(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PLKGJLENECO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, JGKNCPMELON, BPJGOHCLDGM, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GPODGBEGJHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_GPODGBEGJHK_OFFSET))(this);
	}

	::System::Boolean BBJPNPFPFOK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PLKGJLENECO_BBJPNPFPFOK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* BENFLKBGKOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_BENFLKBGKOD_OFFSET))(this);
	}

	::System::String* HAECLLIGKED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_HAECLLIGKED_OFFSET))(this);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKGJLENECO_GPBFENDAJMF_OFFSET))(this);
	}
};
