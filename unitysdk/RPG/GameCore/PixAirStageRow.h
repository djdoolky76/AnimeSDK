#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirStageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirStageRow; }
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRSTAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB370B0)
#define RPG_GAMECORE_PIXAIRSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB36CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirStageRow_TypeDefinitionIndex = 12184;

	class PixAirStageRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* PreStageList; // 0x18
		::Il2CppArray<::System::UInt32>* AreaIDList; // 0x20
		::System::UInt32 StageID; // 0x28
		::RPG::GameCore::PixAirStageType Type; // 0x2C
		::RPG::Client::TextID Name; // 0x30
		::RPG::Client::TextID MechanismTip; // 0x40
		::RPG::Client::TextID RewardTip; // 0x50
		::System::UInt32 UnlockScore; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSTAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirStageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
