#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CEOHLDEKPHN_AOBOFECAJBB_OFFSET UNITYSDK_OFFSET(0x7578F0)
#define CEOHLDEKPHN_AOGONMEELOA_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define CEOHLDEKPHN_BEIBFOIPAKP_OFFSET UNITYSDK_OFFSET(0x7AC220)
#define CEOHLDEKPHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CEOHLDEKPHN_BLNPFOLIIJC_OFFSET UNITYSDK_OFFSET(0x77ABF0)
#define CEOHLDEKPHN_DEJNGABCOPF_OFFSET UNITYSDK_OFFSET(0x756780)
#define CEOHLDEKPHN_DPBONKHFDCH_OFFSET UNITYSDK_OFFSET(0x77A4E0)
#define CEOHLDEKPHN_EGCLIAMCMNH_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define CEOHLDEKPHN_EGOLGCNGDPC_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define CEOHLDEKPHN_EIKJDNNDAML_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CEOHLDEKPHN_EKKGFICJMGA_OFFSET UNITYSDK_OFFSET(0x756220)
#define CEOHLDEKPHN_ELDJHLHDLPD_OFFSET UNITYSDK_OFFSET(0x7F5D10)
#define CEOHLDEKPHN_GBHOGBNMDFD_OFFSET UNITYSDK_OFFSET(0x756720)
#define CEOHLDEKPHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CEOHLDEKPHN_IBPKDFNJAMD_OFFSET UNITYSDK_OFFSET(0x760960)
#define CEOHLDEKPHN_IEBDOCANDLC_OFFSET UNITYSDK_OFFSET(0x754C20)
#define CEOHLDEKPHN_IELMOLKEAJB_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define CEOHLDEKPHN_IGFGNBEDGAN_OFFSET UNITYSDK_OFFSET(0x761360)
#define CEOHLDEKPHN_IHOLGEDGJPJ_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define CEOHLDEKPHN_IIPAKHLEKCO_OFFSET UNITYSDK_OFFSET(0x754D50)
#define CEOHLDEKPHN_LMAKHMJBLNC_OFFSET UNITYSDK_OFFSET(0x761240)
#define CEOHLDEKPHN_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x756440)
#define CEOHLDEKPHN_MIFFMLHFHNC_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define CEOHLDEKPHN_MNGDNOIDOEI_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define CEOHLDEKPHN_MOAHHAPGDCJ_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define CEOHLDEKPHN_OMABLJEOOFL_OFFSET UNITYSDK_OFFSET(0x77B0B0)
#define CEOHLDEKPHN_OONIKDCODCJ_OFFSET UNITYSDK_OFFSET(0x755790)
#define CEOHLDEKPHN_PBJICPFLLNP_OFFSET UNITYSDK_OFFSET(0x7DE1A0)
#define CEOHLDEKPHN_PCGCEIHAAPN_OFFSET UNITYSDK_OFFSET(0x77AD70)
#define CEOHLDEKPHN_PGCHCAIFNLD_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define CEOHLDEKPHN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CEOHLDEKPHN_TypeDefinitionIndex = 11326;

struct alignas(4) CEOHLDEKPHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEOHLDEKPHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MOAHHAPGDCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_MOAHHAPGDCJ_OFFSET))(this);
	}

	/*
	::CEOHLDEKPHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEOHLDEKPHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean AOBOFECAJBB(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_AOBOFECAJBB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GBHOGBNMDFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_GBHOGBNMDFD_OFFSET))(this);
	}

	::System::Int32 IEBDOCANDLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_IEBDOCANDLC_OFFSET))(this);
	}

	::System::Int32 EGCLIAMCMNH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_EGCLIAMCMNH_OFFSET))(this);
	}

	::System::Boolean PCGCEIHAAPN(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_PCGCEIHAAPN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean DPBONKHFDCH(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_DPBONKHFDCH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EGOLGCNGDPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_EGOLGCNGDPC_OFFSET))(this);
	}

	::System::Boolean DEJNGABCOPF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_DEJNGABCOPF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean PBJICPFLLNP(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_PBJICPFLLNP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean BEIBFOIPAKP(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_BEIBFOIPAKP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MNGDNOIDOEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_MNGDNOIDOEI_OFFSET))(this);
	}

	::System::Boolean IELMOLKEAJB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_IELMOLKEAJB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 AOGONMEELOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_AOGONMEELOA_OFFSET))(this);
	}

	::System::Int32 EKKGFICJMGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_EKKGFICJMGA_OFFSET))(this);
	}

	::System::Int32 IIPAKHLEKCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_IIPAKHLEKCO_OFFSET))(this);
	}

	::System::Int32 IHOLGEDGJPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_IHOLGEDGJPJ_OFFSET))(this);
	}

	::System::Int32 LMAKHMJBLNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_LMAKHMJBLNC_OFFSET))(this);
	}

	::System::Boolean ELDJHLHDLPD(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_ELDJHLHDLPD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean MIFFMLHFHNC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_MIFFMLHFHNC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean IGFGNBEDGAN(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_IGFGNBEDGAN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean IBPKDFNJAMD(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_IBPKDFNJAMD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OONIKDCODCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_OONIKDCODCJ_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Int32 EIKJDNNDAML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_EIKJDNNDAML_OFFSET))(this);
	}

	::System::Int32 PGCHCAIFNLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_PGCHCAIFNLD_OFFSET))(this);
	}

	::System::Boolean BLNPFOLIIJC(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_BLNPFOLIIJC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean OMABLJEOOFL(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CEOHLDEKPHN_OMABLJEOOFL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
