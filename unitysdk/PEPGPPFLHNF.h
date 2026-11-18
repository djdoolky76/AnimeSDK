#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PEPGPPFLHNF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PEPGPPFLHNF_ALHHNPJLBFI_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define PEPGPPFLHNF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PEPGPPFLHNF_BLLFDPGBOFB_OFFSET UNITYSDK_OFFSET(0x757290)
#define PEPGPPFLHNF_CNFPCNIOCDD_OFFSET UNITYSDK_OFFSET(0x757190)
#define PEPGPPFLHNF_CNOOLCGDAEK_OFFSET UNITYSDK_OFFSET(0x7A5700)
#define PEPGPPFLHNF_DAGCHOMGOKD_OFFSET UNITYSDK_OFFSET(0x7628B0)
#define PEPGPPFLHNF_DDIAKBIKPIO_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define PEPGPPFLHNF_DHPNLHDKOKL_OFFSET UNITYSDK_OFFSET(0x757520)
#define PEPGPPFLHNF_DMGOBFBAJMG_OFFSET UNITYSDK_OFFSET(0x7DA370)
#define PEPGPPFLHNF_DOBFEOBGFBN_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PEPGPPFLHNF_DOKLPLPPHNF_OFFSET UNITYSDK_OFFSET(0x757760)
#define PEPGPPFLHNF_FHFOKHKMIFN_OFFSET UNITYSDK_OFFSET(0x755260)
#define PEPGPPFLHNF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PEPGPPFLHNF_GKFFEJLIFHG_OFFSET UNITYSDK_OFFSET(0x762910)
#define PEPGPPFLHNF_HCMLBFKGFEJ_OFFSET UNITYSDK_OFFSET(0x7627E0)
#define PEPGPPFLHNF_HDJJIFMOPNA_OFFSET UNITYSDK_OFFSET(0x755140)
#define PEPGPPFLHNF_IBLIIFGMDKH_OFFSET UNITYSDK_OFFSET(0x755060)
#define PEPGPPFLHNF_JBPHBOEKBIA_OFFSET UNITYSDK_OFFSET(0x789B10)
#define PEPGPPFLHNF_JCHIDNFLIGJ_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define PEPGPPFLHNF_JFDOABMHOLC_OFFSET UNITYSDK_OFFSET(0x758320)
#define PEPGPPFLHNF_KLNMBMJJCGI_OFFSET UNITYSDK_OFFSET(0x761000)
#define PEPGPPFLHNF_KNMKDGAMOLD_OFFSET UNITYSDK_OFFSET(0x757E20)
#define PEPGPPFLHNF_LCEMBJOABHC_OFFSET UNITYSDK_OFFSET(0x761830)
#define PEPGPPFLHNF_LIIEGDAPHDM_OFFSET UNITYSDK_OFFSET(0x761710)
#define PEPGPPFLHNF_MJDELJIAEPN_OFFSET UNITYSDK_OFFSET(0x761AD0)
#define PEPGPPFLHNF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BABF1C0)
#define PEPGPPFLHNF_PMKDBOPAGDA_OFFSET UNITYSDK_OFFSET(0x755570)
#define PEPGPPFLHNF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PEPGPPFLHNF_TypeDefinitionIndex = 10039;

struct alignas(4) PEPGPPFLHNF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEPGPPFLHNF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GKFFEJLIFHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_GKFFEJLIFHG_OFFSET))(this);
	}

	::System::Boolean HCMLBFKGFEJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_HCMLBFKGFEJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DDIAKBIKPIO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_DDIAKBIKPIO_OFFSET))(this);
	}

	::System::String* PMKDBOPAGDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_PMKDBOPAGDA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean CNOOLCGDAEK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_CNOOLCGDAEK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DAGCHOMGOKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_DAGCHOMGOKD_OFFSET))(this);
	}

	::System::String* JCHIDNFLIGJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_JCHIDNFLIGJ_OFFSET))(this);
	}

	::System::String* KLNMBMJJCGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_KLNMBMJJCGI_OFFSET))(this);
	}

	::System::Int32 ALHHNPJLBFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_ALHHNPJLBFI_OFFSET))(this);
	}

	::System::String* CNFPCNIOCDD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_CNFPCNIOCDD_OFFSET))(this);
	}

	::System::Boolean JBPHBOEKBIA(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_JBPHBOEKBIA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HDJJIFMOPNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_HDJJIFMOPNA_OFFSET))(this);
	}

	::System::Int32 DOBFEOBGFBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_DOBFEOBGFBN_OFFSET))(this);
	}

	::System::Int32 IBLIIFGMDKH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_IBLIIFGMDKH_OFFSET))(this);
	}

	::System::Boolean DMGOBFBAJMG(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_DMGOBFBAJMG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PEPGPPFLHNF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEPGPPFLHNF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BLLFDPGBOFB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_BLLFDPGBOFB_OFFSET))(this);
	}

	::System::String* LIIEGDAPHDM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_LIIEGDAPHDM_OFFSET))(this);
	}

	::System::String* LCEMBJOABHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_LCEMBJOABHC_OFFSET))(this);
	}

	::System::Int32 FHFOKHKMIFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_FHFOKHKMIFN_OFFSET))(this);
	}

	/*
	static ::PEPGPPFLHNF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PEPGPPFLHNF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* JFDOABMHOLC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_JFDOABMHOLC_OFFSET))(this);
	}

	::System::String* DOKLPLPPHNF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_DOKLPLPPHNF_OFFSET))(this);
	}

	::System::String* KNMKDGAMOLD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_KNMKDGAMOLD_OFFSET))(this);
	}

	::System::String* MJDELJIAEPN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_MJDELJIAEPN_OFFSET))(this);
	}

	::System::String* DHPNLHDKOKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGPPFLHNF_DHPNLHDKOKL_OFFSET))(this);
	}
};
