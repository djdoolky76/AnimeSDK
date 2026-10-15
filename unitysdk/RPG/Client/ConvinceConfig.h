#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPG::Client { class ConvinceAnchorConfig; }
namespace RPG::Client { class ConvinceShakeConfig; }
namespace RPG::Client { class ConvinceSpliteLineConfig; }

#define RPG_CLIENT_CONVINCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xCBC69C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConvinceConfig_TypeDefinitionIndex = 60672;

	class ConvinceConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean EndIfHPIsMinOrMax; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::Client::ConvinceAnchorConfig* Anchor; // 0x20
		::RPG::Client::ConvinceShakeConfig* Shake; // 0x28
		::RPG::Client::ConvinceSpliteLineConfig* SpliteLine; // 0x30
		// static const ::System::String* CONFIG_PATH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCECONFIG_CTOR_OFFSET))(this);
		}

	};
}
