#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JALEECFEILF;
namespace MoleMole { class UIGroceryActivityPageController; }

#define JEOBNKPNPGP_HIABONACIDH_OFFSET UNITYSDK_OFFSET(0x19451400)
#define JEOBNKPNPGP_HLNBJLLNIEK_OFFSET UNITYSDK_OFFSET(0x19451440)
#define JEOBNKPNPGP_NKPAGONEHCH_OFFSET UNITYSDK_OFFSET(0x194513C0)
#define JEOBNKPNPGP__CTOR_OFFSET UNITYSDK_OFFSET(0x19451480)

inline static constexpr unsigned int JEOBNKPNPGP_TypeDefinitionIndex = 75088;

class JEOBNKPNPGP : public ::System::Object
{
public:
	::MoleMole::UIGroceryActivityPageController* IHCOOKNHPIM; // 0x10
	::JALEECFEILF* OJHKDNILKHF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOBNKPNPGP__CTOR_OFFSET))(this);
	}

	::System::Void NKPAGONEHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOBNKPNPGP_NKPAGONEHCH_OFFSET))(this);
	}

	::System::Void HIABONACIDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOBNKPNPGP_HIABONACIDH_OFFSET))(this);
	}

	::System::Void HLNBJLLNIEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOBNKPNPGP_HLNBJLLNIEK_OFFSET))(this);
	}
};
