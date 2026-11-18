#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HENCJHMEDDK;
namespace System { template <typename T> class Action_1; }

#define EJFMOALHEBG___C_DAGKBNKBPCI_OFFSET UNITYSDK_OFFSET(0x11A8D4D0)
#define EJFMOALHEBG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A8D480)
#define EJFMOALHEBG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11A8D4C0)

inline static constexpr unsigned int EJFMOALHEBG___c_TypeDefinitionIndex = 90668;

class EJFMOALHEBG___c : public ::System::Object
{
public:
	static ::System::Action_1<::HENCJHMEDDK*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::HENCJHMEDDK*>**)Il2CppClass::FromTypeDefinitionIndex(EJFMOALHEBG___c_TypeDefinitionIndex)->GetStaticField(0x4CDD0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EJFMOALHEBG___c_TypeDefinitionIndex)->GetStaticField(0x4CDD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJFMOALHEBG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFMOALHEBG___C__CTOR_OFFSET))(this);
	}

	::System::Void DAGKBNKBPCI(::HENCJHMEDDK* PKKMOBMCODB)
	{
		return ((::System::Void(*)(::PVOID, ::HENCJHMEDDK*))((::PBYTE)hIl2Cpp + EJFMOALHEBG___C_DAGKBNKBPCI_OFFSET))(this, PKKMOBMCODB);
	}
};
