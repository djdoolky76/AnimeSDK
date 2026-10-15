#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetProbePuzzleResetNumber; }

#define RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA91970)
#define RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA91980)
#define RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA91940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetProbePuzzleResetNumber_TypeDefinitionIndex = 22017;

	class SetProbePuzzleResetNumber : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Number; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* NumberDS; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetProbePuzzleResetNumber* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetProbePuzzleResetNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetProbePuzzleResetNumber* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetProbePuzzleResetNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROBEPUZZLERESETNUMBER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
