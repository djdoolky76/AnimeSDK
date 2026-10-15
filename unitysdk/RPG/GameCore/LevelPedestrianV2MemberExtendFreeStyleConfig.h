#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2MemberExtendFreeStyle; }
namespace RPG::GameCore { class LevelPedestrianV2MemberExtendFreeStyleConfig; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79B3D0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D79B310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2MemberExtendFreeStyleConfig_TypeDefinitionIndex = 17317;

	class LevelPedestrianV2MemberExtendFreeStyleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle*>* Configs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
