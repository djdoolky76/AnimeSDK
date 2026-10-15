#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
#include "unitysdk/RPG/GameCore/CakeRacePerformenceAudioTagType.h"
class EDJNKFGMECK;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define EDJNKFGMECK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x13320400)
#define EDJNKFGMECK_CTOR_OFFSET UNITYSDK_OFFSET(0x13320800)
#define EDJNKFGMECK_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x13320490)
#define EDJNKFGMECK_POKPHNNKLEA_OFFSET UNITYSDK_OFFSET(0x13320730)

inline static constexpr unsigned int EDJNKFGMECK_TypeDefinitionIndex = 78173;

	class EDJNKFGMECK : public ::AJHHFMBOCEN
	{
	public:
		::UnityEngine::GameObject* FAEGPGKBBLI; // 0x20
		::RPG::GameCore::CakeRacePerformenceAudioTagType HHGONLCEBAJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNKFGMECK_CTOR_OFFSET))(this);
		}

		static ::EDJNKFGMECK* BPLPBPMEODA(::RPG::GameCore::CakeRacePerformenceAudioTagType a1, ::UnityEngine::GameObject* a2)
		{
			return ((::EDJNKFGMECK*(*)(::RPG::GameCore::CakeRacePerformenceAudioTagType, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EDJNKFGMECK_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNKFGMECK_ONEXECUTE_OFFSET))(this);
		}

		::System::String* POKPHNNKLEA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNKFGMECK_POKPHNNKLEA_OFFSET))(this);
		}

	};
