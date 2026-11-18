#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::LevelPerform { class LevelPerformConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define KCAGPHDKFHC___C_DDIDMBHNOAG_OFFSET UNITYSDK_OFFSET(0x15B816E0)
#define KCAGPHDKFHC___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x15B816A0)
#define KCAGPHDKFHC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B81650)
#define KCAGPHDKFHC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B81690)

inline static constexpr unsigned int KCAGPHDKFHC___c_TypeDefinitionIndex = 40213;

class KCAGPHDKFHC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KCAGPHDKFHC___c_TypeDefinitionIndex)->GetStaticField(0x3B760);
	}
	static ::System::Func_1<::MoleMole::LevelPerform::LevelPerformConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::LevelPerform::LevelPerformConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KCAGPHDKFHC___c_TypeDefinitionIndex)->GetStaticField(0x3B768);
	}
	static ::System::Func_2<::MoleMole::LevelPerform::LevelPerformConfig*, ::MoleMole::LevelPerform::LevelPerformConfig*>** StaticGet___9__2_2()
	{
		return (::System::Func_2<::MoleMole::LevelPerform::LevelPerformConfig*, ::MoleMole::LevelPerform::LevelPerformConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KCAGPHDKFHC___c_TypeDefinitionIndex)->GetStaticField(0x3B770);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCAGPHDKFHC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAGPHDKFHC___C__CTOR_OFFSET))(this);
	}

	::MoleMole::LevelPerform::LevelPerformConfig* LPCHADDECLC()
	{
		return ((::MoleMole::LevelPerform::LevelPerformConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAGPHDKFHC___C_LPCHADDECLC_OFFSET))(this);
	}

	::MoleMole::LevelPerform::LevelPerformConfig* DDIDMBHNOAG(::MoleMole::LevelPerform::LevelPerformConfig* DFMKILICPFB)
	{
		return ((::MoleMole::LevelPerform::LevelPerformConfig*(*)(::PVOID, ::MoleMole::LevelPerform::LevelPerformConfig*))((::PBYTE)hIl2Cpp + KCAGPHDKFHC___C_DDIDMBHNOAG_OFFSET))(this, DFMKILICPFB);
	}
};
