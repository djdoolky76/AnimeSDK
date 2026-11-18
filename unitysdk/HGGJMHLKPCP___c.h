#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Func_1; }

#define HGGJMHLKPCP___C_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x140A6010)
#define HGGJMHLKPCP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140A5FC0)
#define HGGJMHLKPCP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140A6000)

inline static constexpr unsigned int HGGJMHLKPCP___c_TypeDefinitionIndex = 65534;

class HGGJMHLKPCP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HGGJMHLKPCP___c_TypeDefinitionIndex)->GetStaticField(0x3DEA0);
	}
	static ::System::Func_1<::UnityEngine::Vector3>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(HGGJMHLKPCP___c_TypeDefinitionIndex)->GetStaticField(0x3DEA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGGJMHLKPCP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGJMHLKPCP___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 HPPLBNIKOLN()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGJMHLKPCP___C_HPPLBNIKOLN_OFFSET))(this);
	}
};
