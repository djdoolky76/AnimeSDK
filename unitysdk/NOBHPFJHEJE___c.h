#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define NOBHPFJHEJE___C_BFFBJGCMKME_OFFSET UNITYSDK_OFFSET(0x1376F0B0)
#define NOBHPFJHEJE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1376F060)
#define NOBHPFJHEJE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1376F0A0)

inline static constexpr unsigned int NOBHPFJHEJE___c_TypeDefinitionIndex = 41998;

class NOBHPFJHEJE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NOBHPFJHEJE___c_TypeDefinitionIndex)->GetStaticField(0x48F30);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__11_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NOBHPFJHEJE___c_TypeDefinitionIndex)->GetStaticField(0x48F38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOBHPFJHEJE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBHPFJHEJE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BFFBJGCMKME()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBHPFJHEJE___C_BFFBJGCMKME_OFFSET))(this);
	}
};
