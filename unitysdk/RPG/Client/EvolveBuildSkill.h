#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildProtductType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class EvolveBuildShopRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB581B0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0x1DB5E7C0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1DB5E810)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0x1DB52CF0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1DB5E8F0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1DB5E770)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DB54710)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1DB5EDF0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISLEVELRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x1DB5ED90)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x1DB5ED50)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVELDOWNPRICE_OFFSET UNITYSDK_OFFSET(0x1DB5E690)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVELUPPRICE_OFFSET UNITYSDK_OFFSET(0x1DB5E570)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1DB5ED30)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1DB5E640)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x1DB5E510)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DB5E880)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_PRICES_OFFSET UNITYSDK_OFFSET(0x1DB5E560)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1DB5ED70)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x1DB53FF0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1DB5E720)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYTITLE_OFFSET UNITYSDK_OFFSET(0x1DB5E960)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYVALUEFORMAT_OFFSET UNITYSDK_OFFSET(0x1DB5E9D0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYVALUEPARAMS_OFFSET UNITYSDK_OFFSET(0x1DB5EA40)
#define RPG_CLIENT_EVOLVEBUILDSKILL_SET_ISRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x1DB5ED60)
#define RPG_CLIENT_EVOLVEBUILDSKILL_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1DB5ED40)
#define RPG_CLIENT_EVOLVEBUILDSKILL_SET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1DB5ED80)
#define RPG_CLIENT_EVOLVEBUILDSKILL__ISREMOVESKILL_OFFSET UNITYSDK_OFFSET(0x1DB5F330)
#define RPG_CLIENT_EVOLVEBUILDSKILL__ISRESETSKILL_OFFSET UNITYSDK_OFFSET(0x1DB5F200)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildSkill_TypeDefinitionIndex = 65248;

	class EvolveBuildSkill : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _Prices_k__BackingField; // 0x10
		::RPG::GameCore::EvolveBuildShopRow* _Row; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x20
		::System::Boolean _IsRecommended_k__BackingField; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 _RecommendLevel_k__BackingField; // 0x28
		::System::Void _ctor(::RPG::GameCore::EvolveBuildShopRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildShopRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Prices()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_PRICES_OFFSET))(this);
		}

		::System::UInt32 get_LevelUpPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVELUPPRICE_OFFSET))(this);
		}

		::System::UInt32 get_LevelDownPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVELDOWNPRICE_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_MAXLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildProtductType get_SkillType()
		{
			return ((::RPG::GameCore::EvolveBuildProtductType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SKILLTYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_BgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_BGPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Category()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_DESCPARAMS_OFFSET))(this);
		}

		::RPG::Client::TextID get_SummaryTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_SummaryValueFormat()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYVALUEFORMAT_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SEASON_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_SummaryValueParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYVALUEPARAMS_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRecommended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISRECOMMENDED_OFFSET))(this);
		}

		::System::Void set_IsRecommended(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_SET_ISRECOMMENDED_OFFSET))(this, a1);
		}

		::System::UInt32 get_RecommendLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_RECOMMENDLEVEL_OFFSET))(this);
		}

		::System::Void set_RecommendLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_SET_RECOMMENDLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLevelRecommended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISLEVELRECOMMENDED_OFFSET))(this);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean _IsResetSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL__ISRESETSKILL_OFFSET))(this);
		}

		::System::Boolean _IsRemoveSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL__ISREMOVESKILL_OFFSET))(this);
		}

	};
}
