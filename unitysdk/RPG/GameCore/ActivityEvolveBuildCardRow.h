#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildCardInfluenceScope.h"
#include "unitysdk/RPG/GameCore/EvolveBuildCardType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityEvolveBuildCardRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E564B80)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E564360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEvolveBuildCardRow_TypeDefinitionIndex = 11483;

	class ActivityEvolveBuildCardRow : public ::System::Object
	{
	public:
		::System::String* ItemMiniIcon; // 0x10
		::System::String* ItemIcon; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::Il2CppArray<::System::UInt32>* CardSelectablePeriod; // 0x28
		::RPG::GameCore::EvolveBuildCardType Type; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::GameCore::EvolveBuildSeason Season; // 0x38
		::System::UInt32 UnlockQuest; // 0x3C
		::System::UInt32 LvID; // 0x40
		::RPG::GameCore::EvolveBuildCardInfluenceScope InfluenceScope; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityEvolveBuildCardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityEvolveBuildCardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
