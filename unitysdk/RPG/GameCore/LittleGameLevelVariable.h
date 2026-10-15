#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameLevelVariable; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B72D0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7B71B0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B4640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVariable_TypeDefinitionIndex = 18896;

	class LittleGameLevelVariable : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean IsPrivate; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVariable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVariable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
