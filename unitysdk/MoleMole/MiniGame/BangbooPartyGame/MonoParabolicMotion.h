#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_BIPAADOFPDH_OFFSET UNITYSDK_OFFSET(0x15AB4B00)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_KBPALODLDBP_OFFSET UNITYSDK_OFFSET(0x15AB4B80)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x15AB4A40)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_SIMULATEMOTION_OFFSET UNITYSDK_OFFSET(0x143328E0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB4AB0)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int MonoParabolicMotion_TypeDefinitionIndex = 82795;

	class MonoParabolicMotion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single climaxPoint; // 0x18
		::UnityEngine::Vector3 originalSpeed; // 0x1C
		::UnityEngine::Transform* destination; // 0x28
		::UnityEngine::Vector3 CCLPGNKHGEC; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION__CTOR_OFFSET))(this);
		}

		::System::Void SimulateMotion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_SIMULATEMOTION_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_RESETPOSITION_OFFSET))(this);
		}

		::System::Collections::IEnumerator* BIPAADOFPDH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_BIPAADOFPDH_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 KBPALODLDBP(::UnityEngine::Vector3 IEFBHIDIPPL)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_KBPALODLDBP_OFFSET))(IEFBHIDIPPL);
		}
	};
}
