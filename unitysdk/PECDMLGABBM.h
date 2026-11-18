#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/OICFHEBNAEE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PECDMLGABBM_ACDHBJAAGDH_OFFSET UNITYSDK_OFFSET(0x756440)
#define PECDMLGABBM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PECDMLGABBM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PECDMLGABBM_BLABHOICPEL_OFFSET UNITYSDK_OFFSET(0x7631A0)
#define PECDMLGABBM_DFCHCNCNAFI_OFFSET UNITYSDK_OFFSET(0x755060)
#define PECDMLGABBM_DMPKFPNFMEA_OFFSET UNITYSDK_OFFSET(0x757C10)
#define PECDMLGABBM_EJMJMJCIKMF_OFFSET UNITYSDK_OFFSET(0x779A20)
#define PECDMLGABBM_FGIFHCDPBHN_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define PECDMLGABBM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PECDMLGABBM_IHIAPPGJDDL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PECDMLGABBM_INGFEHBHLPI_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define PECDMLGABBM_JLAGIHONKLF_OFFSET UNITYSDK_OFFSET(0x761240)
#define PECDMLGABBM_KMOCBMFCANN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PECDMLGABBM_LNNNJMJGJIN_OFFSET UNITYSDK_OFFSET(0x754A70)
#define PECDMLGABBM_NCGMDMHLBAL_OFFSET UNITYSDK_OFFSET(0x758780)
#define PECDMLGABBM_NIOHGCIPHDC_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define PECDMLGABBM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EC84FD0)
#define PECDMLGABBM_PAIPIOOCDAJ_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define PECDMLGABBM_PFDLEAHJBDC_OFFSET UNITYSDK_OFFSET(0x814320)
#define PECDMLGABBM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PECDMLGABBM_TypeDefinitionIndex = 16514;

struct alignas(4) PECDMLGABBM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECDMLGABBM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PECDMLGABBM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean PFDLEAHJBDC(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + PECDMLGABBM_PFDLEAHJBDC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean EJMJMJCIKMF(::System::Int32 HPMEONKHFGG, ::OICFHEBNAEE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OICFHEBNAEE&))((::PBYTE)hIl2Cpp + PECDMLGABBM_EJMJMJCIKMF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 INGFEHBHLPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PECDMLGABBM_INGFEHBHLPI_OFFSET))(this);
	}

	::System::String* IHIAPPGJDDL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECDMLGABBM_IHIAPPGJDDL_OFFSET))(this);
	}

	::System::Boolean LNNNJMJGJIN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PECDMLGABBM_LNNNJMJGJIN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JLAGIHONKLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PECDMLGABBM_JLAGIHONKLF_OFFSET))(this);
	}

	::System::Int32 NIOHGCIPHDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PECDMLGABBM_NIOHGCIPHDC_OFFSET))(this);
	}

	::System::Int32 BLABHOICPEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PECDMLGABBM_BLABHOICPEL_OFFSET))(this);
	}

	/*
	static ::PECDMLGABBM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PECDMLGABBM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PECDMLGABBM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PAIPIOOCDAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PECDMLGABBM_PAIPIOOCDAJ_OFFSET))(this);
	}

	/*
	::PECDMLGABBM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PECDMLGABBM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PECDMLGABBM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PECDMLGABBM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 ACDHBJAAGDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PECDMLGABBM_ACDHBJAAGDH_OFFSET))(this);
	}

	::System::Boolean FGIFHCDPBHN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PECDMLGABBM_FGIFHCDPBHN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NCGMDMHLBAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PECDMLGABBM_NCGMDMHLBAL_OFFSET))(this);
	}

	::System::Int32 DFCHCNCNAFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PECDMLGABBM_DFCHCNCNAFI_OFFSET))(this);
	}

	::System::Int32 KMOCBMFCANN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PECDMLGABBM_KMOCBMFCANN_OFFSET))(this);
	}

	::System::Int32 DMPKFPNFMEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PECDMLGABBM_DMPKFPNFMEA_OFFSET))(this);
	}
};
