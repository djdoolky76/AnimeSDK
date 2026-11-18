#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define KPICAEPOHJN___C_CMEBKLIGGOD_OFFSET UNITYSDK_OFFSET(0x17678910)
#define KPICAEPOHJN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176788C0)
#define KPICAEPOHJN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17678900)

inline static constexpr unsigned int KPICAEPOHJN___c_TypeDefinitionIndex = 49457;

class KPICAEPOHJN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KPICAEPOHJN___c_TypeDefinitionIndex)->GetStaticField(0x4BE20);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_19()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KPICAEPOHJN___c_TypeDefinitionIndex)->GetStaticField(0x4BE28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPICAEPOHJN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPICAEPOHJN___C__CTOR_OFFSET))(this);
	}

	::System::Boolean CMEBKLIGGOD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPICAEPOHJN___C_CMEBKLIGGOD_OFFSET))(this);
	}
};
