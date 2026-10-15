#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRoleExtInfoType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByGridFightCompareRoleExtInfo; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F4760)
#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F4A00)
#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F49D0)
#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F4770)
#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F4730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightCompareRoleExtInfo_TypeDefinitionIndex = 22522;

	class ByGridFightCompareRoleExtInfo : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GridFightRoleExtInfoType ExtInfoType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetEntity; // 0x28
		::RPG::GameCore::DynamicFloat* TargetCharacterID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
