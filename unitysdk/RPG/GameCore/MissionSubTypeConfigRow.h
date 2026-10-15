#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MainMissionSubType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionSubTypeConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MISSIONSUBTYPECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D889CD0)
#define RPG_GAMECORE_MISSIONSUBTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D889690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionSubTypeConfigRow_TypeDefinitionIndex = 14151;

	class MissionSubTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* ShowIconPath; // 0x10
		::System::UInt32 TypePriority; // 0x18
		::RPG::GameCore::MainMissionSubType Type; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionSubTypeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionSubTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
