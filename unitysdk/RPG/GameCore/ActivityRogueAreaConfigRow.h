#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRogueAreaConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYROGUEAREACONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA98BE0)
#define RPG_GAMECORE_ACTIVITYROGUEAREACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA98220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRogueAreaConfigRow_TypeDefinitionIndex = 12404;

	class ActivityRogueAreaConfigRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonster2; // 0x10
		::Il2CppArray<::System::UInt32>* AreaEffectIDList; // 0x18
		::Il2CppArray<::System::UInt32>* ParamList_2; // 0x20
		::System::String* FigurePath2; // 0x28
		::Il2CppArray<::System::UInt32>* MazeBuffIDList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonster; // 0x38
		::Il2CppArray<::System::UInt32>* ParamList_1; // 0x40
		::Il2CppArray<::System::UInt32>* MiracleEffectIDList; // 0x48
		::Il2CppArray<::System::UInt32>* TargetParamList; // 0x50
		::Il2CppArray<::System::UInt32>* ParamList_3; // 0x58
		::System::String* FigurePath; // 0x60
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x68
		::System::UInt32 StageID; // 0x70
		::System::UInt32 AreaID; // 0x74
		::RPG::Client::TextID Describe; // 0x78
		::System::UInt32 PlaneID; // 0x88
		::System::UInt32 ActivityModuleID; // 0x8C
		::System::UInt32 FloorID; // 0x90
		::System::UInt32 BattleAreaID; // 0x94
		::System::UInt32 DisplayMapID; // 0x98
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID GamePlay_3; // 0xA0
		::System::UInt32 BattleAreaGroupID; // 0xB0
		::System::UInt32 EventID; // 0xB4
		::RPG::Client::TextID GamePlay_1; // 0xB8
		::RPG::Client::TextID GamePlay_2; // 0xC8
		::RPG::Client::TextID Endless_GamePlay; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYROGUEAREACONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityRogueAreaConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityRogueAreaConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYROGUEAREACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
