#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class Effect_TransformAdjustViewport; }
namespace UnityEngine { class Camera; }

#define ICKJGPIOIEK_CTOR_OFFSET UNITYSDK_OFFSET(0x188D0B60)
#define ICKJGPIOIEK_FGHMKMIAINH_OFFSET UNITYSDK_OFFSET(0x188D0950)
#define ICKJGPIOIEK_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x188D0900)
#define ICKJGPIOIEK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x188D0160)
#define ICKJGPIOIEK_LATETICK_OFFSET UNITYSDK_OFFSET(0x188D08A0)
#define ICKJGPIOIEK_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x188D01E0)
#define ICKJGPIOIEK_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x188D0850)

inline static constexpr unsigned int ICKJGPIOIEK_TypeDefinitionIndex = 72332;

	class ICKJGPIOIEK : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKJGPIOIEK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKJGPIOIEK_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKJGPIOIEK_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICKJGPIOIEK_LATETICK_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKJGPIOIEK_LJBCDJNNBJH_OFFSET))(this);
		}

		::UnityEngine::Vector3 FGHMKMIAINH(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ICKJGPIOIEK_FGHMKMIAINH_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Effect_TransformAdjustViewport* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::Effect_TransformAdjustViewport*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKJGPIOIEK_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
