#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"
namespace RPG::Client { class PropertyNumberUIData; }
namespace RPG::Client { class PropertyUIData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define RPG_CLIENT_UINUMBERUTILS_APPROXIMATELYROUND_1_OFFSET UNITYSDK_OFFSET(0x175AA900)
#define RPG_CLIENT_UINUMBERUTILS_APPROXIMATELYROUND_OFFSET UNITYSDK_OFFSET(0x175AA670)
#define RPG_CLIENT_UINUMBERUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0x175ADF80)
#define RPG_CLIENT_UINUMBERUTILS_CHARACTERLEVELINT_OFFSET UNITYSDK_OFFSET(0x175AD600)
#define RPG_CLIENT_UINUMBERUTILS_CLAMPDDIRTYHPPERCENT_OFFSET UNITYSDK_OFFSET(0x175AA410)
#define RPG_CLIENT_UINUMBERUTILS_CLAMPDECIMALTOLONG_OFFSET UNITYSDK_OFFSET(0x175AAA00)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTBP_OFFSET UNITYSDK_OFFSET(0x175AC390)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTDELAYINT_OFFSET UNITYSDK_OFFSET(0x175AA490)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTDIRTYHPPERCENT_OFFSET UNITYSDK_OFFSET(0x175AA290)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTHPANDSHIELDLONG_OFFSET UNITYSDK_OFFSET(0x175AAF70)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTHPLONG_OFFSET UNITYSDK_OFFSET(0x175AAEE0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTHPPERCENT100INT_OFFSET UNITYSDK_OFFSET(0x175A96A0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTHPPERCENTWITHSHIELD_OFFSET UNITYSDK_OFFSET(0x175A9D50)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTHPPERCENT_OFFSET UNITYSDK_OFFSET(0x175A9540)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTHPSEG_OFFSET UNITYSDK_OFFSET(0x175ACD80)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x175ACD10)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTNEGATIVEHP_OFFSET UNITYSDK_OFFSET(0x1757A6E0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDANDHPPERCENT_OFFSET UNITYSDK_OFFSET(0x175ACC00)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDANDHP_OFFSET UNITYSDK_OFFSET(0x175AAFE0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDPERCENTBYMAXHP_OFFSET UNITYSDK_OFFSET(0x175AD370)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDPERCENT_OFFSET UNITYSDK_OFFSET(0x175AD210)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELD_OFFSET UNITYSDK_OFFSET(0x175AD1A0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSHOWHPLONG_OFFSET UNITYSDK_OFFSET(0x175AAE40)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSHOWHPPERCENT_OFFSET UNITYSDK_OFFSET(0x175A9600)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSPPERCENT100INT_OFFSET UNITYSDK_OFFSET(0x175AC1A0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSPPERCENT_OFFSET UNITYSDK_OFFSET(0x175ABFB0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSP_FP_OFFSET UNITYSDK_OFFSET(0x175ABC40)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSP_OFFSET UNITYSDK_OFFSET(0x175ABBD0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSTANCEINT_OFFSET UNITYSDK_OFFSET(0x175AB070)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSTANCEPERCENT_OFFSET UNITYSDK_OFFSET(0x175AB680)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSTANCESHOWINT_OFFSET UNITYSDK_OFFSET(0x175AB100)
#define RPG_CLIENT_UINUMBERUTILS_DELAYINT_OFFSET UNITYSDK_OFFSET(0x175AA520)
#define RPG_CLIENT_UINUMBERUTILS_DELTAHPSEG_OFFSET UNITYSDK_OFFSET(0x175ACE50)
#define RPG_CLIENT_UINUMBERUTILS_DOPROPERTYADSORPTION_OFFSET UNITYSDK_OFFSET(0x175AD070)
#define RPG_CLIENT_UINUMBERUTILS_GETDEFAULTULTRASKILLSPNEED_OFFSET UNITYSDK_OFFSET(0x175AD7E0)
#define RPG_CLIENT_UINUMBERUTILS_GETPROPERTYNUMBERUIDATA_OFFSET UNITYSDK_OFFSET(0x175ADA70)
#define RPG_CLIENT_UINUMBERUTILS_GETPROPERTYUIDATA_1_OFFSET UNITYSDK_OFFSET(0x175AD9D0)
#define RPG_CLIENT_UINUMBERUTILS_GETPROPERTYUIDATA_OFFSET UNITYSDK_OFFSET(0x175AD930)
#define RPG_CLIENT_UINUMBERUTILS_GETULTRASKILLSPNEED_OFFSET UNITYSDK_OFFSET(0x175AD690)
#define RPG_CLIENT_UINUMBERUTILS_HPPERCENTBEFORECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x175AB9C0)
#define RPG_CLIENT_UINUMBERUTILS_HPPERCENT_1_OFFSET UNITYSDK_OFFSET(0x175A9F90)
#define RPG_CLIENT_UINUMBERUTILS_HPPERCENT_OFFSET UNITYSDK_OFFSET(0x175A9EC0)
#define RPG_CLIENT_UINUMBERUTILS_MAXBP_OFFSET UNITYSDK_OFFSET(0x175AC3F0)
#define RPG_CLIENT_UINUMBERUTILS_MAXHPLONG_OFFSET UNITYSDK_OFFSET(0x175AA200)
#define RPG_CLIENT_UINUMBERUTILS_MAXSP_FP_OFFSET UNITYSDK_OFFSET(0x175ABDE0)
#define RPG_CLIENT_UINUMBERUTILS_MAXSP_OFFSET UNITYSDK_OFFSET(0x175ABD70)
#define RPG_CLIENT_UINUMBERUTILS_MAXSTANCEINT_OFFSET UNITYSDK_OFFSET(0x175AB2E0)
#define RPG_CLIENT_UINUMBERUTILS_MAXSTANCESHOWINT_OFFSET UNITYSDK_OFFSET(0x175AB450)
#define RPG_CLIENT_UINUMBERUTILS_MAXSTANCE_OFFSET UNITYSDK_OFFSET(0x175AB3D0)
#define RPG_CLIENT_UINUMBERUTILS_PERCENTTO100INT_1_OFFSET UNITYSDK_OFFSET(0x175A9B30)
#define RPG_CLIENT_UINUMBERUTILS_PERCENTTO100INT_OFFSET UNITYSDK_OFFSET(0x175A9810)
#define RPG_CLIENT_UINUMBERUTILS_PERCENTTOHPINT_OFFSET UNITYSDK_OFFSET(0x175A9C90)
#define RPG_CLIENT_UINUMBERUTILS_PLURALITYSTANCEPERCENT_OFFSET UNITYSDK_OFFSET(0x175AB870)
#define RPG_CLIENT_UINUMBERUTILS_PROTECTFLOORTOONE_1_OFFSET UNITYSDK_OFFSET(0x175AA6D0)
#define RPG_CLIENT_UINUMBERUTILS_PROTECTFLOORTOONE_2_OFFSET UNITYSDK_OFFSET(0x175A9C10)
#define RPG_CLIENT_UINUMBERUTILS_PROTECTFLOORTOONE_OFFSET UNITYSDK_OFFSET(0x175A9890)
#define RPG_CLIENT_UINUMBERUTILS_PROTECTROUNDTOONE_OFFSET UNITYSDK_OFFSET(0x175AABD0)
#define RPG_CLIENT_UINUMBERUTILS_RALLYHPPERCENT_OFFSET UNITYSDK_OFFSET(0x175AA330)
#define RPG_CLIENT_UINUMBERUTILS_SHIELDANDHPOVERMAXHP_OFFSET UNITYSDK_OFFSET(0x175AD4D0)
#define RPG_CLIENT_UINUMBERUTILS_SKILLBPPRECHANGE_OFFSET UNITYSDK_OFFSET(0x175AC860)
#define RPG_CLIENT_UINUMBERUTILS_SKILLNEEDBPBYCONTROLSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x175AC450)
#define RPG_CLIENT_UINUMBERUTILS_SKILLNEEDBP_OFFSET UNITYSDK_OFFSET(0x175AC630)
#define RPG_CLIENT_UINUMBERUTILS_SKILLNEEDSP_OFFSET UNITYSDK_OFFSET(0x175AC730)
#define RPG_CLIENT_UINUMBERUTILS_STANCEPERCENTBEFORECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x175ABAA0)
#define RPG_CLIENT_UINUMBERUTILS_STANCEPERCENT_OFFSET UNITYSDK_OFFSET(0x175AB720)
#define RPG_CLIENT_UINUMBERUTILS_TOTALSTANCEAFTERCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x175ABB50)

namespace RPG::Client
{
	inline static constexpr unsigned int UINumberUtils_TypeDefinitionIndex = 75288;

