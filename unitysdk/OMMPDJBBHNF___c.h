#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define OMMPDJBBHNF___C_DPHEOIKLEDC_OFFSET UNITYSDK_OFFSET(0x11B47070)
#define OMMPDJBBHNF___C_MCFHNKJAHHJ_OFFSET UNITYSDK_OFFSET(0x11B47080)
#define OMMPDJBBHNF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B47020)
#define OMMPDJBBHNF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B47060)

inline static constexpr unsigned int OMMPDJBBHNF___c_TypeDefinitionIndex = 82119;

class OMMPDJBBHNF___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OMMPDJBBHNF___c_TypeDefinitionIndex)->GetStaticField(0x3F9F0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OMMPDJBBHNF___c_TypeDefinitionIndex)->GetStaticField(0x3F9F8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OMMPDJBBHNF___c_TypeDefinitionIndex)->GetStaticField(0x3FA00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMMPDJBBHNF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMPDJBBHNF___C__CTOR_OFFSET))(this);
	}

	::System::Boolean DPHEOIKLEDC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMPDJBBHNF___C_DPHEOIKLEDC_OFFSET))(this);
	}

	::System::Boolean MCFHNKJAHHJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMPDJBBHNF___C_MCFHNKJAHHJ_OFFSET))(this);
	}
};
