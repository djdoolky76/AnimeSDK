#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameEntityVar; }
namespace RPG::GameCore { class LittleGameEntityVarConfig; }

#define RPG_GAMECORE_LITTLEGAMEENTITYVARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E2500)
#define RPG_GAMECORE_LITTLEGAMEENTITYVARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E2510)
#define RPG_GAMECORE_LITTLEGAMEENTITYVARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E23A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityVarConfig_TypeDefinitionIndex = 18871;

	class LittleGameEntityVarConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsEnableEntityVar; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::LittleGameEntityVar*>* PublicEntityVars; // 0x18
		::Il2CppArray<::RPG::GameCore::LittleGameEntityVar*>* PrivateEntityVars; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYVARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameEntityVarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameEntityVarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYVARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameEntityVarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameEntityVarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYVARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
