#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelCurveInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelBaseCurvePointInfo; }
namespace RPG::GameCore { class LevelCurvePointInfo; }
namespace RPG::GameCore { class LittleGameBezierCurveInfo; }

#define RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B0270)
#define RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_DAAANAKDIKM_OFFSET UNITYSDK_OFFSET(0x1D7B03A0)
#define RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7B0280)
#define RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B0240)
#define RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_PBDAGAPHDPD_OFFSET UNITYSDK_OFFSET(0x1D7B03B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameBezierCurveInfo_TypeDefinitionIndex = 18851;

	class LittleGameBezierCurveInfo : public ::RPG::GameCore::LittleGameLevelCurveInfo
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelCurvePointInfo*>* PointList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameBezierCurveInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameBezierCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameBezierCurveInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameBezierCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::UInt32 DAAANAKDIKM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_DAAANAKDIKM_OFFSET))(this);
		}

		::RPG::GameCore::LevelBaseCurvePointInfo* PBDAGAPHDPD(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelBaseCurvePointInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_PBDAGAPHDPD_OFFSET))(this, a1);
		}

	};
}
