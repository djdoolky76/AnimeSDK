#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueBuffNumWithType; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F86D8B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F86D8C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F86D880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBuffNumWithType_TypeDefinitionIndex = 22166;

	class SetDynamicValueByRogueBuffNumWithType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
