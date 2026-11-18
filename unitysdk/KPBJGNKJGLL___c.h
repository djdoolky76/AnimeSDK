#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define KPBJGNKJGLL___C_MHPJAOMKDNH_OFFSET UNITYSDK_OFFSET(0x1522D5A0)
#define KPBJGNKJGLL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1522D550)
#define KPBJGNKJGLL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1522D590)

inline static constexpr unsigned int KPBJGNKJGLL___c_TypeDefinitionIndex = 40307;

class KPBJGNKJGLL___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__5_6()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(KPBJGNKJGLL___c_TypeDefinitionIndex)->GetStaticField(0x3E540);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KPBJGNKJGLL___c_TypeDefinitionIndex)->GetStaticField(0x3E548);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPBJGNKJGLL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBJGNKJGLL___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* MHPJAOMKDNH()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBJGNKJGLL___C_MHPJAOMKDNH_OFFSET))(this);
	}
};
