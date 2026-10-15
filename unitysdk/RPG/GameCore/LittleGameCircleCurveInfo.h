#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelCurveInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelBaseCurvePointInfo; }
namespace RPG::GameCore { class LevelCirclePointInfo; }
namespace RPG::GameCore { class LevelCurvePointInfo; }
namespace RPG::GameCore { class LittleGameBezierCurveInfo; }
namespace RPG::GameCore { class LittleGameCircleCurveInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_CGLDFOMHJCK_1_OFFSET UNITYSDK_OFFSET(0x1D7DECD0)
#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_CGLDFOMHJCK_OFFSET UNITYSDK_OFFSET(0x1D7DEC30)
#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DEA70)
#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_DAAANAKDIKM_OFFSET UNITYSDK_OFFSET(0x1D7DEBF0)
#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_GEECOCHOCCL_OFFSET UNITYSDK_OFFSET(0x1D7DF000)
#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DEA80)
#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DEA30)
#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_PBDAGAPHDPD_OFFSET UNITYSDK_OFFSET(0x1D7DEC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameCircleCurveInfo_TypeDefinitionIndex = 18852;

	class LittleGameCircleCurveInfo : public ::RPG::GameCore::LittleGameLevelCurveInfo
	{
	public:
		::System::Single Radius; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::LevelCirclePointInfo*>* PointList; // 0x20
		// static const ::System::Object CONTROL_TYPE_BEZIER_INDEPENDANT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameCircleCurveInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameCircleCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameCircleCurveInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameCircleCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::UInt32 DAAANAKDIKM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_DAAANAKDIKM_OFFSET))(this);
		}

		::RPG::GameCore::LevelBaseCurvePointInfo* PBDAGAPHDPD(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelBaseCurvePointInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_PBDAGAPHDPD_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameBezierCurveInfo* CGLDFOMHJCK()
		{
			return ((::RPG::GameCore::LittleGameBezierCurveInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_CGLDFOMHJCK_OFFSET))(this);
		}

		::System::Void CGLDFOMHJCK_1(::System::Collections::Generic::List_1<::RPG::GameCore::LevelCurvePointInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelCurvePointInfo*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_CGLDFOMHJCK_1_OFFSET))(this, a1);
		}

		::System::Void GEECOCHOCCL(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelCurvePointInfo*>* a4, ::RPG::GameCore::LevelCurvePointInfo* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelCurvePointInfo*>*, ::RPG::GameCore::LevelCurvePointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_GEECOCHOCCL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
}
