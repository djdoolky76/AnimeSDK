#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetPetPalEffectIdConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPETPALEFFECTIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BF760)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPETPALEFFECTIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BF770)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPETPALEFFECTIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BF720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetPetPalEffectIdConfig_TypeDefinitionIndex = 19851;

	class GridFightParamGetPetPalEffectIdConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPETPALEFFECTIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetPetPalEffectIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetPetPalEffectIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPETPALEFFECTIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetPetPalEffectIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetPetPalEffectIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPETPALEFFECTIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
