#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByFuncUnlockCheck; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F3530)
#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F36E0)
#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F36B0)
#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F3540)
#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F3500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByFuncUnlockCheck_TypeDefinitionIndex = 20792;

	class ByFuncUnlockCheck : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 UnlockID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByFuncUnlockCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByFuncUnlockCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByFuncUnlockCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByFuncUnlockCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFuncUnlockCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFuncUnlockCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFuncUnlockCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFuncUnlockCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
