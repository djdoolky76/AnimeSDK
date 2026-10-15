#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
#include "unitysdk/RPG/GameCore/ValueGroupComputeType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VE_Group; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_GROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC80E20)
#define RPG_GAMECORE_VE_GROUP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC81040)
#define RPG_GAMECORE_VE_GROUP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC81010)
#define RPG_GAMECORE_VE_GROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC80E30)
#define RPG_GAMECORE_VE_GROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC80DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Group_TypeDefinitionIndex = 24042;

	class VE_Group : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueGroupComputeType ComputeType; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* Values; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_GROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_Group* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_Group*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_GROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_Group* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_Group*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_GROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Group* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Group*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_GROUP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Group* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Group*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_GROUP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
