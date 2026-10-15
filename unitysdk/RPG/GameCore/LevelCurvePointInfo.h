#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelBaseCurvePointInfo.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelCurvePointInfo; }

#define RPG_GAMECORE_LEVELCURVEPOINTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A67A0)
#define RPG_GAMECORE_LEVELCURVEPOINTINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7A67B0)
#define RPG_GAMECORE_LEVELCURVEPOINTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A8440)

namespace RPG::GameCore
{
	class LevelCurvePointInfo : public ::RPG::GameCore::LevelBaseCurvePointInfo
	{
	public:
		::RPG::MVector3 Position; // 0x18
		::System::Byte ControlType; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::MVector3 Control1; // 0x28
		::RPG::MVector3 Control2; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEPOINTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelCurvePointInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelCurvePointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEPOINTINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelCurvePointInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelCurvePointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEPOINTINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
