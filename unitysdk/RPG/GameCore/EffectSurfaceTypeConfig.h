#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectSurfaceOverride; }
namespace RPG::GameCore { class EffectSurfaceTypeConfig; }

#define RPG_GAMECORE_EFFECTSURFACETYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D603BB0)
#define RPG_GAMECORE_EFFECTSURFACETYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D603AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectSurfaceTypeConfig_TypeDefinitionIndex = 16486;

	class EffectSurfaceTypeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::EffectSurfaceOverride*>* EffectOverrideList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTSURFACETYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EffectSurfaceTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EffectSurfaceTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTSURFACETYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
