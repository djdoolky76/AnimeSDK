#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSETUPSCALEPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BCD80)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardSetupScaleParams_TypeDefinitionIndex = 83582;

	class CaseBoardSetupScaleParams : public ::System::Object
	{
	public:
		::System::Single Duration; // 0x10
		::System::Single Scale; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSETUPSCALEPARAMS_CTOR_OFFSET))(this);
		}

	};
}
