#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropRuntimeReplaceArtPrefab; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPRUNTIMEREPLACEARTPREFAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D925CE0)
#define RPG_GAMECORE_PROPRUNTIMEREPLACEARTPREFAB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D925D10)
#define RPG_GAMECORE_PROPRUNTIMEREPLACEARTPREFAB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D925C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropRuntimeReplaceArtPrefab_TypeDefinitionIndex = 22168;

	class PropRuntimeReplaceArtPrefab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* Index; // 0x20
		::System::Boolean IsSyncLoad; // 0x28
		::System::Boolean ResetAnimator; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRUNTIMEREPLACEARTPREFAB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropRuntimeReplaceArtPrefab* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropRuntimeReplaceArtPrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRUNTIMEREPLACEARTPREFAB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropRuntimeReplaceArtPrefab* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropRuntimeReplaceArtPrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRUNTIMEREPLACEARTPREFAB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
