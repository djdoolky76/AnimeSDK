#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHEKACANAMA.h"

namespace System { class String; }

#define MFBONNDCHCP_AFKJBINCCKJ_OFFSET UNITYSDK_OFFSET(0x1852FF60)
#define MFBONNDCHCP_EGCHPPEGODH_OFFSET UNITYSDK_OFFSET(0x1852FF50)
#define MFBONNDCHCP_KDEOCOHDDAH_OFFSET UNITYSDK_OFFSET(0x1852FF30)
#define MFBONNDCHCP_NINECCKMGBD_OFFSET UNITYSDK_OFFSET(0x1852FF10)
#define MFBONNDCHCP_OGLPJEAODDO_OFFSET UNITYSDK_OFFSET(0x1852FF20)
#define MFBONNDCHCP_OKAPEKHLLHB_OFFSET UNITYSDK_OFFSET(0x1852FF40)
#define MFBONNDCHCP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1852FEA0)
#define MFBONNDCHCP__CTOR_OFFSET UNITYSDK_OFFSET(0x1852FE40)

inline static constexpr unsigned int MFBONNDCHCP_TypeDefinitionIndex = 73685;

class MFBONNDCHCP : public ::BHEKACANAMA
{
public:
	::System::String* EEPNHKKEICB; // 0x20
	::System::Boolean BKPGIPOICOP; // 0x28
	::System::Boolean OOJNNPLLANB; // 0x29

	::System::Void _ctor(::System::Boolean KJFIDGNOACA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFBONNDCHCP__CTOR_OFFSET))(this, KJFIDGNOACA);
	}

	::System::Void _ctor_1(::System::Boolean KJFIDGNOACA, ::System::Boolean EDOJFDPFMMI, ::System::String* EPJNHBMCAKB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MFBONNDCHCP__CTOR_1_OFFSET))(this, KJFIDGNOACA, EDOJFDPFMMI, EPJNHBMCAKB);
	}

	::System::Boolean NINECCKMGBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBONNDCHCP_NINECCKMGBD_OFFSET))(this);
	}

	::System::Void OGLPJEAODDO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFBONNDCHCP_OGLPJEAODDO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* KDEOCOHDDAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBONNDCHCP_KDEOCOHDDAH_OFFSET))(this);
	}

	::System::Void OKAPEKHLLHB(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MFBONNDCHCP_OKAPEKHLLHB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean EGCHPPEGODH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBONNDCHCP_EGCHPPEGODH_OFFSET))(this);
	}

	::System::Void AFKJBINCCKJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFBONNDCHCP_AFKJBINCCKJ_OFFSET))(this, EGEGIMGMJHN);
	}
};
