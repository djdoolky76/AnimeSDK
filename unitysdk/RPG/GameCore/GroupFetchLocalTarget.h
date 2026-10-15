#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupLocalTargetType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupFetchLocalTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74AF40)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D74ACF0)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D74ACC0)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D74ABB0)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D74AB80)

namespace RPG::GameCore
{
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
