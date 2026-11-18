#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FDKIIFCDJNP;
namespace System { template <typename T> class Action_1; }

#define HEBCILIADMF___C_DEOJOOGDNMO_OFFSET UNITYSDK_OFFSET(0x1407D8D0)
#define HEBCILIADMF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1407D880)
#define HEBCILIADMF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1407D8C0)

inline static constexpr unsigned int HEBCILIADMF___c_TypeDefinitionIndex = 46470;

class HEBCILIADMF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HEBCILIADMF___c_TypeDefinitionIndex)->GetStaticField(0x49D10);
	}
	static ::System::Action_1<::FDKIIFCDJNP*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::FDKIIFCDJNP*>**)Il2CppClass::FromTypeDefinitionIndex(HEBCILIADMF___c_TypeDefinitionIndex)->GetStaticField(0x49D18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEBCILIADMF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBCILIADMF___C__CTOR_OFFSET))(this);
	}

	::System::Void DEOJOOGDNMO(::FDKIIFCDJNP* ECAHPFHIOJN)
	{
		return ((::System::Void(*)(::PVOID, ::FDKIIFCDJNP*))((::PBYTE)hIl2Cpp + HEBCILIADMF___C_DEOJOOGDNMO_OFFSET))(this, ECAHPFHIOJN);
	}
};
