#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2MemberConfig; }
namespace RPG::GameCore { class LevelPedestrianV2MemberInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C8BC0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C8A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2MemberConfig_TypeDefinitionIndex = 17315;

	class LevelPedestrianV2MemberConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ExternalAssetConfigPath; // 0x10
		::System::Single OverrideSpawnMaxDistance; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2MemberInfo*>* Members; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2MemberConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2MemberConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
