#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphResultPredicate; }
namespace RPG::GameCore { class PhotoGraphShotResultCondition; }

#define RPG_GAMECORE_PHOTOGRAPHSHOTRESULTCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E5AA0)
#define RPG_GAMECORE_PHOTOGRAPHSHOTRESULTCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E5850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphShotResultCondition_TypeDefinitionIndex = 21654;

	class PhotoGraphShotResultCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID TargetConditionName; // 0x10
		::Il2CppArray<::RPG::GameCore::PhotoGraphResultPredicate*>* ShotResultCondition; // 0x20
		::RPG::GameCore::PhotoGraphFovLevel TargetFovLevel; // 0x28
		::System::Boolean AutoSnapFovLevel; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSHOTRESULTCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphShotResultCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphShotResultCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSHOTRESULTCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
