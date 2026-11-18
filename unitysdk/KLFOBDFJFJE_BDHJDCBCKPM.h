#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMBMBLDFBID.h"

class KLFOBDFJFJE;
namespace System { class Action; }

#define KLFOBDFJFJE_BDHJDCBCKPM_DIGAEABBLCK_OFFSET UNITYSDK_OFFSET(0x13C84A20)
#define KLFOBDFJFJE_BDHJDCBCKPM_EIGOCGGCEDD_OFFSET UNITYSDK_OFFSET(0x13C849A0)
#define KLFOBDFJFJE_BDHJDCBCKPM_PAKPOMBELJK_OFFSET UNITYSDK_OFFSET(0x13C849E0)
#define KLFOBDFJFJE_BDHJDCBCKPM__CTOR_OFFSET UNITYSDK_OFFSET(0x13C83CF0)

inline static constexpr unsigned int KLFOBDFJFJE_BDHJDCBCKPM_TypeDefinitionIndex = 58482;

class KLFOBDFJFJE_BDHJDCBCKPM : public ::System::Object
{
public:
	::KLFOBDFJFJE* KLHPEBKNIFB; // 0x10
	::System::Action* NHIJMEGJIAM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_BDHJDCBCKPM__CTOR_OFFSET))(this);
	}

	::System::Void EIGOCGGCEDD(::BMBMBLDFBID HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_BDHJDCBCKPM_EIGOCGGCEDD_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void PAKPOMBELJK(::BMBMBLDFBID HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_BDHJDCBCKPM_PAKPOMBELJK_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void DIGAEABBLCK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_BDHJDCBCKPM_DIGAEABBLCK_OFFSET))(this);
	}
};
