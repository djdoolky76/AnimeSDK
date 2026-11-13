#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MPFJBKLKEPC;
namespace RPG::GameCore { class ActivityHipplenIncidentRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENINCIDENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E516FC0)
#define RPG_GAMECORE_ACTIVITYHIPPLENINCIDENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E516D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenIncidentRow_TypeDefinitionIndex = 11700;

	class ActivityHipplenIncidentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExpectedBasicList; // 0x10
		::Il2CppArray<::System::Single>* ExpectedRatioProbability; // 0x18
		::System::String* PerformanceJsonConfigPath; // 0x20
		::Il2CppArray<::MPFJBKLKEPC*>* EffectList; // 0x28
		::System::UInt32 ID; // 0x30
		::RPG::GameCore::HipplenIncidentType Type; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINCIDENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenIncidentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenIncidentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINCIDENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
