#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define KAEAIJGOCMO___C_KJLBMJKKPJI_OFFSET UNITYSDK_OFFSET(0x1A491F50)
#define KAEAIJGOCMO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A491F00)
#define KAEAIJGOCMO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A491F40)

inline static constexpr unsigned int KAEAIJGOCMO___c_TypeDefinitionIndex = 89243;

class KAEAIJGOCMO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KAEAIJGOCMO___c_TypeDefinitionIndex)->GetStaticField(0x444B0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KAEAIJGOCMO___c_TypeDefinitionIndex)->GetStaticField(0x444B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAEAIJGOCMO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAEAIJGOCMO___C__CTOR_OFFSET))(this);
	}

	::System::Boolean KJLBMJKKPJI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAEAIJGOCMO___C_KJLBMJKKPJI_OFFSET))(this);
	}
};
