#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HMOKJJMLOOP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define KMDFBMPIMMN___C_OGBLJDHLOHL_OFFSET UNITYSDK_OFFSET(0x1863CB20)
#define KMDFBMPIMMN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1863CAD0)
#define KMDFBMPIMMN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1863CB10)

inline static constexpr unsigned int KMDFBMPIMMN___c_TypeDefinitionIndex = 52641;

class KMDFBMPIMMN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KMDFBMPIMMN___c_TypeDefinitionIndex)->GetStaticField(0x52000);
	}
	static ::System::Func_2<::HMOKJJMLOOP*, ::System::UInt32>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::HMOKJJMLOOP*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(KMDFBMPIMMN___c_TypeDefinitionIndex)->GetStaticField(0x52008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMDFBMPIMMN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDFBMPIMMN___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 OGBLJDHLOHL(::HMOKJJMLOOP* HMMMOCJAEOA)
	{
		return ((::System::UInt32(*)(::PVOID, ::HMOKJJMLOOP*))((::PBYTE)hIl2Cpp + KMDFBMPIMMN___C_OGBLJDHLOHL_OFFSET))(this, HMMMOCJAEOA);
	}
};
