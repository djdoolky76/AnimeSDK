#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelCurveInfo; }
namespace RPG::GameCore { class LevelCurvePointInfo; }

#define RPG_GAMECORE_LEVELCURVEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A8180)
#define RPG_GAMECORE_LEVELCURVEINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7A8190)
#define RPG_GAMECORE_LEVELCURVEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A8150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCurveInfo_TypeDefinitionIndex = 17376;

	class LevelCurveInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelCurvePointInfo*>* PointList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelCurveInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelCurveInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