	class UINumberUtils : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint* StaticGet__MAX_DISPLAY_ACTION_DELAY()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.Client", "UINumberUtils")->GetStaticField(0x112A0);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_ONE_HUNDRED()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.Client", "UINumberUtils")->GetStaticField(0x112A8);
		}

		static ::System::Int32* StaticGet__Epsilon()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "UINumberUtils")->GetStaticField(0x112B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CCTOR_OFFSET))();
		}

		static ::System::Single CurrentHPPercent(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTHPPERCENT_OFFSET))(a1);
		}

		static ::System::Single CurrentShowHPPercent(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSHOWHPPERCENT_OFFSET))(a1);
		}

		static ::System::Int32 CurrentHPPercent100Int(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTHPPERCENT100INT_OFFSET))(a1);
		}

		static ::System::Int32 PercentTo100Int(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PERCENTTO100INT_OFFSET))(a1);
		}

		static ::System::Int32 PercentTo100Int_1(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PERCENTTO100INT_1_OFFSET))(a1);
		}

		static ::System::Int32 PercentToHPInt(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PERCENTTOHPINT_OFFSET))(a1, a2);
		}

		static ::System::Single CurrentHPPercentWithShield(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTHPPERCENTWITHSHIELD_OFFSET))(a1);
		}

		static ::System::Single HPPercent(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_HPPERCENT_OFFSET))(a1, a2);
		}

		static ::System::Single HPPercent_1(::RPG::GameCore::GameEntity* a1, ::System::Decimal a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::System::Decimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_HPPERCENT_1_OFFSET))(a1, a2);
		}

		static ::System::Int64 MaxHPLong(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_MAXHPLONG_OFFSET))(a1);
		}

		static ::System::Single CurrentDirtyHPPercent(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTDIRTYHPPERCENT_OFFSET))(a1);
		}

		static ::System::Single RallyHPPercent(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_RALLYHPPERCENT_OFFSET))(a1);
		}

		static ::System::Single ClampdDirtyHPPercent(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CLAMPDDIRTYHPPERCENT_OFFSET))(a1);
		}

		static ::System::Int32 CurrentDelayInt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTDELAYINT_OFFSET))(a1);
		}

		static ::System::Int32 DelayInt(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_DELAYINT_OFFSET))(a1);
		}

		static ::System::Int64 ProtectFloorToOne(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PROTECTFLOORTOONE_OFFSET))(a1);
		}

		static ::System::Int64 ProtectFloorToOne_1(::System::Decimal a1)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PROTECTFLOORTOONE_1_OFFSET))(a1);
		}

		static ::System::Int64 ProtectRoundToOne(::System::Decimal a1)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PROTECTROUNDTOONE_OFFSET))(a1);
		}

		static ::System::Int64 ClampDecimalToLong(::System::Decimal a1)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CLAMPDECIMALTOLONG_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint ApproximatelyRound(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_APPROXIMATELYROUND_OFFSET))(a1);
		}

		static ::System::Decimal ApproximatelyRound_1(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_APPROXIMATELYROUND_1_OFFSET))(a1);
		}

		static ::System::Int32 ProtectFloorToOne_2(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PROTECTFLOORTOONE_2_OFFSET))(a1);
		}

		static ::System::Int64 CurrentShowHPLong(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSHOWHPLONG_OFFSET))(a1);
		}

		static ::System::Int64 CurrentHpLong(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTHPLONG_OFFSET))(a1);
		}

		static ::System::Int64 CurrentHPAndShieldLong(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTHPANDSHIELDLONG_OFFSET))(a1);
		}

		static ::System::Int32 CurrentStanceInt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSTANCEINT_OFFSET))(a1);
		}

		static ::System::Int32 CurrentStanceShowInt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSTANCESHOWINT_OFFSET))(a1);
		}

		static ::System::Int32 MaxStanceInt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_MAXSTANCEINT_OFFSET))(a1);
		}

		static ::System::Int32 MaxStanceShowInt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_MAXSTANCESHOWINT_OFFSET))(a1);
		}

		static ::System::Single CurrentStancePercent(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSTANCEPERCENT_OFFSET))(a1);
		}

		static ::System::Single StancePercent(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_STANCEPERCENT_OFFSET))(a1, a2);
		}

		static ::System::Single PluralityStancePercent(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PLURALITYSTANCEPERCENT_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint MaxStance(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_MAXSTANCE_OFFSET))(a1);
		}

		static ::System::Single HPPercentBeforeChangeEvent(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_HPPERCENTBEFORECHANGEEVENT_OFFSET))(a1, a2);
		}

		static ::System::Single StancePercentBeforeChangeEvent(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_STANCEPERCENTBEFORECHANGEEVENT_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint TotalStanceAfterChangeEvent(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_TOTALSTANCEAFTERCHANGEEVENT_OFFSET))(a1, a2);
		}

		static ::System::Int32 CurrentSP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSP_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint CurrentSP_FP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSP_FP_OFFSET))(a1, a2);
		}

		static ::System::Int32 MaxSP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_MAXSP_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint MaxSP_FP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_MAXSP_FP_OFFSET))(a1, a2);
		}

		static ::System::Single CurrentSPPercent(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSPPERCENT_OFFSET))(a1, a2);
		}

		static ::System::Int32 CurrentSPPercent100Int(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSPPERCENT100INT_OFFSET))(a1, a2);
		}

		static ::System::Int32 CurrentBP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTBP_OFFSET))(a1);
		}

		static ::System::Int32 MaxBP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_MAXBP_OFFSET))(a1);
		}

		static ::System::Int32 SkillNeedBPByControlSkillType(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_SKILLNEEDBPBYCONTROLSKILLTYPE_OFFSET))(a1, a2);
		}

		static ::System::Int32 SkillNeedBP(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_SKILLNEEDBP_OFFSET))(a1, a2);
		}

		static ::System::Int32 SkillNeedSP(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_SKILLNEEDSP_OFFSET))(a1, a2);
		}

		static ::System::Int32 SkillBPPreChange(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_SKILLBPPRECHANGE_OFFSET))(a1);
		}

		static ::System::Single CurrentShieldAndHPPercent(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDANDHPPERCENT_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint CurrentShieldAndHP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDANDHP_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint CurrentHP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTHP_OFFSET))(a1);
		}

		static ::System::Int64 CurrentNegativeHP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTNEGATIVEHP_OFFSET))(a1);
		}

		static ::System::UInt32 CurrentHPSeg(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTHPSEG_OFFSET))(a1, a2);
		}

		static ::System::UInt32 DeltaHPSeg(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_DELTAHPSEG_OFFSET))(a1, a2, a3);
		}

		static ::System::Single DoPropertyAdsorption(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_DOPROPERTYADSORPTION_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint CurrentShield(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELD_OFFSET))(a1);
		}

		static ::System::Single CurrentShieldPercent(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDPERCENT_OFFSET))(a1);
		}

		static ::System::Single CurrentShieldPercentByMaxHP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDPERCENTBYMAXHP_OFFSET))(a1);
		}

		static ::System::Boolean ShieldAndHPOverMaxHP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_SHIELDANDHPOVERMAXHP_OFFSET))(a1);
		}

		static ::System::Int32 CharacterLevelInt(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CHARACTERLEVELINT_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint GetUltraSkillSPNeed(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_GETULTRASKILLSPNEED_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint GetDefaultUltraSkillSPNeed(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_GETDEFAULTULTRASKILLSPNEED_OFFSET))(a1);
		}

		static ::RPG::Client::PropertyUIData* GetPropertyUIData(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::AbilityProperty a2)
		{
			return ((::RPG::Client::PropertyUIData*(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_GETPROPERTYUIDATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PropertyUIData* GetPropertyUIData_1(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::AvatarPropertyType a2)
		{
			return ((::RPG::Client::PropertyUIData*(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_GETPROPERTYUIDATA_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PropertyNumberUIData* GetPropertyNumberUIData(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::RPG::Client::PropertyNumberUIData*(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_GETPROPERTYNUMBERUIDATA_OFFSET))(a1);
		}

	};
}
