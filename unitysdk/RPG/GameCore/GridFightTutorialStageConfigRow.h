#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AOBAIBBHDEL;
class FCOEMCEDLNL;
class JKFAMDHMLBC;
namespace RPG::GameCore { class GridFightTutorialStageConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95C9B0)
#define RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E95C470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTutorialStageConfigRow_TypeDefinitionIndex = 13770;

	class GridFightTutorialStageConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::Il2CppArray<::JKFAMDHMLBC*>* ForbiddenSellRoleList; // 0x18
		::Il2CppArray<::AOBAIBBHDEL*>* ForbiddenAutoOpenShopNodeList; // 0x20
		::System::UInt32 DivisionID; // 0x28
		::System::UInt32 IsInitialSupply; // 0x2C
		::RPG::Client::TextID TutorialStageName; // 0x30
		::System::UInt32 IsRouteShow; // 0x40
		::System::UInt32 IsEquipRecommendShow; // 0x44
		::System::UInt32 IsPortal; // 0x48
		::System::UInt32 ForbiddenBattleFail; // 0x4C
		::System::UInt32 IsBossToastShow; // 0x50
		::System::UInt32 RewardQuest; // 0x54
		::System::UInt32 IsEnemyShow; // 0x58
		::System::UInt32 ForbiddenSellRoleBeforeChapterId; // 0x5C
		::System::UInt32 ForbiddenSellRoleBeforeSectionId; // 0x60
		::System::UInt32 IsAlltrial; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTutorialStageConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTutorialStageConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
