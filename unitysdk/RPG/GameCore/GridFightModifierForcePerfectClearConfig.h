#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierForcePerfectClearConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEPERFECTCLEARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E941FB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEPERFECTCLEARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E941FC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEPERFECTCLEARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E941F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForcePerfectClearConfig_TypeDefinitionIndex = 19706;

	class GridFightModifierForcePerfectClearConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEPERFECTCLEARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForcePerfectClearConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForcePerfectClearConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEPERFECTCLEARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForcePerfectClearConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForcePerfectClearConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEPERFECTCLEARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
