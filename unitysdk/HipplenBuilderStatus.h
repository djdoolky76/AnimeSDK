#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderStatus_StatType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class HipplenBuilderBuffAsset_BuffConfig;
class HipplenBuilderStatusAsset;
class HipplenBuilderStatus_LHKGHMBBAMD;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERSTATUS_ADDBUFF_OFFSET UNITYSDK_OFFSET(0x15DF0690)
#define HIPPLENBUILDERSTATUS_BUFFTIMEPASS_OFFSET UNITYSDK_OFFSET(0x15DE6FF0)
#define HIPPLENBUILDERSTATUS_CTOR_OFFSET UNITYSDK_OFFSET(0x15DF15C0)
#define HIPPLENBUILDERSTATUS_GETBUFFEDSTATVALUE_OFFSET UNITYSDK_OFFSET(0x15DF08E0)
#define HIPPLENBUILDERSTATUS_GETBUFFS_OFFSET UNITYSDK_OFFSET(0x15DE9E00)
#define HIPPLENBUILDERSTATUS_GETCURRENTSTATS_OFFSET UNITYSDK_OFFSET(0x15DE4780)
#define HIPPLENBUILDERSTATUS_GETCURRENTSTAT_OFFSET UNITYSDK_OFFSET(0x15DEC490)
#define HIPPLENBUILDERSTATUS_GETCURRENTTESTSTATS3IN1_OFFSET UNITYSDK_OFFSET(0x15DF11F0)
#define HIPPLENBUILDERSTATUS_GETGRADE_OFFSET UNITYSDK_OFFSET(0x15DF1270)
#define HIPPLENBUILDERSTATUS_GETGROWTHTODAY_OFFSET UNITYSDK_OFFSET(0x15DE7650)
#define HIPPLENBUILDERSTATUS_GLGOGHAGBFB_OFFSET UNITYSDK_OFFSET(0x15DF0450)
#define HIPPLENBUILDERSTATUS_INCREASESTAT_OFFSET UNITYSDK_OFFSET(0x15DEAD90)
#define HIPPLENBUILDERSTATUS_INITSTATS_OFFSET UNITYSDK_OFFSET(0x15DE3800)
#define HIPPLENBUILDERSTATUS_PCAMBLIOKFL_OFFSET UNITYSDK_OFFSET(0x15DF0F80)
#define HIPPLENBUILDERSTATUS_RECORDSTATYESTERDAY_OFFSET UNITYSDK_OFFSET(0x15DE5B10)

	class HipplenBuilderStatus : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* IMAOAIEFGPJ; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>* KPJCNFMODGD; // 0x20
		::UnityEngine::Color DefaultColor; // 0x28
		::UnityEngine::Color WarningColor; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* DDNNAOFGIML; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_CTOR_OFFSET))(this);
		}

		::System::Void BuffTimePass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_BUFFTIMEPASS_OFFSET))(this);
		}

		::System::Void AddBuff(::HipplenBuilderBuffAsset_BuffConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HipplenBuilderBuffAsset_BuffConfig*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_ADDBUFF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetBuffs()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GETBUFFS_OFFSET))(this);
		}

		::System::Int32 GetBuffedStatValue(::HipplenBuilderStatus_StatType a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HipplenBuilderStatus_StatType, ::System::Int32))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GETBUFFEDSTATVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void GLGOGHAGBFB(::HipplenBuilderStatus_LHKGHMBBAMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HipplenBuilderStatus_LHKGHMBBAMD*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GLGOGHAGBFB_OFFSET))(this, a1);
		}

		::System::Void InitStats(::HipplenBuilderStatusAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HipplenBuilderStatusAsset*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_INITSTATS_OFFSET))(this, a1);
		}

		::System::Void IncreaseStat(::HipplenBuilderStatus_StatType a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HipplenBuilderStatus_StatType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_INCREASESTAT_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetCurrentStats()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GETCURRENTSTATS_OFFSET))(this);
		}

		::System::Void RecordStatYesterday()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_RECORDSTATYESTERDAY_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>* GetGrowthToday()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GETGROWTHTODAY_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>* PCAMBLIOKFL()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_PCAMBLIOKFL_OFFSET))(this);
		}

		::System::Int32 GetCurrentStat(::HipplenBuilderStatus_StatType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::HipplenBuilderStatus_StatType))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GETCURRENTSTAT_OFFSET))(this, a1);
		}

		::System::Int32 GetCurrentTestStats3in1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GETCURRENTTESTSTATS3IN1_OFFSET))(this);
		}

		::System::String* GetGrade(::HipplenBuilderStatus_StatType a1)
		{
			return ((::System::String*(*)(::PVOID, ::HipplenBuilderStatus_StatType))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GETGRADE_OFFSET))(this, a1);
		}

	};
