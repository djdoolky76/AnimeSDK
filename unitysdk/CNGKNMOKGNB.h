#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CNGKNMOKGNB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CNGKNMOKGNB_AHMIBKNNIBM_OFFSET UNITYSDK_OFFSET(0x757690)
#define CNGKNMOKGNB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CNGKNMOKGNB_BMJNPIDOPNO_OFFSET UNITYSDK_OFFSET(0x761AD0)
#define CNGKNMOKGNB_CFGBBDKOIGD_OFFSET UNITYSDK_OFFSET(0x7638C0)
#define CNGKNMOKGNB_CHGEFFFKCJO_OFFSET UNITYSDK_OFFSET(0x757290)
#define CNGKNMOKGNB_DAFPEEFNHFM_OFFSET UNITYSDK_OFFSET(0x7618B0)
#define CNGKNMOKGNB_DGIIBPLMHJD_OFFSET UNITYSDK_OFFSET(0x78A950)
#define CNGKNMOKGNB_DPPKBEIHNKJ_OFFSET UNITYSDK_OFFSET(0x757C10)
#define CNGKNMOKGNB_ENJKLGGNENJ_OFFSET UNITYSDK_OFFSET(0x761CB0)
#define CNGKNMOKGNB_FBCFCGKMDOO_OFFSET UNITYSDK_OFFSET(0x78A9D0)
#define CNGKNMOKGNB_FBMGGGPOPHD_OFFSET UNITYSDK_OFFSET(0x7639A0)
#define CNGKNMOKGNB_GDAAFAEKOEF_OFFSET UNITYSDK_OFFSET(0x755E40)
#define CNGKNMOKGNB_GEADINPIDDE_OFFSET UNITYSDK_OFFSET(0x754970)
#define CNGKNMOKGNB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CNGKNMOKGNB_GMPMNMEJKCG_OFFSET UNITYSDK_OFFSET(0x7AD2C0)
#define CNGKNMOKGNB_JGJJFAMOLPG_OFFSET UNITYSDK_OFFSET(0x763B20)
#define CNGKNMOKGNB_KLGAECCEMKC_OFFSET UNITYSDK_OFFSET(0x757760)
#define CNGKNMOKGNB_KNBJCODGFCJ_OFFSET UNITYSDK_OFFSET(0x7AD320)
#define CNGKNMOKGNB_KPINILEMPGA_OFFSET UNITYSDK_OFFSET(0x757E20)
#define CNGKNMOKGNB_LCOILJEGAGP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CNGKNMOKGNB_LKGICNPNLKM_OFFSET UNITYSDK_OFFSET(0x755520)
#define CNGKNMOKGNB_MEPOBMLAGOG_OFFSET UNITYSDK_OFFSET(0x789690)
#define CNGKNMOKGNB_NCEOKKLJGHO_OFFSET UNITYSDK_OFFSET(0x758E30)
#define CNGKNMOKGNB_NFHDKJBGOEN_OFFSET UNITYSDK_OFFSET(0x7AD3A0)
#define CNGKNMOKGNB_NIKHNJEDBMK_OFFSET UNITYSDK_OFFSET(0x7AD240)
#define CNGKNMOKGNB_NILPHCJELOL_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define CNGKNMOKGNB_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x7AD1C0)
#define CNGKNMOKGNB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17774C60)
#define CNGKNMOKGNB_OCHHBPKLBNC_OFFSET UNITYSDK_OFFSET(0x7899F0)
#define CNGKNMOKGNB_PFDCDOJNEGD_OFFSET UNITYSDK_OFFSET(0x756B10)
#define CNGKNMOKGNB_PGFOLCNDHKD_OFFSET UNITYSDK_OFFSET(0x7896F0)
#define CNGKNMOKGNB_PKLHBMBBNCA_OFFSET UNITYSDK_OFFSET(0x755710)
#define CNGKNMOKGNB_PMBCAKACFJP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CNGKNMOKGNB_PNDMDJDODCB_OFFSET UNITYSDK_OFFSET(0x757D20)
#define CNGKNMOKGNB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CNGKNMOKGNB_TypeDefinitionIndex = 13356;

struct alignas(4) CNGKNMOKGNB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNGKNMOKGNB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_NIOLACCPKHH_OFFSET))(this);
	}

	::System::String* PNDMDJDODCB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_PNDMDJDODCB_OFFSET))(this);
	}

	::System::String* KLGAECCEMKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_KLGAECCEMKC_OFFSET))(this);
	}

	::System::Boolean FBMGGGPOPHD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_FBMGGGPOPHD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NCEOKKLJGHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_NCEOKKLJGHO_OFFSET))(this);
	}

	::System::String* NIKHNJEDBMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_NIKHNJEDBMK_OFFSET))(this);
	}

	::System::Boolean DGIIBPLMHJD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_DGIIBPLMHJD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* NILPHCJELOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_NILPHCJELOL_OFFSET))(this);
	}

	::System::String* LCOILJEGAGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_LCOILJEGAGP_OFFSET))(this);
	}

	::System::Int32 DPPKBEIHNKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_DPPKBEIHNKJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* ENJKLGGNENJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_ENJKLGGNENJ_OFFSET))(this);
	}

	::System::Boolean FBCFCGKMDOO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_FBCFCGKMDOO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* KPINILEMPGA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_KPINILEMPGA_OFFSET))(this);
	}

	::System::Int32 MEPOBMLAGOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_MEPOBMLAGOG_OFFSET))(this);
	}

	::System::Int32 GMPMNMEJKCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_GMPMNMEJKCG_OFFSET))(this);
	}

	::System::Int32 CFGBBDKOIGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_CFGBBDKOIGD_OFFSET))(this);
	}

	::System::Int32 PGFOLCNDHKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_PGFOLCNDHKD_OFFSET))(this);
	}

	::System::Int32 LKGICNPNLKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_LKGICNPNLKM_OFFSET))(this);
	}

	::System::Boolean KNBJCODGFCJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_KNBJCODGFCJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* BMJNPIDOPNO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_BMJNPIDOPNO_OFFSET))(this);
	}

	::System::String* AHMIBKNNIBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_AHMIBKNNIBM_OFFSET))(this);
	}

	::System::String* PFDCDOJNEGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_PFDCDOJNEGD_OFFSET))(this);
	}

	::System::Boolean OCHHBPKLBNC(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_OCHHBPKLBNC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CNGKNMOKGNB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNGKNMOKGNB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean NFHDKJBGOEN(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_NFHDKJBGOEN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* PKLHBMBBNCA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_PKLHBMBBNCA_OFFSET))(this);
	}

	::System::String* DAFPEEFNHFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_DAFPEEFNHFM_OFFSET))(this);
	}

	::System::String* PMBCAKACFJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_PMBCAKACFJP_OFFSET))(this);
	}

	::System::Int32 GDAAFAEKOEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_GDAAFAEKOEF_OFFSET))(this);
	}

	::System::Int32 JGJJFAMOLPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_JGJJFAMOLPG_OFFSET))(this);
	}

	/*
	static ::CNGKNMOKGNB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CNGKNMOKGNB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GEADINPIDDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_GEADINPIDDE_OFFSET))(this);
	}

	::System::String* CHGEFFFKCJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGKNMOKGNB_CHGEFFFKCJO_OFFSET))(this);
	}
};
