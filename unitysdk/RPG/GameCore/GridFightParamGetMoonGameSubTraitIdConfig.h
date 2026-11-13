#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetMoonGameSubTraitIdConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETMOONGAMESUBTRAITIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BF520)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETMOONGAMESUBTRAITIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BF530)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETMOONGAMESUBTRAITIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BF4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetMoonGameSubTraitIdConfig_TypeDefinitionIndex = 19880;

	class GridFightParamGetMoonGameSubTraitIdConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMOONGAMESUBTRAITIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetMoonGameSubTraitIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetMoonGameSubTraitIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMOONGAMESUBTRAITIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetMoonGameSubTraitIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetMoonGameSubTraitIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMOONGAMESUBTRAITIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
