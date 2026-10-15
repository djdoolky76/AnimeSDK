#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByAnyNpcMonsterInRange; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYANYNPCMONSTERINRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4579F0)
#define RPG_GAMECORE_BYANYNPCMONSTERINRANGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D457C50)
#define RPG_GAMECORE_BYANYNPCMONSTERINRANGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D457C20)
#define RPG_GAMECORE_BYANYNPCMONSTERINRANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D457A00)
#define RPG_GAMECORE_BYANYNPCMONSTERINRANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4579C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAnyNpcMonsterInRange_TypeDefinitionIndex = 20583;

	class ByAnyNpcMonsterInRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean ConsiderObstacle; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single Range; // 0x24
		::System::Single AngleLimit; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANYNPCMONSTERINRANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAnyNpcMonsterInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANYNPCMONSTERINRANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAnyNpcMonsterInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANYNPCMONSTERINRANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnyNpcMonsterInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANYNPCMONSTERINRANGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnyNpcMonsterInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANYNPCMONSTERINRANGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
