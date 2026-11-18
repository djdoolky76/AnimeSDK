#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IFMDDIOEJGI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KGOIHNKKCIL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KGOIHNKKCIL_CGFMBENLPNO_OFFSET UNITYSDK_OFFSET(0x755440)
#define KGOIHNKKCIL_DDLODMLAFMN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KGOIHNKKCIL_FIJONMHHAIA_OFFSET UNITYSDK_OFFSET(0x756140)
#define KGOIHNKKCIL_GDODEOOCOGO_OFFSET UNITYSDK_OFFSET(0x7552C0)
#define KGOIHNKKCIL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KGOIHNKKCIL_HJLNFJEBGOP_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define KGOIHNKKCIL_HLIKFJAODBJ_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define KGOIHNKKCIL_IOLKAONPBNB_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define KGOIHNKKCIL_MKEAFMIMKBH_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define KGOIHNKKCIL_MMOFNJJPBDP_OFFSET UNITYSDK_OFFSET(0x7E4840)
#define KGOIHNKKCIL_NBNFMBCAEIH_OFFSET UNITYSDK_OFFSET(0x762D20)
#define KGOIHNKKCIL_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x755670)
#define KGOIHNKKCIL_NLNODLILGMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KGOIHNKKCIL_OAAOCGEMLAF_OFFSET UNITYSDK_OFFSET(0x758320)
#define KGOIHNKKCIL_OADOOFGKDBH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KGOIHNKKCIL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19559C80)
#define KGOIHNKKCIL_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KGOIHNKKCIL_PDPAJHFJGOO_OFFSET UNITYSDK_OFFSET(0x755520)
#define KGOIHNKKCIL_PMAPENNIKKB_OFFSET UNITYSDK_OFFSET(0x7553C0)
#define KGOIHNKKCIL_PNKAKCHLBLF_OFFSET UNITYSDK_OFFSET(0x754970)
#define KGOIHNKKCIL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KGOIHNKKCIL_TypeDefinitionIndex = 13089;

struct alignas(4) KGOIHNKKCIL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGOIHNKKCIL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean FIJONMHHAIA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_FIJONMHHAIA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NBNFMBCAEIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_NBNFMBCAEIH_OFFSET))(this);
	}

	::System::Int32 HJLNFJEBGOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_HJLNFJEBGOP_OFFSET))(this);
	}

	::System::String* DDLODMLAFMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_DDLODMLAFMN_OFFSET))(this);
	}

	::System::Int32 GDODEOOCOGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_GDODEOOCOGO_OFFSET))(this);
	}

	::System::Int32 PNKAKCHLBLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_PNKAKCHLBLF_OFFSET))(this);
	}

	/*
	static ::KGOIHNKKCIL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KGOIHNKKCIL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IOLKAONPBNB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_IOLKAONPBNB_OFFSET))(this);
	}

	::System::Boolean MKEAFMIMKBH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_MKEAFMIMKBH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean MMOFNJJPBDP(::System::Int32 HPMEONKHFGG, ::IFMDDIOEJGI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFMDDIOEJGI&))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_MMOFNJJPBDP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PDPAJHFJGOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_PDPAJHFJGOO_OFFSET))(this);
	}

	::System::String* OAAOCGEMLAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_OAAOCGEMLAF_OFFSET))(this);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_OEBELJGDNCE_OFFSET))(this);
	}

	::System::Int32 HLIKFJAODBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_HLIKFJAODBJ_OFFSET))(this);
	}

	::System::Int32 NLNODLILGMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_NLNODLILGMM_OFFSET))(this);
	}

	::System::Boolean PMAPENNIKKB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_PMAPENNIKKB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OADOOFGKDBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_OADOOFGKDBH_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_NENDAECBCEM_OFFSET))(this);
	}

	::System::Int32 CGFMBENLPNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_CGFMBENLPNO_OFFSET))(this);
	}

	/*
	::KGOIHNKKCIL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGOIHNKKCIL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGOIHNKKCIL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
