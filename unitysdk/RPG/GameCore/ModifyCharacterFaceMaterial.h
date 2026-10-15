#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifyCharacterFaceMaterial; }

#define RPG_GAMECORE_MODIFYCHARACTERFACEMATERIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D891080)
#define RPG_GAMECORE_MODIFYCHARACTERFACEMATERIAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D891090)
#define RPG_GAMECORE_MODIFYCHARACTERFACEMATERIAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D891040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyCharacterFaceMaterial_TypeDefinitionIndex = 22421;

	class ModifyCharacterFaceMaterial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::System::Single ExpressionCheekIntensity; // 0x1C
		::System::Single ExpressionShyIntensity; // 0x20
		::System::Single ExpressionShadowIntensity; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCHARACTERFACEMATERIAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyCharacterFaceMaterial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyCharacterFaceMaterial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCHARACTERFACEMATERIAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyCharacterFaceMaterial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyCharacterFaceMaterial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCHARACTERFACEMATERIAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
