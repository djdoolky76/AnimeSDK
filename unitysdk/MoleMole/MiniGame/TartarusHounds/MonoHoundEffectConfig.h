#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::MiniGame::TartarusHounds::View { class ImageEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13EEF570)

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int MonoHoundEffectConfig_TypeDefinitionIndex = 84117;

	class MonoHoundEffectConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Single targetEffectLifeTime; // 0x58
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* targetNormalEffectTemplate; // 0x60
		::System::Single hpFlashTime; // 0x68
		::UnityEngine::Color hpFlashTargetColor; // 0x6C
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig*>* hpPropEffectConfigs; // 0x80
		::System::Single addLifeDogAnimStateTime; // 0x88
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig*>* addLifeEffectConfigs; // 0x90
		::System::Single GuideArrowWaitTime; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
