#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FHIJIBKFGEL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FHIJIBKFGEL_AFJNJHPJPLJ_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define FHIJIBKFGEL_AKJEBFJMGCJ_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define FHIJIBKFGEL_BHAJBGPCKFM_OFFSET UNITYSDK_OFFSET(0x779440)
#define FHIJIBKFGEL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FHIJIBKFGEL_BJOHJGEFMHJ_OFFSET UNITYSDK_OFFSET(0x764220)
#define FHIJIBKFGEL_CFCIDCHJHCH_OFFSET UNITYSDK_OFFSET(0x755670)
#define FHIJIBKFGEL_CGHJHAOBNEM_OFFSET UNITYSDK_OFFSET(0x754970)
#define FHIJIBKFGEL_CIHEHIKANAI_OFFSET UNITYSDK_OFFSET(0x758840)
#define FHIJIBKFGEL_CLIHNLHBNFE_OFFSET UNITYSDK_OFFSET(0x757A30)
#define FHIJIBKFGEL_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x758780)
#define FHIJIBKFGEL_EJNJHOPCJNE_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define FHIJIBKFGEL_EMPLKMIOBGN_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define FHIJIBKFGEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHIJIBKFGEL_GFPKNPHLEEJ_OFFSET UNITYSDK_OFFSET(0x763D90)
#define FHIJIBKFGEL_GLKPBNAIGPI_OFFSET UNITYSDK_OFFSET(0x761930)
#define FHIJIBKFGEL_HMODDFDGBHK_OFFSET UNITYSDK_OFFSET(0x754920)
#define FHIJIBKFGEL_IBAPBNCHOBA_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define FHIJIBKFGEL_IMJOKINICPN_OFFSET UNITYSDK_OFFSET(0x755840)
#define FHIJIBKFGEL_JHGKCNGHIEJ_OFFSET UNITYSDK_OFFSET(0x7641D0)
#define FHIJIBKFGEL_KAAGMNEEEJG_OFFSET UNITYSDK_OFFSET(0x758320)
#define FHIJIBKFGEL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1663B7A0)
#define FHIJIBKFGEL_OMGMGCCDIND_OFFSET UNITYSDK_OFFSET(0x755320)
#define FHIJIBKFGEL_PGLNNLPAICG_OFFSET UNITYSDK_OFFSET(0x757C10)
#define FHIJIBKFGEL_PLOLDAOBMEG_OFFSET UNITYSDK_OFFSET(0x78A030)
#define FHIJIBKFGEL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FHIJIBKFGEL_TypeDefinitionIndex = 12704;

struct alignas(4) FHIJIBKFGEL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHIJIBKFGEL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean GFPKNPHLEEJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_GFPKNPHLEEJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* KAAGMNEEEJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_KAAGMNEEEJG_OFFSET))(this);
	}

	::System::Boolean BHAJBGPCKFM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_BHAJBGPCKFM_OFFSET))(this);
	}

	::System::Int32 CFCIDCHJHCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_CFCIDCHJHCH_OFFSET))(this);
	}

	::System::String* IBAPBNCHOBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_IBAPBNCHOBA_OFFSET))(this);
	}

	::System::Single BJOHJGEFMHJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_BJOHJGEFMHJ_OFFSET))(this);
	}

	/*
	::FHIJIBKFGEL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHIJIBKFGEL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean CIHEHIKANAI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_CIHEHIKANAI_OFFSET))(this);
	}

	::System::Int32 CGHJHAOBNEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_CGHJHAOBNEM_OFFSET))(this);
	}

	::System::Int32 EJNJHOPCJNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_EJNJHOPCJNE_OFFSET))(this);
	}

	::System::Int32 PGLNNLPAICG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_PGLNNLPAICG_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_ACOEONABOJL_OFFSET))(this);
	}

	::System::Single JHGKCNGHIEJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_JHGKCNGHIEJ_OFFSET))(this);
	}

	/*
	static ::FHIJIBKFGEL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FHIJIBKFGEL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CLIHNLHBNFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_CLIHNLHBNFE_OFFSET))(this);
	}

	::System::Int32 HMODDFDGBHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_HMODDFDGBHK_OFFSET))(this);
	}

	::System::Int32 IMJOKINICPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_IMJOKINICPN_OFFSET))(this);
	}

	::System::Int32 AFJNJHPJPLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_AFJNJHPJPLJ_OFFSET))(this);
	}

	::System::Boolean GLKPBNAIGPI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_GLKPBNAIGPI_OFFSET))(this);
	}

	::System::Int32 AKJEBFJMGCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_AKJEBFJMGCJ_OFFSET))(this);
	}

	::System::Single PLOLDAOBMEG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_PLOLDAOBMEG_OFFSET))(this);
	}

	::System::Int32 EMPLKMIOBGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_EMPLKMIOBGN_OFFSET))(this);
	}

	::System::Int32 OMGMGCCDIND()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIJIBKFGEL_OMGMGCCDIND_OFFSET))(this);
	}
};
