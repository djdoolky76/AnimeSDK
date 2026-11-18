#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OONBHFCCFPN;
namespace System { template <typename T> class Action_1; }

#define OCAIMDEIIKG___C_PKBHKNHNABI_OFFSET UNITYSDK_OFFSET(0x15F59030)
#define OCAIMDEIIKG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F58FE0)
#define OCAIMDEIIKG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F59020)

inline static constexpr unsigned int OCAIMDEIIKG___c_TypeDefinitionIndex = 44911;

class OCAIMDEIIKG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OCAIMDEIIKG___c_TypeDefinitionIndex)->GetStaticField(0x3F840);
	}
	static ::System::Action_1<::OONBHFCCFPN*>** StaticGet___9__25_0()
	{
		return (::System::Action_1<::OONBHFCCFPN*>**)Il2CppClass::FromTypeDefinitionIndex(OCAIMDEIIKG___c_TypeDefinitionIndex)->GetStaticField(0x3F848);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCAIMDEIIKG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIMDEIIKG___C__CTOR_OFFSET))(this);
	}

	::System::Void PKBHKNHNABI(::OONBHFCCFPN* HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::OONBHFCCFPN*))((::PBYTE)hIl2Cpp + OCAIMDEIIKG___C_PKBHKNHNABI_OFFSET))(this, HBJOLKHGGDD);
	}
};
