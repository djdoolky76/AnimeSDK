#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ReactionTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RA_SetAIVariableFloat; }
namespace System { class String; }

#define RPG_GAMECORE_RA_SETAIVARIABLEFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9653F0)
#define RPG_GAMECORE_RA_SETAIVARIABLEFLOAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D965400)
#define RPG_GAMECORE_RA_SETAIVARIABLEFLOAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9653C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_SetAIVariableFloat_TypeDefinitionIndex = 20043;

	class RA_SetAIVariableFloat : public ::RPG::GameCore::ReactionTaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Single Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETAIVARIABLEFLOAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_SetAIVariableFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_SetAIVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETAIVARIABLEFLOAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_SetAIVariableFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_SetAIVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETAIVARIABLEFLOAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
