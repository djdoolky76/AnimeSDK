#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideEffectByCharacterType; }

#define RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73A550)
#define RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73A560)
#define RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73A520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideEffectByCharacterType_TypeDefinitionIndex = 22458;

	class HideEffectByCharacterType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityType CharacterType; // 0x18
		::System::Boolean IsHide; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideEffectByCharacterType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideEffectByCharacterType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideEffectByCharacterType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideEffectByCharacterType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
