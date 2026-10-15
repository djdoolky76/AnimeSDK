#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2EmitInfo; }
namespace RPG::GameCore { class LevelPedestrianV2Info; }
namespace RPG::GameCore { class LevelPedestrianV2RoadMapInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D793000)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D793010)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D796EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2Info_TypeDefinitionIndex = 17324;

	class LevelPedestrianV2Info : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::String* MemberConfigPath; // 0x38
		::System::String* ExtendFreeStyleConfigPath; // 0x40
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2EmitInfo*>* Emitters; // 0x48
		::RPG::GameCore::LevelPedestrianV2RoadMapInfo* RoadMap; // 0x50
		::System::Boolean IsPosePermanent; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2Info* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2Info*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2Info* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2Info*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
