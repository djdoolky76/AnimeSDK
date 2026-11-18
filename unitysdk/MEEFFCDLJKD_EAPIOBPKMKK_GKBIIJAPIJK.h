#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define MEEFFCDLJKD_EAPIOBPKMKK_GKBIIJAPIJK_FLMEODGGGOI_OFFSET UNITYSDK_OFFSET(0x1F75FB90)
#define MEEFFCDLJKD_EAPIOBPKMKK_GKBIIJAPIJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F75FB80)

inline static constexpr unsigned int MEEFFCDLJKD_EAPIOBPKMKK_GKBIIJAPIJK_TypeDefinitionIndex = 96610;

class MEEFFCDLJKD_EAPIOBPKMKK_GKBIIJAPIJK : public ::System::Object
{
public:
	::UnityEngine::Transform* LHPFMGBDFPN; // 0x10
	::UnityEngine::Transform* IAPKEGGEOJJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_EAPIOBPKMKK_GKBIIJAPIJK__CTOR_OFFSET))(this);
	}

	::System::Void FLMEODGGGOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_EAPIOBPKMKK_GKBIIJAPIJK_FLMEODGGGOI_OFFSET))(this);
	}
};
