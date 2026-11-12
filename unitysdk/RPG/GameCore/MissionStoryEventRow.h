#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionStoryEventRow; }
namespace System { class String; }

#define RPG_GAMECORE_MISSIONSTORYEVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA31C0)
#define RPG_GAMECORE_MISSIONSTORYEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EAA2AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionStoryEventRow_TypeDefinitionIndex = 14302;

	class MissionStoryEventRow : public ::System::Object
	{
	public:
		::System::String* ConditionExpression; // 0x10
		::RPG::Client::TextID EventDesc; // 0x18
		::System::UInt32 ID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EventName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionStoryEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionStoryEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
