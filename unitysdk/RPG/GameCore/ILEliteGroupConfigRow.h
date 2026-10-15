#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILEliteGroupConfigRow; }

#define RPG_GAMECORE_ILELITEGROUPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D777220)
#define RPG_GAMECORE_ILELITEGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D776FB0)

namespace RPG::GameCore
{
	class ILEliteGroupConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint DefenceRatio; // 0x10
		::RPG::GameCore::FixPoint HPRatio; // 0x18
		::RPG::GameCore::FixPoint AttackRatio; // 0x20
		::System::UInt32 EliteGroup; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILELITEGROUPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ILEliteGroupConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ILEliteGroupConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILELITEGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
