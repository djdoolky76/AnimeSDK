#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetLocalPlayerLookAtTargets; }

#define RPG_GAMECORE_RESETLOCALPLAYERLOOKATTARGETS_CTOR_OFFSET UNITYSDK_OFFSET(0x20721EF0)
#define RPG_GAMECORE_RESETLOCALPLAYERLOOKATTARGETS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20721F00)
#define RPG_GAMECORE_RESETLOCALPLAYERLOOKATTARGETS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20721E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetLocalPlayerLookAtTargets_TypeDefinitionIndex = 22306;

	class ResetLocalPlayerLookAtTargets : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETLOCALPLAYERLOOKATTARGETS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetLocalPlayerLookAtTargets* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetLocalPlayerLookAtTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETLOCALPLAYERLOOKATTARGETS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetLocalPlayerLookAtTargets* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetLocalPlayerLookAtTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETLOCALPLAYERLOOKATTARGETS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
