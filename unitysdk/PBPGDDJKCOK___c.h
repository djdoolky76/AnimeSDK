#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFCCBJALLFK;
class ODBFJKANCBI;
namespace System { template <typename T1, typename T2> class Action_2; }

#define PBPGDDJKCOK___C_DHIPFOHDMOE_OFFSET UNITYSDK_OFFSET(0x1AFD6100)
#define PBPGDDJKCOK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFD60B0)
#define PBPGDDJKCOK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD60F0)

inline static constexpr unsigned int PBPGDDJKCOK___c_TypeDefinitionIndex = 82064;

class PBPGDDJKCOK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PBPGDDJKCOK___c_TypeDefinitionIndex)->GetStaticField(0x49300);
	}
	static ::System::Action_2<::ODBFJKANCBI*, ::BFCCBJALLFK*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::ODBFJKANCBI*, ::BFCCBJALLFK*>**)Il2CppClass::FromTypeDefinitionIndex(PBPGDDJKCOK___c_TypeDefinitionIndex)->GetStaticField(0x49308);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBPGDDJKCOK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPGDDJKCOK___C__CTOR_OFFSET))(this);
	}

	::System::Void DHIPFOHDMOE(::ODBFJKANCBI* KNDHMPNIDKN, ::BFCCBJALLFK* GGADNNHAHMG)
	{
		return ((::System::Void(*)(::PVOID, ::ODBFJKANCBI*, ::BFCCBJALLFK*))((::PBYTE)hIl2Cpp + PBPGDDJKCOK___C_DHIPFOHDMOE_OFFSET))(this, KNDHMPNIDKN, GGADNNHAHMG);
	}
};
