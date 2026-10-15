#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenInteractType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenInteractionRow; }

#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D367FD0)
#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D367E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenInteractionRow_TypeDefinitionIndex = 11655;

	class ActivityHipplenInteractionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Effects; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::HipplenInteractType InteractType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenInteractionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenInteractionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
