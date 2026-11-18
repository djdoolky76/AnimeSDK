#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CASETEST_BATTLEINFOTESTER__CTOR_OFFSET UNITYSDK_OFFSET(0x131C2680)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int BattleInfoTester_TypeDefinitionIndex = 73513;

	class BattleInfoTester : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_BATTLEINFOTESTER__CTOR_OFFSET))(this);
		}
	};
}
