#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDigibooSpineWidgetController; }
namespace System { class String; }

#define ALHNDPMOFNF_OCIGJOEHDBK_BHEFHHLMMIB_OFFSET UNITYSDK_OFFSET(0x11BB0740)
#define ALHNDPMOFNF_OCIGJOEHDBK_IFIIPMFIJHC_OFFSET UNITYSDK_OFFSET(0x11BB05A0)
#define ALHNDPMOFNF_OCIGJOEHDBK_ILHBMHPBDBH_OFFSET UNITYSDK_OFFSET(0x11BB0890)
#define ALHNDPMOFNF_OCIGJOEHDBK_OKMEFGGMPFG_OFFSET UNITYSDK_OFFSET(0x11BB0670)
#define ALHNDPMOFNF_OCIGJOEHDBK__CTOR_OFFSET UNITYSDK_OFFSET(0x11BB0590)

inline static constexpr unsigned int ALHNDPMOFNF_OCIGJOEHDBK_TypeDefinitionIndex = 86739;

class ALHNDPMOFNF_OCIGJOEHDBK : public ::System::Object
{
public:
	::MoleMole::UIDigibooSpineWidgetController* JBNHFNHDEII; // 0x10
	::System::UInt32 MGMDJCCEAIB; // 0x18
	::System::Int32 ILOJFPNKJII; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_OCIGJOEHDBK__CTOR_OFFSET))(this);
	}

	::System::Void IFIIPMFIJHC(::System::String* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_OCIGJOEHDBK_IFIIPMFIJHC_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void BHEFHHLMMIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_OCIGJOEHDBK_BHEFHHLMMIB_OFFSET))(this);
	}

	::System::Void OKMEFGGMPFG(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_OCIGJOEHDBK_OKMEFGGMPFG_OFFSET))(this, FIPHFGHNNBE);
	}

	::System::Void ILHBMHPBDBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_OCIGJOEHDBK_ILHBMHPBDBH_OFFSET))(this);
	}
};
