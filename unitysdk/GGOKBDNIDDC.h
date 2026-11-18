#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GGOKBDNIDDC_ALOEBDHKIDO_OFFSET UNITYSDK_OFFSET(0x763D90)
#define GGOKBDNIDDC_AMCJABACMMG_OFFSET UNITYSDK_OFFSET(0x754920)
#define GGOKBDNIDDC_BDBHLAHCJFB_OFFSET UNITYSDK_OFFSET(0x758780)
#define GGOKBDNIDDC_BFENBJFMAPJ_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define GGOKBDNIDDC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GGOKBDNIDDC_CHMPPDAJMBP_OFFSET UNITYSDK_OFFSET(0x755190)
#define GGOKBDNIDDC_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GGOKBDNIDDC_FPOCANBMFLJ_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define GGOKBDNIDDC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GGOKBDNIDDC_HHHEOFJIHDJ_OFFSET UNITYSDK_OFFSET(0x7794D0)
#define GGOKBDNIDDC_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755E40)
#define GGOKBDNIDDC_HLGAMCLDEEN_OFFSET UNITYSDK_OFFSET(0x7552C0)
#define GGOKBDNIDDC_IOMANCEBALO_OFFSET UNITYSDK_OFFSET(0x758DB0)
#define GGOKBDNIDDC_JBIAGAGDGKK_OFFSET UNITYSDK_OFFSET(0x757A30)
#define GGOKBDNIDDC_MBELPIHDDOP_OFFSET UNITYSDK_OFFSET(0x755840)
#define GGOKBDNIDDC_MINENNBICDJ_OFFSET UNITYSDK_OFFSET(0x7551E0)
#define GGOKBDNIDDC_NNHLNFPGCLN_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define GGOKBDNIDDC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x160E3D80)
#define GGOKBDNIDDC_OBEKINGLNOK_OFFSET UNITYSDK_OFFSET(0x758E30)
#define GGOKBDNIDDC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GGOKBDNIDDC_TypeDefinitionIndex = 12482;

struct alignas(4) GGOKBDNIDDC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGOKBDNIDDC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JBIAGAGDGKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_JBIAGAGDGKK_OFFSET))(this);
	}

	::System::Int32 MBELPIHDDOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_MBELPIHDDOP_OFFSET))(this);
	}

	::System::Boolean MINENNBICDJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_MINENNBICDJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 AMCJABACMMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_AMCJABACMMG_OFFSET))(this);
	}

	::System::Int32 NNHLNFPGCLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_NNHLNFPGCLN_OFFSET))(this);
	}

	/*
	static ::GGOKBDNIDDC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GGOKBDNIDDC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CHMPPDAJMBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_CHMPPDAJMBP_OFFSET))(this);
	}

	::System::Int32 FPOCANBMFLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_FPOCANBMFLJ_OFFSET))(this);
	}

	::System::Int32 BDBHLAHCJFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_BDBHLAHCJFB_OFFSET))(this);
	}

	::System::Int32 HLGAMCLDEEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_HLGAMCLDEEN_OFFSET))(this);
	}

	::System::Boolean IOMANCEBALO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_IOMANCEBALO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OBEKINGLNOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_OBEKINGLNOK_OFFSET))(this);
	}

	::System::Boolean HHHEOFJIHDJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_HHHEOFJIHDJ_OFFSET))(this);
	}

	::System::String* BFENBJFMAPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_BFENBJFMAPJ_OFFSET))(this);
	}

	::System::Boolean ALOEBDHKIDO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_ALOEBDHKIDO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GGOKBDNIDDC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGOKBDNIDDC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGOKBDNIDDC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
