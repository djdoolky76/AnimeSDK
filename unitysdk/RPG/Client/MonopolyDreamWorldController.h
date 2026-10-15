#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_ANJEEPLLDAK_OFFSET UNITYSDK_OFFSET(0xD887630)
#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xD887800)
#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_NFCLEOFMKJF_OFFSET UNITYSDK_OFFSET(0xD8877B0)
#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD8875B0)
#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xD8874F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyDreamWorldController_TypeDefinitionIndex = 72844;

	class MonopolyDreamWorldController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* AnimRef; // 0x18
		::RPG::Client::RPGAnimationEvent* EventRef; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ANJEEPLLDAK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_ANJEEPLLDAK_OFFSET))(this, a1);
		}

		::System::Void NFCLEOFMKJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_NFCLEOFMKJF_OFFSET))(this);
		}

	};
}
