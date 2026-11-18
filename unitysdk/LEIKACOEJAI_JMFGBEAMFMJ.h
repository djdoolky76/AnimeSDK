#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DLFPCLJENMA;
namespace MoleMole { class NotificationBadgeEx; }

#define LEIKACOEJAI_JMFGBEAMFMJ_LDIEPLINMIN_OFFSET UNITYSDK_OFFSET(0x1A604FB0)
#define LEIKACOEJAI_JMFGBEAMFMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A604FA0)

inline static constexpr unsigned int LEIKACOEJAI_JMFGBEAMFMJ_TypeDefinitionIndex = 76186;

class LEIKACOEJAI_JMFGBEAMFMJ : public ::System::Object
{
public:
	::DLFPCLJENMA* CBNNIJKMJGE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIKACOEJAI_JMFGBEAMFMJ__CTOR_OFFSET))(this);
	}

	::System::Void LDIEPLINMIN(::MoleMole::NotificationBadgeEx* NEIFNLCPNPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*))((::PBYTE)hIl2Cpp + LEIKACOEJAI_JMFGBEAMFMJ_LDIEPLINMIN_OFFSET))(this, NEIFNLCPNPG);
	}
};
