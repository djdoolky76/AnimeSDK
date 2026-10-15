#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvRemoveEffectList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVREMOVEEFFECTLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AC8E0)
#define RPG_GAMECORE_ADVREMOVEEFFECTLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AC8F0)
#define RPG_GAMECORE_ADVREMOVEEFFECTLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AC8B0)

namespace RPG::GameCore
{
	class AdvRemoveEffectList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* ConfigNameList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVEEFFECTLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvRemoveEffectList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvRemoveEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVEEFFECTLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvRemoveEffectList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvRemoveEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVEEFFECTLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
