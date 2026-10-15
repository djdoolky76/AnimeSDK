#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TransformComponentConfig; }

#define RPG_GAMECORE_TRANSFORMCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC0AEB0)
#define RPG_GAMECORE_TRANSFORMCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC0AEC0)
#define RPG_GAMECORE_TRANSFORMCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC0AE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TransformComponentConfig_TypeDefinitionIndex = 16560;

	class TransformComponentConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TransformComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TransformComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TransformComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TransformComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
