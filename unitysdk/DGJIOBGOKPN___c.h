#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DOFIMCNIHEH;
namespace System { template <typename T> class Comparison_1; }

#define DGJIOBGOKPN___C_IHFKPCMKNDE_OFFSET UNITYSDK_OFFSET(0x13E4BA40)
#define DGJIOBGOKPN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E4B9F0)
#define DGJIOBGOKPN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4BA30)

inline static constexpr unsigned int DGJIOBGOKPN___c_TypeDefinitionIndex = 73888;

class DGJIOBGOKPN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DGJIOBGOKPN___c_TypeDefinitionIndex)->GetStaticField(0x31430);
	}
	static ::System::Comparison_1<::DOFIMCNIHEH*>** StaticGet___9__24_0()
	{
		return (::System::Comparison_1<::DOFIMCNIHEH*>**)Il2CppClass::FromTypeDefinitionIndex(DGJIOBGOKPN___c_TypeDefinitionIndex)->GetStaticField(0x31438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGJIOBGOKPN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIOBGOKPN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 IHFKPCMKNDE(::DOFIMCNIHEH* DPGFPHIMDEL, ::DOFIMCNIHEH* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::DOFIMCNIHEH*, ::DOFIMCNIHEH*))((::PBYTE)hIl2Cpp + DGJIOBGOKPN___C_IHFKPCMKNDE_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
