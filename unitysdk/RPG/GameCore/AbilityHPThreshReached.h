#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityHPThreshReached; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ABILITYHPTHRESHREACHED_CLEAR_OFFSET UNITYSDK_OFFSET(0xEF74680)
#define RPG_GAMECORE_ABILITYHPTHRESHREACHED_CTOR_OFFSET UNITYSDK_OFFSET(0xEF74770)
#define RPG_GAMECORE_ABILITYHPTHRESHREACHED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xEF74720)
#define RPG_GAMECORE_ABILITYHPTHRESHREACHED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xEF746D0)
#define RPG_GAMECORE_ABILITYHPTHRESHREACHED_INIT_OFFSET UNITYSDK_OFFSET(0xEF74600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityHPThreshReached_TypeDefinitionIndex = 57807;

	class AbilityHPThreshReached : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* AttackerEntity; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* LockHPKeys; // 0x20
		::RPG::GameCore::GameEntity* DefenderEntity; // 0x28
		::RPG::GameCore::FixPoint Threshold; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYHPTHRESHREACHED_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityHPThreshReached* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::RPG::GameCore::AbilityHPThreshReached*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYHPTHRESHREACHED_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYHPTHRESHREACHED_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYHPTHRESHREACHED_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYHPTHRESHREACHED_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
