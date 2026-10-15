#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridTypeEnum.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyGridRow; }
namespace System { class String; }

#define RPG_GAMECORE_ALLEYGRIDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E5890)
#define RPG_GAMECORE_ALLEYGRIDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3E5070)

namespace RPG::GameCore
{
	class AlleyGridRow : public ::System::Object
	{
	public:
		::System::String* ShopInfoIcon; // 0x10
		::System::String* GridIcon; // 0x18
		::RPG::GameCore::GridTypeEnum GridType; // 0x20
		::System::UInt32 RelatedEventID; // 0x24
		::RPG::Client::TextID GridTitle; // 0x28
		::System::UInt32 RelatedMainMission; // 0x38
		::System::UInt32 GridID; // 0x3C
		::RPG::Client::TextID GridDesc; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyGridRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyGridRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
