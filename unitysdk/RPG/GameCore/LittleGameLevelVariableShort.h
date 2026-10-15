#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupPropertySide.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVariable.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameLevelVariableShort; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLESHORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B6DA0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLESHORT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7B6DB0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLESHORT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B7380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVariableShort_TypeDefinitionIndex = 18897;

	class LittleGameLevelVariableShort : public ::RPG::GameCore::LittleGameLevelVariable
	{
	public:
		::System::Int16 DefaultValue; // 0x20
		::System::Byte _padding0[0x2];
		::RPG::GameCore::GroupPropertySide Side; // 0x24
		::System::Int16 MinValue; // 0x28
		::System::Int16 MaxValue; // 0x2A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLESHORT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVariableShort* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVariableShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLESHORT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVariableShort* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVariableShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLESHORT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
