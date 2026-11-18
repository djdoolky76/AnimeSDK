#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PNIPMEOLMCM_AEAJPKILALJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PNIPMEOLMCM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PNIPMEOLMCM_CAGPGPNCPLC_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define PNIPMEOLMCM_CIIANMIKPGH_OFFSET UNITYSDK_OFFSET(0x757290)
#define PNIPMEOLMCM_ECCEOGFPCJC_OFFSET UNITYSDK_OFFSET(0x754920)
#define PNIPMEOLMCM_FHMLIGOLOME_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define PNIPMEOLMCM_FIJKBEGGDGC_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define PNIPMEOLMCM_FKEJKDNMKHL_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define PNIPMEOLMCM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNIPMEOLMCM_GJOAHMADEAE_OFFSET UNITYSDK_OFFSET(0x758320)
#define PNIPMEOLMCM_HCCJEHMOBLL_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define PNIPMEOLMCM_IOKOJABAEGK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PNIPMEOLMCM_JBAGFGDCBDK_OFFSET UNITYSDK_OFFSET(0x757E20)
#define PNIPMEOLMCM_JGDOJJGDIFL_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define PNIPMEOLMCM_JJFBMGMKFHC_OFFSET UNITYSDK_OFFSET(0x756D50)
#define PNIPMEOLMCM_JKJAJHBIIHG_OFFSET UNITYSDK_OFFSET(0x755710)
#define PNIPMEOLMCM_KLBOJBDHNOI_OFFSET UNITYSDK_OFFSET(0x761710)
#define PNIPMEOLMCM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1FA554C0)
#define PNIPMEOLMCM_OCEEOEELJFP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PNIPMEOLMCM_OMKKHCHMONN_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define PNIPMEOLMCM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PNIPMEOLMCM_TypeDefinitionIndex = 9472;

struct alignas(4) PNIPMEOLMCM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNIPMEOLMCM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PNIPMEOLMCM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PNIPMEOLMCM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* FIJKBEGGDGC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_FIJKBEGGDGC_OFFSET))(this);
	}

	::System::Int32 AEAJPKILALJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_AEAJPKILALJ_OFFSET))(this);
	}

	::System::String* FHMLIGOLOME()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_FHMLIGOLOME_OFFSET))(this);
	}

	::System::Int32 ECCEOGFPCJC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_ECCEOGFPCJC_OFFSET))(this);
	}

	::System::String* HCCJEHMOBLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_HCCJEHMOBLL_OFFSET))(this);
	}

	::System::String* JBAGFGDCBDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_JBAGFGDCBDK_OFFSET))(this);
	}

	::System::String* IOKOJABAEGK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_IOKOJABAEGK_OFFSET))(this);
	}

	::System::String* KLBOJBDHNOI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_KLBOJBDHNOI_OFFSET))(this);
	}

	::System::String* OMKKHCHMONN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_OMKKHCHMONN_OFFSET))(this);
	}

	::System::Int32 OCEEOEELJFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_OCEEOEELJFP_OFFSET))(this);
	}

	::System::String* JJFBMGMKFHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_JJFBMGMKFHC_OFFSET))(this);
	}

	::System::Int32 CAGPGPNCPLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_CAGPGPNCPLC_OFFSET))(this);
	}

	::System::String* FKEJKDNMKHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_FKEJKDNMKHL_OFFSET))(this);
	}

	::System::String* JKJAJHBIIHG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_JKJAJHBIIHG_OFFSET))(this);
	}

	::System::String* GJOAHMADEAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_GJOAHMADEAE_OFFSET))(this);
	}

	::System::String* CIIANMIKPGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_CIIANMIKPGH_OFFSET))(this);
	}

	/*
	::PNIPMEOLMCM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNIPMEOLMCM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean JGDOJJGDIFL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PNIPMEOLMCM_JGDOJJGDIFL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
