#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAEMHFPDNEA.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OHMDCFCNKIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OHMDCFCNKIM_DMFMJLNAEPO_OFFSET UNITYSDK_OFFSET(0x758320)
#define OHMDCFCNKIM_EECNDNIAFBM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OHMDCFCNKIM_FJLODLEHENJ_OFFSET UNITYSDK_OFFSET(0x755840)
#define OHMDCFCNKIM_FKKNFOIPLDN_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OHMDCFCNKIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OHMDCFCNKIM_GPKJMPBEMFJ_OFFSET UNITYSDK_OFFSET(0x761710)
#define OHMDCFCNKIM_HAPHIILPGGE_OFFSET UNITYSDK_OFFSET(0x757A30)
#define OHMDCFCNKIM_HFGMOJGBFML_OFFSET UNITYSDK_OFFSET(0x763D90)
#define OHMDCFCNKIM_IADPGFDDDPO_OFFSET UNITYSDK_OFFSET(0x757450)
#define OHMDCFCNKIM_IPBDBKFKJPA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define OHMDCFCNKIM_JHOPADCALFH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OHMDCFCNKIM_KJNEDAHPGOP_OFFSET UNITYSDK_OFFSET(0x755190)
#define OHMDCFCNKIM_KKPCMMCJPMB_OFFSET UNITYSDK_OFFSET(0x7606B0)
#define OHMDCFCNKIM_MDBMBLBIAID_OFFSET UNITYSDK_OFFSET(0x756440)
#define OHMDCFCNKIM_NPELMEEJBLI_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define OHMDCFCNKIM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB2DC00)
#define OHMDCFCNKIM_OFCAJACPAPH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OHMDCFCNKIM_OKOEKDDNDAN_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define OHMDCFCNKIM_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x757190)
#define OHMDCFCNKIM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OHMDCFCNKIM_TypeDefinitionIndex = 13699;

struct alignas(4) OHMDCFCNKIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHMDCFCNKIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FJLODLEHENJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_FJLODLEHENJ_OFFSET))(this);
	}

	::System::Int32 HAPHIILPGGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_HAPHIILPGGE_OFFSET))(this);
	}

	::System::String* KKPCMMCJPMB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_KKPCMMCJPMB_OFFSET))(this);
	}

	::System::String* JHOPADCALFH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_JHOPADCALFH_OFFSET))(this);
	}

	::System::String* IPBDBKFKJPA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_IPBDBKFKJPA_OFFSET))(this);
	}

	::System::Int32 OFCAJACPAPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_OFCAJACPAPH_OFFSET))(this);
	}

	::System::String* FKKNFOIPLDN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_FKKNFOIPLDN_OFFSET))(this);
	}

	::System::Int32 EECNDNIAFBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_EECNDNIAFBM_OFFSET))(this);
	}

	::System::String* DMFMJLNAEPO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_DMFMJLNAEPO_OFFSET))(this);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_PLNBBDEBIII_OFFSET))(this);
	}

	::System::Int32 OKOEKDDNDAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_OKOEKDDNDAN_OFFSET))(this);
	}

	/*
	::OHMDCFCNKIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHMDCFCNKIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean HFGMOJGBFML(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_HFGMOJGBFML_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::AAEMHFPDNEA IADPGFDDDPO()
	{
		return ((::AAEMHFPDNEA(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_IADPGFDDDPO_OFFSET))(this);
	}

	::System::Int32 NPELMEEJBLI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_NPELMEEJBLI_OFFSET))(this);
	}

	::System::String* GPKJMPBEMFJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_GPKJMPBEMFJ_OFFSET))(this);
	}

	::System::Int32 KJNEDAHPGOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_KJNEDAHPGOP_OFFSET))(this);
	}

	/*
	static ::OHMDCFCNKIM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OHMDCFCNKIM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MDBMBLBIAID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDCFCNKIM_MDBMBLBIAID_OFFSET))(this);
	}
};
