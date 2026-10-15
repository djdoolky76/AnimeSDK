#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVariable.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameLevelVariableString; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLESTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E4AC0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLESTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E4AD0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLESTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E4F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVariableString_TypeDefinitionIndex = 18903;

	class LittleGameLevelVariableString : public ::RPG::GameCore::LittleGameLevelVariable
	{
	public:
		::System::String* DefaultValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLESTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVariableString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLESTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVariableString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLESTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
