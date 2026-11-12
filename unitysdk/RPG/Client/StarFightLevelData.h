#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ActivityStarFightStageConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STARFIGHTLEVELDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEBD4310)
#define RPG_CLIENT_STARFIGHTLEVELDATA_GETMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xEBD4FF0)
#define RPG_CLIENT_STARFIGHTLEVELDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xEBD5370)
#define RPG_CLIENT_STARFIGHTLEVELDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xEBD5290)
#define RPG_CLIENT_STARFIGHTLEVELDATA_GET_QUESTLIST_OFFSET UNITYSDK_OFFSET(0xEBD5240)

namespace RPG::Client
{
	inline static constexpr unsigned int StarFightLevelData_TypeDefinitionIndex = 69928;

	class StarFightLevelData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityStarFightStageConfigRow* _LevelRow; // 0x10
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTLEVELDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTLEVELDATA_GETMONSTERDATA_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_QuestList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTLEVELDATA_GET_QUESTLIST_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTLEVELDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTLEVELDATA_GET_ISFINISH_OFFSET))(this);
		}

	};
}
