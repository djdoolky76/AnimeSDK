#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define GEBJALKJGGJ___C_KIFMFELKFLG_OFFSET UNITYSDK_OFFSET(0x13251A60)
#define GEBJALKJGGJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13251A10)
#define GEBJALKJGGJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13251A50)

inline static constexpr unsigned int GEBJALKJGGJ___c_TypeDefinitionIndex = 87059;

class GEBJALKJGGJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GEBJALKJGGJ___c_TypeDefinitionIndex)->GetStaticField(0x31C10);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__5_7()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GEBJALKJGGJ___c_TypeDefinitionIndex)->GetStaticField(0x31C18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEBJALKJGGJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBJALKJGGJ___C__CTOR_OFFSET))(this);
	}

	::System::Boolean KIFMFELKFLG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBJALKJGGJ___C_KIFMFELKFLG_OFFSET))(this);
	}
};
