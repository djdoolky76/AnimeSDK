#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenGameAtmosphereConfig; }
namespace RPG::GameCore { class HipplenMiniGameGradeConfig; }
namespace RPG::GameCore { class HipplenMiniGameLoadCharacter; }
namespace RPG::GameCore { class HipplenMovingGoodsEventConfig; }
namespace RPG::GameCore { class HipplenMovingGoodsMiniGameConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENMOVINGGOODSMINIGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D741440)
#define RPG_GAMECORE_HIPPLENMOVINGGOODSMINIGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D741090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMovingGoodsMiniGameConfig_TypeDefinitionIndex = 16793;

	class HipplenMovingGoodsMiniGameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HipplenMiniGameGradeConfig*>* GradeConfigList; // 0x10
		::Il2CppArray<::RPG::GameCore::HipplenMiniGameLoadCharacter*>* LoadCharacterList; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInit; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x30
		::Il2CppArray<::RPG::GameCore::HipplenMovingGoodsEventConfig*>* EventList; // 0x38
		::System::UInt32 GameTotalTime; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::GameCore::HipplenGameAtmosphereConfig* AtmosphereConfig; // 0x48
		::System::UInt32 TargetGroupID; // 0x50
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::String*>* TargetAnchors; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMOVINGGOODSMINIGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenMovingGoodsMiniGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenMovingGoodsMiniGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMOVINGGOODSMINIGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
