#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTalkColorType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTalkNameColorRow; }

#define RPG_GAMECORE_ROGUETALKNAMECOLORROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA02D80)
#define RPG_GAMECORE_ROGUETALKNAMECOLORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA02520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalkNameColorRow_TypeDefinitionIndex = 14811;

	class RogueTalkNameColorRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTalkColorType Color; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TextmapID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLORROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTalkNameColorRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTalkNameColorRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLORROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
