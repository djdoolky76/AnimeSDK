#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightRankSkillModifyConfigRow; }

#define RPG_CLIENT_GRIDFIGHTRANKSKILLMODIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3F7D0)
#define RPG_CLIENT_GRIDFIGHTRANKSKILLMODIFYCONFIG_GET_MODIFYOPS_OFFSET UNITYSDK_OFFSET(0x1DF3F890)
#define RPG_CLIENT_GRIDFIGHTRANKSKILLMODIFYCONFIG_GET_MODIFYSKILLINDEXS_OFFSET UNITYSDK_OFFSET(0x1DF3F880)
#define RPG_CLIENT_GRIDFIGHTRANKSKILLMODIFYCONFIG_GET_MODIFYVALUES_OFFSET UNITYSDK_OFFSET(0x1DF3F8A0)
#define RPG_CLIENT_GRIDFIGHTRANKSKILLMODIFYCONFIG_GET_RANKID_OFFSET UNITYSDK_OFFSET(0x1DF3F850)
#define RPG_CLIENT_GRIDFIGHTRANKSKILLMODIFYCONFIG_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1DF3F860)
#define RPG_CLIENT_GRIDFIGHTRANKSKILLMODIFYCONFIG_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1DF3F870)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRankSkillModifyConfig_TypeDefinitionIndex = 66809;

	class GridFightRankSkillModifyConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _ModifySkillIndexs_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ModifyValues_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>* _ModifyOps_k__BackingField; // 0x20
		::System::UInt32 _Rank_k__BackingField; // 0x28
		::System::UInt32 _SkillID_k__BackingField; // 0x2C
		::System::UInt32 _RankID_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::GameCore::GridFightRankSkillModifyConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRANKSKILLMODIFYCONFIG_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_RankID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRANKSKILLMODIFYCONFIG_GET_RANKID_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRANKSKILLMODIFYCONFIG_GET_RANK_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRANKSKILLMODIFYCONFIG_GET_SKILLID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ModifySkillIndexs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRANKSKILLMODIFYCONFIG_GET_MODIFYSKILLINDEXS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>* get_ModifyOps()
		{
			return ((::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRANKSKILLMODIFYCONFIG_GET_MODIFYOPS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ModifyValues()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRANKSKILLMODIFYCONFIG_GET_MODIFYVALUES_OFFSET))(this);
		}

	};
}
