#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueFormulaData; }

#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF17B0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS8_0__GETROGUEFORMULADATA_B__0_OFFSET UNITYSDK_OFFSET(0x1CBF4EA0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS8_0__GETROGUEFORMULADATA_B__1_OFFSET UNITYSDK_OFFSET(0x1CBF4EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaInfo___c__DisplayClass8_0_TypeDefinitionIndex = 69166;

	class RogueFormulaInfo___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 formulaID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRogueFormulaData_b__0(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS8_0__GETROGUEFORMULADATA_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetRogueFormulaData_b__1(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS8_0__GETROGUEFORMULADATA_B__1_OFFSET))(this, a1);
		}

	};
}
