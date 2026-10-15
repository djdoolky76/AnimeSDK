#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraMotionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraMotionRow; }

#define RPG_GAMECORE_CHIMERAMOTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ADBC0)
#define RPG_GAMECORE_CHIMERAMOTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5ADA80)

namespace RPG::GameCore
{
	class ChimeraMotionRow : public ::System::Object
	{
	public:
		::System::UInt32 MotionID; // 0x10
		::RPG::GameCore::ChimeraMotionType MotionKey; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAMOTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraMotionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraMotionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAMOTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
