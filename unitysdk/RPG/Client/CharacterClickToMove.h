#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class FOOIINCDBFA;

#define RPG_CLIENT_CHARACTERCLICKTOMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C05F990)
#define RPG_CLIENT_CHARACTERCLICKTOMOVE_START_OFFSET UNITYSDK_OFFSET(0x1C05F4C0)
#define RPG_CLIENT_CHARACTERCLICKTOMOVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C05F5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterClickToMove_TypeDefinitionIndex = 70328;

	class CharacterClickToMove : public ::UnityEngine::MonoBehaviour
	{
	public:
		::FOOIINCDBFA* GHKHOIPCAHO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCLICKTOMOVE_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCLICKTOMOVE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCLICKTOMOVE_UPDATE_OFFSET))(this);
		}

	};
}
