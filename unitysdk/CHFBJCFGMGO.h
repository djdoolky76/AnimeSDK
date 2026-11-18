#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CHFBJCFGMGO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CHFBJCFGMGO_AHMIILOCCHD_OFFSET UNITYSDK_OFFSET(0x757C10)
#define CHFBJCFGMGO_AKIIGLMCNGL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CHFBJCFGMGO_AKPFPDGNOBJ_OFFSET UNITYSDK_OFFSET(0x7D5F20)
#define CHFBJCFGMGO_BCGBGOIPOOA_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define CHFBJCFGMGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CHFBJCFGMGO_BPPGLFBPBCD_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define CHFBJCFGMGO_CMLFGJKCAHD_OFFSET UNITYSDK_OFFSET(0x755710)
#define CHFBJCFGMGO_DGCMOAJLEDC_OFFSET UNITYSDK_OFFSET(0x756D50)
#define CHFBJCFGMGO_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CHFBJCFGMGO_EBONJHBDAPH_OFFSET UNITYSDK_OFFSET(0x757290)
#define CHFBJCFGMGO_ECHABDIEDPK_OFFSET UNITYSDK_OFFSET(0x757E20)
#define CHFBJCFGMGO_FBGCFECJKCJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CHFBJCFGMGO_FHKCGPHEFKE_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define CHFBJCFGMGO_GEGDAABJJKN_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define CHFBJCFGMGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CHFBJCFGMGO_HOOBCAJJDEM_OFFSET UNITYSDK_OFFSET(0x755190)
#define CHFBJCFGMGO_KENIIHFKFND_OFFSET UNITYSDK_OFFSET(0x755E40)
#define CHFBJCFGMGO_LJJEGIKAKDN_OFFSET UNITYSDK_OFFSET(0x758320)
#define CHFBJCFGMGO_MOJLDLCBJCC_OFFSET UNITYSDK_OFFSET(0x754920)
#define CHFBJCFGMGO_NHJEKNLCHBA_OFFSET UNITYSDK_OFFSET(0x757D20)
#define CHFBJCFGMGO_NNBOFMJHCFC_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define CHFBJCFGMGO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A17DEE0)
#define CHFBJCFGMGO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CHFBJCFGMGO_TypeDefinitionIndex = 16985;

struct alignas(4) CHFBJCFGMGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHFBJCFGMGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FBGCFECJKCJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_FBGCFECJKCJ_OFFSET))(this);
	}

	::System::Int32 NNBOFMJHCFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_NNBOFMJHCFC_OFFSET))(this);
	}

	::System::Int32 HOOBCAJJDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_HOOBCAJJDEM_OFFSET))(this);
	}

	::System::Boolean AKPFPDGNOBJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_AKPFPDGNOBJ_OFFSET))(this);
	}

	::System::String* LJJEGIKAKDN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_LJJEGIKAKDN_OFFSET))(this);
	}

	/*
	::CHFBJCFGMGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CHFBJCFGMGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AHMIILOCCHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_AHMIILOCCHD_OFFSET))(this);
	}

	::System::String* DGCMOAJLEDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_DGCMOAJLEDC_OFFSET))(this);
	}

	::System::Int32 BCGBGOIPOOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_BCGBGOIPOOA_OFFSET))(this);
	}

	::System::String* EBONJHBDAPH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_EBONJHBDAPH_OFFSET))(this);
	}

	::System::String* ECHABDIEDPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_ECHABDIEDPK_OFFSET))(this);
	}

	::System::Int32 BPPGLFBPBCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_BPPGLFBPBCD_OFFSET))(this);
	}

	::System::Int32 MOJLDLCBJCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_MOJLDLCBJCC_OFFSET))(this);
	}

	::System::Int32 AKIIGLMCNGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_AKIIGLMCNGL_OFFSET))(this);
	}

	::System::String* CMLFGJKCAHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_CMLFGJKCAHD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 KENIIHFKFND()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_KENIIHFKFND_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_DGFAJDNHCIJ_OFFSET))(this);
	}

	/*
	static ::CHFBJCFGMGO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 ENPOFLBHDPG, ::System::Int32 JGKNCPMELON, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CHFBJCFGMGO(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, ENPOFLBHDPG, JGKNCPMELON, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* NHJEKNLCHBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_NHJEKNLCHBA_OFFSET))(this);
	}

	::System::String* GEGDAABJJKN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_GEGDAABJJKN_OFFSET))(this);
	}

	::System::String* FHKCGPHEFKE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBJCFGMGO_FHKCGPHEFKE_OFFSET))(this);
	}
};
