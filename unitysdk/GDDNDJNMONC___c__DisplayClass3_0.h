#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDDNDJNMONC;
class INMMPMDELKE;
namespace RPG::GameCore { class FiveDimBaseEventAction; }

#define GDDNDJNMONC___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15997320)
#define GDDNDJNMONC___C__DISPLAYCLASS3_0___SOLVESUBCLASSACTION_B__1_OFFSET UNITYSDK_OFFSET(0x15999DD0)

inline static constexpr unsigned int GDDNDJNMONC___c__DisplayClass3_0_TypeDefinitionIndex = 76704;

	class GDDNDJNMONC___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* completeActions; // 0x10
		::INMMPMDELKE* capturedEntity; // 0x18
		::GDDNDJNMONC* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDNDJNMONC___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void __SolveSubClassAction_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDNDJNMONC___C__DISPLAYCLASS3_0___SOLVESUBCLASSACTION_B__1_OFFSET))(this);
		}

	};
