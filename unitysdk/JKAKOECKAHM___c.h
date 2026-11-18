#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Material; }

#define JKAKOECKAHM___C_JBEJCCOGEAC_OFFSET UNITYSDK_OFFSET(0x14A849E0)
#define JKAKOECKAHM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A84990)
#define JKAKOECKAHM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A849D0)

inline static constexpr unsigned int JKAKOECKAHM___c_TypeDefinitionIndex = 53011;

class JKAKOECKAHM___c : public ::System::Object
{
public:
	static ::System::Func_2<::UnityEngine::Material*, ::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::UnityEngine::Material*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JKAKOECKAHM___c_TypeDefinitionIndex)->GetStaticField(0x32640);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JKAKOECKAHM___c_TypeDefinitionIndex)->GetStaticField(0x32648);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKAKOECKAHM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAKOECKAHM___C__CTOR_OFFSET))(this);
	}

	::System::Boolean JBEJCCOGEAC(::UnityEngine::Material* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + JKAKOECKAHM___C_JBEJCCOGEAC_OFFSET))(this, HAAEBCOBKFF);
	}
};
