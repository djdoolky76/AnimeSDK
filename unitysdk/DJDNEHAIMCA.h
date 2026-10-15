#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHKCCGMHEF_AJACCOJBPBD.h"
#include "unitysdk/System/Object.h"
class AAINKPKFDFF;
class DJDNEHAIMCA;
class DMHADFNOIGP;
class EBNEEFFBFPJ;
class NHHKCCGMHEF;
namespace RPG::Client { class ChenLingFesStageData; }

#define DJDNEHAIMCA_CTOR_OFFSET UNITYSDK_OFFSET(0xF22E680)
#define DJDNEHAIMCA_FPDCEGDNOON_OFFSET UNITYSDK_OFFSET(0xF22E5B0)
#define DJDNEHAIMCA_GET_BUSINESSDAYLEVELDATA_OFFSET UNITYSDK_OFFSET(0xF22E870)
#define DJDNEHAIMCA_GET_BUSINESSDAYPHASEDATA_OFFSET UNITYSDK_OFFSET(0xF22E890)
#define DJDNEHAIMCA_GET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0xF22E830)
#define DJDNEHAIMCA_GET_ISNEWHIGHEST_OFFSET UNITYSDK_OFFSET(0xF22E810)
#define DJDNEHAIMCA_GET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0xF22E7D0)
#define DJDNEHAIMCA_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xF22E790)
#define DJDNEHAIMCA_GET_SETTLEDATACASE_OFFSET UNITYSDK_OFFSET(0xF22E850)
#define DJDNEHAIMCA_GET_STAGEDATAREF_OFFSET UNITYSDK_OFFSET(0xF22E7B0)
#define DJDNEHAIMCA_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xF22E7F0)
#define DJDNEHAIMCA_NACHHHDFHIA_OFFSET UNITYSDK_OFFSET(0xF22E690)
#define DJDNEHAIMCA_SET_BUSINESSDAYLEVELDATA_OFFSET UNITYSDK_OFFSET(0xF22E880)
#define DJDNEHAIMCA_SET_BUSINESSDAYPHASEDATA_OFFSET UNITYSDK_OFFSET(0xF22E8A0)
#define DJDNEHAIMCA_SET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0xF22E840)
#define DJDNEHAIMCA_SET_ISNEWHIGHEST_OFFSET UNITYSDK_OFFSET(0xF22E820)
#define DJDNEHAIMCA_SET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0xF22E7E0)
#define DJDNEHAIMCA_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0xF22E7A0)
#define DJDNEHAIMCA_SET_SETTLEDATACASE_OFFSET UNITYSDK_OFFSET(0xF22E860)
#define DJDNEHAIMCA_SET_STAGEDATAREF_OFFSET UNITYSDK_OFFSET(0xF22E7C0)
#define DJDNEHAIMCA_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xF22E800)

	class DJDNEHAIMCA : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingFesStageData* _StageDataRef_k__BackingField; // 0x10
		::EBNEEFFBFPJ* _LevelData_k__BackingField; // 0x18
		::EBNEEFFBFPJ* _BusinessDayLevelData_k__BackingField; // 0x20
		::AAINKPKFDFF* _BusinessDayPhaseData_k__BackingField; // 0x28
		::System::Boolean _IsNewHighest_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::NHHKCCGMHEF_AJACCOJBPBD _SettleDataCase_k__BackingField; // 0x34
		::System::UInt32 _TotalScore_k__BackingField; // 0x38
		::System::UInt32 _BusinessDay_k__BackingField; // 0x3C
		::System::UInt32 _LevelID_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_CTOR_OFFSET))(this);
		}

		static ::DJDNEHAIMCA* FPDCEGDNOON(::System::UInt32 a1, ::DMHADFNOIGP* a2, ::RPG::Client::ChenLingFesStageData* a3)
		{
			return ((::DJDNEHAIMCA*(*)(::System::UInt32, ::DMHADFNOIGP*, ::RPG::Client::ChenLingFesStageData*))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_FPDCEGDNOON_OFFSET))(a1, a2, a3);
		}

		::System::Void NACHHHDFHIA(::NHHKCCGMHEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHHKCCGMHEF*))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_NACHHHDFHIA_OFFSET))(this, a1);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_SET_LEVELID_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFesStageData* get_StageDataRef()
		{
			return ((::RPG::Client::ChenLingFesStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_GET_STAGEDATAREF_OFFSET))(this);
		}

		::System::Void set_StageDataRef(::RPG::Client::ChenLingFesStageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFesStageData*))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_SET_STAGEDATAREF_OFFSET))(this, a1);
		}

		::EBNEEFFBFPJ* get_LevelData()
		{
			return ((::EBNEEFFBFPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_GET_LEVELDATA_OFFSET))(this);
		}

		::System::Void set_LevelData(::EBNEEFFBFPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBNEEFFBFPJ*))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_SET_LEVELDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Void set_TotalScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_SET_TOTALSCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNewHighest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_GET_ISNEWHIGHEST_OFFSET))(this);
		}

		::System::Void set_IsNewHighest(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_SET_ISNEWHIGHEST_OFFSET))(this, a1);
		}

		::System::UInt32 get_BusinessDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_GET_BUSINESSDAY_OFFSET))(this);
		}

		::System::Void set_BusinessDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_SET_BUSINESSDAY_OFFSET))(this, a1);
		}

		::NHHKCCGMHEF_AJACCOJBPBD get_SettleDataCase()
		{
			return ((::NHHKCCGMHEF_AJACCOJBPBD(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_GET_SETTLEDATACASE_OFFSET))(this);
		}

		::System::Void set_SettleDataCase(::NHHKCCGMHEF_AJACCOJBPBD a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHHKCCGMHEF_AJACCOJBPBD))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_SET_SETTLEDATACASE_OFFSET))(this, a1);
		}

		::EBNEEFFBFPJ* get_BusinessDayLevelData()
		{
			return ((::EBNEEFFBFPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_GET_BUSINESSDAYLEVELDATA_OFFSET))(this);
		}

		::System::Void set_BusinessDayLevelData(::EBNEEFFBFPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBNEEFFBFPJ*))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_SET_BUSINESSDAYLEVELDATA_OFFSET))(this, a1);
		}

		::AAINKPKFDFF* get_BusinessDayPhaseData()
		{
			return ((::AAINKPKFDFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_GET_BUSINESSDAYPHASEDATA_OFFSET))(this);
		}

		::System::Void set_BusinessDayPhaseData(::AAINKPKFDFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAINKPKFDFF*))((::PBYTE)hIl2Cpp + DJDNEHAIMCA_SET_BUSINESSDAYPHASEDATA_OFFSET))(this, a1);
		}

	};
