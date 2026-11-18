#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NOEODPCIHNP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NOEODPCIHNP_AGNJKMEEEPL_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define NOEODPCIHNP_AOABDEEFIGG_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define NOEODPCIHNP_BEMLACHKOJD_OFFSET UNITYSDK_OFFSET(0x756800)
#define NOEODPCIHNP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NOEODPCIHNP_CKEHDEJGAIC_OFFSET UNITYSDK_OFFSET(0x754A70)
#define NOEODPCIHNP_CNIMPNICLOH_OFFSET UNITYSDK_OFFSET(0x757E20)
#define NOEODPCIHNP_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NOEODPCIHNP_EFPAMPLBHCB_OFFSET UNITYSDK_OFFSET(0x754D50)
#define NOEODPCIHNP_FEHMMEPDFAO_OFFSET UNITYSDK_OFFSET(0x761710)
#define NOEODPCIHNP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NOEODPCIHNP_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x757760)
#define NOEODPCIHNP_HICIEIAEOHO_OFFSET UNITYSDK_OFFSET(0x757190)
#define NOEODPCIHNP_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x758780)
#define NOEODPCIHNP_HMMOFFKCCPF_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define NOEODPCIHNP_IKGMCFBIIOD_OFFSET UNITYSDK_OFFSET(0x756280)
#define NOEODPCIHNP_JDPHHAMLHIL_OFFSET UNITYSDK_OFFSET(0x756B10)
#define NOEODPCIHNP_JEGOGLNMANP_OFFSET UNITYSDK_OFFSET(0x755710)
#define NOEODPCIHNP_KCAECKPHIHP_OFFSET UNITYSDK_OFFSET(0x756640)
#define NOEODPCIHNP_LCNKNGODJCF_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define NOEODPCIHNP_MMILFHCOHFC_OFFSET UNITYSDK_OFFSET(0x755FE0)
#define NOEODPCIHNP_NKFLKIGJBIJ_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define NOEODPCIHNP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BAAD050)
#define NOEODPCIHNP_ONNMCMINPCA_OFFSET UNITYSDK_OFFSET(0x755890)
#define NOEODPCIHNP_PFLNFLAFCAL_OFFSET UNITYSDK_OFFSET(0x756220)
#define NOEODPCIHNP_PIINPFDEACF_OFFSET UNITYSDK_OFFSET(0x756570)
#define NOEODPCIHNP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NOEODPCIHNP_TypeDefinitionIndex = 14800;

struct alignas(4) NOEODPCIHNP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOEODPCIHNP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NOEODPCIHNP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NOEODPCIHNP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NOEODPCIHNP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ONNMCMINPCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_ONNMCMINPCA_OFFSET))(this);
	}

	::System::Boolean MMILFHCOHFC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NOEODPCIHNP_MMILFHCOHFC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* HICIEIAEOHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_HICIEIAEOHO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* FEHMMEPDFAO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_FEHMMEPDFAO_OFFSET))(this);
	}

	::System::Boolean PIINPFDEACF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NOEODPCIHNP_PIINPFDEACF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* AOABDEEFIGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_AOABDEEFIGG_OFFSET))(this);
	}

	/*
	::NOEODPCIHNP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NOEODPCIHNP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOEODPCIHNP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean AGNJKMEEEPL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NOEODPCIHNP_AGNJKMEEEPL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BEMLACHKOJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_BEMLACHKOJD_OFFSET))(this);
	}

	::System::Int32 PFLNFLAFCAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_PFLNFLAFCAL_OFFSET))(this);
	}

	::System::String* NKFLKIGJBIJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_NKFLKIGJBIJ_OFFSET))(this);
	}

	::System::Int32 HMMOFFKCCPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_HMMOFFKCCPF_OFFSET))(this);
	}

	::System::Int32 EFPAMPLBHCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_EFPAMPLBHCB_OFFSET))(this);
	}

	::System::String* JDPHHAMLHIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_JDPHHAMLHIL_OFFSET))(this);
	}

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_HGODFCFGNDA_OFFSET))(this);
	}

	::System::Int32 IKGMCFBIIOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_IKGMCFBIIOD_OFFSET))(this);
	}

	::System::String* JEGOGLNMANP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_JEGOGLNMANP_OFFSET))(this);
	}

	::System::Int32 LCNKNGODJCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_LCNKNGODJCF_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* CNIMPNICLOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_CNIMPNICLOH_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEODPCIHNP_DECMGICKDLH_OFFSET))(this);
	}

	::System::Boolean CKEHDEJGAIC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NOEODPCIHNP_CKEHDEJGAIC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean KCAECKPHIHP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NOEODPCIHNP_KCAECKPHIHP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
