#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPIDOFOHOEN;
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CCGDAJKMPCD___C_GGPLMMOHLOF_OFFSET UNITYSDK_OFFSET(0x14537620)
#define CCGDAJKMPCD___C_IEOGJKBEAGB_OFFSET UNITYSDK_OFFSET(0x145376A0)
#define CCGDAJKMPCD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145375D0)
#define CCGDAJKMPCD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14537610)

inline static constexpr unsigned int CCGDAJKMPCD___c_TypeDefinitionIndex = 83743;

class CCGDAJKMPCD___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__15_8()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(CCGDAJKMPCD___c_TypeDefinitionIndex)->GetStaticField(0x4F290);
	}
	static ::System::Action_1<::NPIDOFOHOEN*>** StaticGet___9__15_10()
	{
		return (::System::Action_1<::NPIDOFOHOEN*>**)Il2CppClass::FromTypeDefinitionIndex(CCGDAJKMPCD___c_TypeDefinitionIndex)->GetStaticField(0x4F298);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CCGDAJKMPCD___c_TypeDefinitionIndex)->GetStaticField(0x4F2A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCGDAJKMPCD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGDAJKMPCD___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* GGPLMMOHLOF()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGDAJKMPCD___C_GGPLMMOHLOF_OFFSET))(this);
	}

	::System::Void IEOGJKBEAGB(::NPIDOFOHOEN* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::NPIDOFOHOEN*))((::PBYTE)hIl2Cpp + CCGDAJKMPCD___C_IEOGJKBEAGB_OFFSET))(this, GLAOEHCGCFO);
	}
};
