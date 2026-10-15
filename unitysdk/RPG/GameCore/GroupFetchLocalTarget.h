#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupLocalTargetType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupFetchLocalTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71D4B0)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D71D260)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D71D230)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D71D120)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71D0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupFetchLocalTarget_TypeDefinitionIndex = 21157;

	class GroupFetchLocalTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::GroupLocalTargetType TargetType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* Targets; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupFetchLocalTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupFetchLocalTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupFetchLocalTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupFetchLocalTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
