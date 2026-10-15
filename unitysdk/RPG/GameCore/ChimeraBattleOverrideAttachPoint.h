#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleOverrideAttachPoint; }
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLEOVERRIDEATTACHPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D597E00)
#define RPG_GAMECORE_CHIMERABATTLEOVERRIDEATTACHPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D597E10)
#define RPG_GAMECORE_CHIMERABATTLEOVERRIDEATTACHPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5999A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleOverrideAttachPoint_TypeDefinitionIndex = 15880;

	class ChimeraBattleOverrideAttachPoint : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x18
		::System::String* Origin; // 0x20
		::System::String* New; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEOVERRIDEATTACHPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleOverrideAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleOverrideAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEOVERRIDEATTACHPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleOverrideAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleOverrideAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEOVERRIDEATTACHPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
