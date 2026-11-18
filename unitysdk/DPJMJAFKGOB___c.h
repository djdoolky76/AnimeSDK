#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KIAEEMJLCJA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define DPJMJAFKGOB___C_JGACMJBJEHH_OFFSET UNITYSDK_OFFSET(0xF9A9100)
#define DPJMJAFKGOB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9A90B0)
#define DPJMJAFKGOB___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF9A90F0)

inline static constexpr unsigned int DPJMJAFKGOB___c_TypeDefinitionIndex = 38418;

class DPJMJAFKGOB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DPJMJAFKGOB___c_TypeDefinitionIndex)->GetStaticField(0x31630);
	}
	static ::System::Func_2<::KIAEEMJLCJA*, ::System::Boolean>** StaticGet___9__49_1()
	{
		return (::System::Func_2<::KIAEEMJLCJA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DPJMJAFKGOB___c_TypeDefinitionIndex)->GetStaticField(0x31638);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPJMJAFKGOB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMJAFKGOB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean JGACMJBJEHH(::KIAEEMJLCJA* KBNHAJHPKPO)
	{
		return ((::System::Boolean(*)(::PVOID, ::KIAEEMJLCJA*))((::PBYTE)hIl2Cpp + DPJMJAFKGOB___C_JGACMJBJEHH_OFFSET))(this, KBNHAJHPKPO);
	}
};
