#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALMMGOFACDF;
namespace System { template <typename T> class Action_1; }

#define KDIGJCJOLDC___C_ALBGDIJNNEK_OFFSET UNITYSDK_OFFSET(0x151558C0)
#define KDIGJCJOLDC___C_HGNIEBLKGJE_OFFSET UNITYSDK_OFFSET(0x15155790)
#define KDIGJCJOLDC___C_KLCCAJFJLCI_OFFSET UNITYSDK_OFFSET(0x15155600)
#define KDIGJCJOLDC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151555B0)
#define KDIGJCJOLDC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151555F0)

inline static constexpr unsigned int KDIGJCJOLDC___c_TypeDefinitionIndex = 66591;

class KDIGJCJOLDC___c : public ::System::Object
{
public:
	static ::System::Action_1<::ALMMGOFACDF*>** StaticGet___9__14_0()
	{
		return (::System::Action_1<::ALMMGOFACDF*>**)Il2CppClass::FromTypeDefinitionIndex(KDIGJCJOLDC___c_TypeDefinitionIndex)->GetStaticField(0x4BD80);
	}
	static ::System::Action_1<::ALMMGOFACDF*>** StaticGet___9__18_0()
	{
		return (::System::Action_1<::ALMMGOFACDF*>**)Il2CppClass::FromTypeDefinitionIndex(KDIGJCJOLDC___c_TypeDefinitionIndex)->GetStaticField(0x4BD88);
	}
	static ::System::Action_1<::ALMMGOFACDF*>** StaticGet___9__15_0()
	{
		return (::System::Action_1<::ALMMGOFACDF*>**)Il2CppClass::FromTypeDefinitionIndex(KDIGJCJOLDC___c_TypeDefinitionIndex)->GetStaticField(0x4BD90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KDIGJCJOLDC___c_TypeDefinitionIndex)->GetStaticField(0x4BD98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDIGJCJOLDC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIGJCJOLDC___C__CTOR_OFFSET))(this);
	}

	::System::Void KLCCAJFJLCI(::ALMMGOFACDF* NDLAFDNEOIB)
	{
		return ((::System::Void(*)(::PVOID, ::ALMMGOFACDF*))((::PBYTE)hIl2Cpp + KDIGJCJOLDC___C_KLCCAJFJLCI_OFFSET))(this, NDLAFDNEOIB);
	}

	::System::Void HGNIEBLKGJE(::ALMMGOFACDF* NDLAFDNEOIB)
	{
		return ((::System::Void(*)(::PVOID, ::ALMMGOFACDF*))((::PBYTE)hIl2Cpp + KDIGJCJOLDC___C_HGNIEBLKGJE_OFFSET))(this, NDLAFDNEOIB);
	}

	::System::Void ALBGDIJNNEK(::ALMMGOFACDF* NDLAFDNEOIB)
	{
		return ((::System::Void(*)(::PVOID, ::ALMMGOFACDF*))((::PBYTE)hIl2Cpp + KDIGJCJOLDC___C_ALBGDIJNNEK_OFFSET))(this, NDLAFDNEOIB);
	}
};
