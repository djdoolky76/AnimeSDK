#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PMNLJEFBFKM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PMNLJEFBFKM_AOBOFECAJBB_OFFSET UNITYSDK_OFFSET(0x765AF0)
#define PMNLJEFBFKM_AOGONMEELOA_OFFSET UNITYSDK_OFFSET(0x756510)
#define PMNLJEFBFKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PMNLJEFBFKM_BLNPFOLIIJC_OFFSET UNITYSDK_OFFSET(0x806760)
#define PMNLJEFBFKM_DEJNGABCOPF_OFFSET UNITYSDK_OFFSET(0x756060)
#define PMNLJEFBFKM_EKKGFICJMGA_OFFSET UNITYSDK_OFFSET(0x756280)
#define PMNLJEFBFKM_ELDJHLHDLPD_OFFSET UNITYSDK_OFFSET(0x757B50)
#define PMNLJEFBFKM_GBHOGBNMDFD_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define PMNLJEFBFKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMNLJEFBFKM_IBPKDFNJAMD_OFFSET UNITYSDK_OFFSET(0x762BA0)
#define PMNLJEFBFKM_IEBDOCANDLC_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define PMNLJEFBFKM_IELMOLKEAJB_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define PMNLJEFBFKM_IHOLGEDGJPJ_OFFSET UNITYSDK_OFFSET(0x756800)
#define PMNLJEFBFKM_IIPAKHLEKCO_OFFSET UNITYSDK_OFFSET(0x762D20)
#define PMNLJEFBFKM_INCECPLHGGJ_OFFSET UNITYSDK_OFFSET(0x757A30)
#define PMNLJEFBFKM_JAICBLBGLHH_OFFSET UNITYSDK_OFFSET(0x757830)
#define PMNLJEFBFKM_LMAKHMJBLNC_OFFSET UNITYSDK_OFFSET(0x760650)
#define PMNLJEFBFKM_MIFFMLHFHNC_OFFSET UNITYSDK_OFFSET(0x756140)
#define PMNLJEFBFKM_MOAHHAPGDCJ_OFFSET UNITYSDK_OFFSET(0x757330)
#define PMNLJEFBFKM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AD9D680)
#define PMNLJEFBFKM_PBJICPFLLNP_OFFSET UNITYSDK_OFFSET(0x7D08C0)
#define PMNLJEFBFKM_PCGCEIHAAPN_OFFSET UNITYSDK_OFFSET(0x7891D0)
#define PMNLJEFBFKM_PGCHCAIFNLD_OFFSET UNITYSDK_OFFSET(0x755440)
#define PMNLJEFBFKM_PLHKKHHPCNA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PMNLJEFBFKM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PMNLJEFBFKM_TypeDefinitionIndex = 9671;

struct alignas(4) PMNLJEFBFKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMNLJEFBFKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 IHOLGEDGJPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_IHOLGEDGJPJ_OFFSET))(this);
	}

	::System::Boolean IBPKDFNJAMD(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_IBPKDFNJAMD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 AOGONMEELOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_AOGONMEELOA_OFFSET))(this);
	}

	::System::Boolean AOBOFECAJBB(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_AOBOFECAJBB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean BLNPFOLIIJC(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_BLNPFOLIIJC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MOAHHAPGDCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_MOAHHAPGDCJ_OFFSET))(this);
	}

	/*
	static ::PMNLJEFBFKM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PMNLJEFBFKM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean PBJICPFLLNP(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_PBJICPFLLNP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PMNLJEFBFKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMNLJEFBFKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean MIFFMLHFHNC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_MIFFMLHFHNC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 IEBDOCANDLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_IEBDOCANDLC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 IIPAKHLEKCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_IIPAKHLEKCO_OFFSET))(this);
	}

	::System::Int32 PLHKKHHPCNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_PLHKKHHPCNA_OFFSET))(this);
	}

	::System::Int32 LMAKHMJBLNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_LMAKHMJBLNC_OFFSET))(this);
	}

	::System::Boolean PCGCEIHAAPN(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_PCGCEIHAAPN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PGCHCAIFNLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_PGCHCAIFNLD_OFFSET))(this);
	}

	::System::Int32 EKKGFICJMGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_EKKGFICJMGA_OFFSET))(this);
	}

	::System::Boolean DEJNGABCOPF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_DEJNGABCOPF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean IELMOLKEAJB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_IELMOLKEAJB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 INCECPLHGGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_INCECPLHGGJ_OFFSET))(this);
	}

	::System::Int32 GBHOGBNMDFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_GBHOGBNMDFD_OFFSET))(this);
	}

	::System::Boolean ELDJHLHDLPD(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_ELDJHLHDLPD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean JAICBLBGLHH(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PMNLJEFBFKM_JAICBLBGLHH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
