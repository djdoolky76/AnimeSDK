#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MNNJCMGPMIJ___C_CJCILCOEABJ_OFFSET UNITYSDK_OFFSET(0x151ED600)
#define MNNJCMGPMIJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151ED5B0)
#define MNNJCMGPMIJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151ED5F0)

inline static constexpr unsigned int MNNJCMGPMIJ___c_TypeDefinitionIndex = 66410;

class MNNJCMGPMIJ___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__38_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MNNJCMGPMIJ___c_TypeDefinitionIndex)->GetStaticField(0x46B20);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MNNJCMGPMIJ___c_TypeDefinitionIndex)->GetStaticField(0x46B28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNNJCMGPMIJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNJCMGPMIJ___C__CTOR_OFFSET))(this);
	}

	::System::Boolean CJCILCOEABJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNJCMGPMIJ___C_CJCILCOEABJ_OFFSET))(this);
	}
};
