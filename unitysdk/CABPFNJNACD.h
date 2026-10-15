#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGPLHHDBEIP.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }

#define CABPFNJNACD_CBIBLIDOMDD_OFFSET UNITYSDK_OFFSET(0xC1BCF30)
#define CABPFNJNACD_CTOR_OFFSET UNITYSDK_OFFSET(0xC1BD060)
#define CABPFNJNACD_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0xC1BCE20)
#define CABPFNJNACD_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xC1BC810)
#define CABPFNJNACD_GET_CURSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xC1BD010)
#define CABPFNJNACD_GET_MAXSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xC1BD030)
#define CABPFNJNACD_GET_STYLEEXP_OFFSET UNITYSDK_OFFSET(0xC1BCFF0)
#define CABPFNJNACD_GET_STYLEID_OFFSET UNITYSDK_OFFSET(0xC1BCFB0)
#define CABPFNJNACD_GET_STYLELEVEL_OFFSET UNITYSDK_OFFSET(0xC1BCFD0)
#define CABPFNJNACD_IAGDCIIFDKL_OFFSET UNITYSDK_OFFSET(0xC1BC9A0)
#define CABPFNJNACD_KCIGLFGLKHK_OFFSET UNITYSDK_OFFSET(0xC1BCA20)
#define CABPFNJNACD_KMAEMMIJGHC_OFFSET UNITYSDK_OFFSET(0xC1BD050)
#define CABPFNJNACD_NLADBNPJPMG_OFFSET UNITYSDK_OFFSET(0xC1BC8E0)
#define CABPFNJNACD_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xC1BC820)
#define CABPFNJNACD_SET_CURSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xC1BD020)
#define CABPFNJNACD_SET_MAXSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xC1BD040)
#define CABPFNJNACD_SET_STYLEEXP_OFFSET UNITYSDK_OFFSET(0xC1BD000)
#define CABPFNJNACD_SET_STYLEID_OFFSET UNITYSDK_OFFSET(0xC1BCFC0)
#define CABPFNJNACD_SET_STYLELEVEL_OFFSET UNITYSDK_OFFSET(0xC1BCFE0)

inline static constexpr unsigned int CABPFNJNACD_TypeDefinitionIndex = 56016;

	class CABPFNJNACD : public ::EGPLHHDBEIP
	{
	public:
		::RPG::GameCore::GameEntity* NAELCJFONDB; // 0x48
		::System::UInt32 _StyleLevel_k__BackingField; // 0x50
		::System::UInt32 _StyleExp_k__BackingField; // 0x54
		::RPG::GameCore::FixPoint _CurSpotlight_k__BackingField; // 0x58
		::RPG::GameCore::FixPoint _MaxSpotlight_k__BackingField; // 0x60
		::System::UInt32 _StyleID_k__BackingField; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABPFNJNACD_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CABPFNJNACD_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::System::Void OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABPFNJNACD_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Void NLADBNPJPMG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CABPFNJNACD_NLADBNPJPMG_OFFSET))(this, a1);
		}

		::System::Void KCIGLFGLKHK(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CABPFNJNACD_KCIGLFGLKHK_OFFSET))(this, a1, a2);
		}

		::System::Void IAGDCIIFDKL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CABPFNJNACD_IAGDCIIFDKL_OFFSET))(this, a1, a2);
		}

		::System::Void CBIBLIDOMDD(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CABPFNJNACD_CBIBLIDOMDD_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_StyleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CABPFNJNACD_GET_STYLEID_OFFSET))(this);
		}

		::System::Void set_StyleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CABPFNJNACD_SET_STYLEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_StyleLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CABPFNJNACD_GET_STYLELEVEL_OFFSET))(this);
		}

		::System::Void set_StyleLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CABPFNJNACD_SET_STYLELEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_StyleExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CABPFNJNACD_GET_STYLEEXP_OFFSET))(this);
		}

		::System::Void set_StyleExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CABPFNJNACD_SET_STYLEEXP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CurSpotlight()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CABPFNJNACD_GET_CURSPOTLIGHT_OFFSET))(this);
		}

		::System::Void set_CurSpotlight(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CABPFNJNACD_SET_CURSPOTLIGHT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MaxSpotlight()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CABPFNJNACD_GET_MAXSPOTLIGHT_OFFSET))(this);
		}

		::System::Void set_MaxSpotlight(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CABPFNJNACD_SET_MAXSPOTLIGHT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint FJNIJBIIFGO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CABPFNJNACD_FJNIJBIIFGO_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* KMAEMMIJGHC()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABPFNJNACD_KMAEMMIJGHC_OFFSET))(this);
		}

	};
