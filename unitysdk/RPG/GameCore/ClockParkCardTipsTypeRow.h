#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkCardTipsTypeEnum.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkCardTipsTypeRow; }

#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BBB00)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5BB420)

namespace RPG::GameCore
{
	class ClockParkCardTipsTypeRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ClockParkCardTipsTypeEnum CardTipsTypeID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CardTips; // 0x18
		::RPG::Client::TextID CardTips_Detail; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkCardTipsTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkCardTipsTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
