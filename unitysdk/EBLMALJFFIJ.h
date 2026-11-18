#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EBLMALJFFIJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EBLMALJFFIJ_AHNJKKPPLBJ_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define EBLMALJFFIJ_ANGKIIHJMOG_OFFSET UNITYSDK_OFFSET(0x756440)
#define EBLMALJFFIJ_BELDFMFKKAE_OFFSET UNITYSDK_OFFSET(0x756800)
#define EBLMALJFFIJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EBLMALJFFIJ_BIPKEGDOJHJ_OFFSET UNITYSDK_OFFSET(0x756510)
#define EBLMALJFFIJ_BPEEBBLLJJK_OFFSET UNITYSDK_OFFSET(0x755E40)
#define EBLMALJFFIJ_CDDPDNEIELC_OFFSET UNITYSDK_OFFSET(0x757A30)
#define EBLMALJFFIJ_EFGEJGANFGE_OFFSET UNITYSDK_OFFSET(0x763D90)
#define EBLMALJFFIJ_EJMJMJCIKMF_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define EBLMALJFFIJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBLMALJFFIJ_ICNOODCDDKE_OFFSET UNITYSDK_OFFSET(0x7890D0)
#define EBLMALJFFIJ_IIBPELDDEBK_OFFSET UNITYSDK_OFFSET(0x789150)
#define EBLMALJFFIJ_JMNEBFMHIGB_OFFSET UNITYSDK_OFFSET(0x754970)
#define EBLMALJFFIJ_KAMPBHIPDCP_OFFSET UNITYSDK_OFFSET(0x7891D0)
#define EBLMALJFFIJ_MDDFMBGAHFG_OFFSET UNITYSDK_OFFSET(0x756140)
#define EBLMALJFFIJ_MDGAEAFCOAD_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define EBLMALJFFIJ_MDHFCKDHMDK_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EBLMALJFFIJ_MMLIHCLFNAK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EBLMALJFFIJ_NBLDHOEPBIC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EBLMALJFFIJ_OLMMLKDHLBJ_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define EBLMALJFFIJ_PAFFDJMCHCE_OFFSET UNITYSDK_OFFSET(0x756280)
#define EBLMALJFFIJ_PAIPIOOCDAJ_OFFSET UNITYSDK_OFFSET(0x762D20)
#define EBLMALJFFIJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EBLMALJFFIJ_TypeDefinitionIndex = 10724;

struct alignas(4) EBLMALJFFIJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBLMALJFFIJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CDDPDNEIELC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_CDDPDNEIELC_OFFSET))(this);
	}

	::System::Int32 BELDFMFKKAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_BELDFMFKKAE_OFFSET))(this);
	}

	::System::Int32 MMLIHCLFNAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_MMLIHCLFNAK_OFFSET))(this);
	}

	::System::Int32 PAFFDJMCHCE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_PAFFDJMCHCE_OFFSET))(this);
	}

	::System::String* OLMMLKDHLBJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_OLMMLKDHLBJ_OFFSET))(this);
	}

	::System::Boolean MDDFMBGAHFG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_MDDFMBGAHFG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JMNEBFMHIGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_JMNEBFMHIGB_OFFSET))(this);
	}

	::System::Boolean ICNOODCDDKE(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_ICNOODCDDKE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean IIBPELDDEBK(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_IIBPELDDEBK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BPEEBBLLJJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_BPEEBBLLJJK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 BIPKEGDOJHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_BIPKEGDOJHJ_OFFSET))(this);
	}

	::System::Int32 ANGKIIHJMOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_ANGKIIHJMOG_OFFSET))(this);
	}

	::System::Int32 PAIPIOOCDAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_PAIPIOOCDAJ_OFFSET))(this);
	}

	::System::Boolean EFGEJGANFGE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_EFGEJGANFGE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EBLMALJFFIJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBLMALJFFIJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AHNJKKPPLBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_AHNJKKPPLBJ_OFFSET))(this);
	}

	::System::Int32 NBLDHOEPBIC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_NBLDHOEPBIC_OFFSET))(this);
	}

	::System::Int32 MDHFCKDHMDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_MDHFCKDHMDK_OFFSET))(this);
	}

	::System::Boolean EJMJMJCIKMF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_EJMJMJCIKMF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean KAMPBHIPDCP(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_KAMPBHIPDCP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MDGAEAFCOAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLMALJFFIJ_MDGAEAFCOAD_OFFSET))(this);
	}
};
