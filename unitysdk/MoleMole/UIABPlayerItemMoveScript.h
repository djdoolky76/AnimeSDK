#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C0F0680)
#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_ISMOVING_OFFSET UNITYSDK_OFFSET(0x1C0F0A90)
#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x1C0F0710)
#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_SETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x1C0F0970)
#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_STARTMOVE_OFFSET UNITYSDK_OFFSET(0x1C0F0A50)
#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_STOPMOVE_OFFSET UNITYSDK_OFFSET(0x1C0F0AD0)
#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_TICK_OFFSET UNITYSDK_OFFSET(0x1C0F0780)
#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F0B20)

namespace MoleMole
{
	inline static constexpr unsigned int UIABPlayerItemMoveScript_TypeDefinitionIndex = 61239;

	class UIABPlayerItemMoveScript : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single duration; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* YAnim; // 0x20
		::UnityEngine::AnimationCurve* XAnim; // 0x28
		::UnityEngine::Vector3 OFDMLLKLAHC; // 0x30
		::System::Single EKGMLLJEJHM; // 0x3C
		::UnityEngine::Vector3 AENOEFFHHEM; // 0x40
		::UnityEngine::Vector3 CNJMEAHCLDH; // 0x4C
		::System::Boolean MNMJIDOKGPD; // 0x58
		::System::Boolean FPOMJKHKOLJ; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_AWAKE_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_RESETPOSITION_OFFSET))(this);
		}

		::System::Boolean Tick(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_TICK_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void SetTargetPos(::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Boolean GJMFBAKMCDG, ::System::Boolean MNMJIDOKGPD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_SETTARGETPOS_OFFSET))(this, OHOGDOMNHNK, GJMFBAKMCDG, MNMJIDOKGPD);
		}

		::System::Void StartMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_STARTMOVE_OFFSET))(this);
		}

		::System::Boolean IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_ISMOVING_OFFSET))(this);
		}

		::System::Void StopMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_STOPMOVE_OFFSET))(this);
		}
	};
}
