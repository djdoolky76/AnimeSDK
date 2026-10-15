#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvGroupFetchTargetByString; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A1460)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3A1520)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3A14F0)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A1470)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A13C0)

namespace RPG::GameCore
{
	class AdvGroupFetchTargetByString : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::DynamicString* Target; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGroupFetchTargetByString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGroupFetchTargetByString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGroupFetchTargetByString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGroupFetchTargetByString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
