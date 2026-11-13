#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightHideTraitEffect; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTHIDETRAITEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x206098A0)
#define RPG_GAMECORE_GRIDFIGHTHIDETRAITEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206098B0)
#define RPG_GAMECORE_GRIDFIGHTHIDETRAITEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20609870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightHideTraitEffect_TypeDefinitionIndex = 23676;

	class GridFightHideTraitEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TraitSearchKey; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTHIDETRAITEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightHideTraitEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightHideTraitEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTHIDETRAITEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightHideTraitEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightHideTraitEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTHIDETRAITEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
