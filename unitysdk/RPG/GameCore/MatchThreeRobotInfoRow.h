#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeRobotInfoRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEROBOTINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82BFE0)
#define RPG_GAMECORE_MATCHTHREEROBOTINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D82BDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeRobotInfoRow_TypeDefinitionIndex = 11919;

	class MatchThreeRobotInfoRow : public ::System::Object
	{
	public:
		::System::String* HeadIcon; // 0x10
		::System::UInt32 Level; // 0x18
		::System::UInt32 RobotID; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEROBOTINFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeRobotInfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeRobotInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEROBOTINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
