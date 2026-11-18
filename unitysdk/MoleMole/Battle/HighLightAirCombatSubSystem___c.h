#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
template <typename T> class GJBGAGHHABE_1;

#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x163DAAD0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x163DAB10)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__INIT_B__133_0_OFFSET UNITYSDK_OFFSET(0x163DAB20)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__INIT_B__133_1_OFFSET UNITYSDK_OFFSET(0x163DABD0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int HighLightAirCombatSubSystem___c_TypeDefinitionIndex = 83432;

	class HighLightAirCombatSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HighLightAirCombatSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x3E8A0);
		}
		static ::System::Func_3<::System::Single, ::GJBGAGHHABE_1<::System::Single>*, ::System::Single>** StaticGet___9__133_1()
		{
			return (::System::Func_3<::System::Single, ::GJBGAGHHABE_1<::System::Single>*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HighLightAirCombatSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x3E8A8);
		}
		static ::System::Func_3<::System::Single, ::GJBGAGHHABE_1<::System::Single>*, ::System::Single>** StaticGet___9__133_0()
		{
			return (::System::Func_3<::System::Single, ::GJBGAGHHABE_1<::System::Single>*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HighLightAirCombatSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x3E8B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Single _Init_b__133_0(::System::Single deltaTime, ::GJBGAGHHABE_1<::System::Single>* item)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::GJBGAGHHABE_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__INIT_B__133_0_OFFSET))(this, deltaTime, item);
		}

		::System::Single _Init_b__133_1(::System::Single deltaTime, ::GJBGAGHHABE_1<::System::Single>* item)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::GJBGAGHHABE_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__INIT_B__133_1_OFFSET))(this, deltaTime, item);
		}
	};
}
