#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OCNOCKMHBHE_EEOJEMCJLDH_DDGBCLOGIJD_OFFSET UNITYSDK_OFFSET(0x12920C90)
#define OCNOCKMHBHE_EEOJEMCJLDH_KMLCKNMNFFE_OFFSET UNITYSDK_OFFSET(0x12920C70)
#define OCNOCKMHBHE_EEOJEMCJLDH_NNBMPJCNEFD_OFFSET UNITYSDK_OFFSET(0x12920C80)
#define OCNOCKMHBHE_EEOJEMCJLDH__CTOR_OFFSET UNITYSDK_OFFSET(0x12920C60)

inline static constexpr unsigned int OCNOCKMHBHE_EEOJEMCJLDH_TypeDefinitionIndex = 89193;

class OCNOCKMHBHE_EEOJEMCJLDH : public ::System::Object
{
public:
	::System::Action* HGBOMLCCBEE; // 0x10
	::System::Action_1<::System::String*>* CAAFEGLOALC; // 0x18
	::System::Boolean GNFAABJPKPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_EEOJEMCJLDH__CTOR_OFFSET))(this);
	}

	::System::Void KMLCKNMNFFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_EEOJEMCJLDH_KMLCKNMNFFE_OFFSET))(this);
	}

	::System::Boolean NNBMPJCNEFD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_EEOJEMCJLDH_NNBMPJCNEFD_OFFSET))(this);
	}

	::System::Void DDGBCLOGIJD(::System::String* EMIKCAHJLGB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_EEOJEMCJLDH_DDGBCLOGIJD_OFFSET))(this, EMIKCAHJLGB);
	}
};
