#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define GHJPEKCGKFM___C_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x179F0D10)
#define GHJPEKCGKFM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179F0CC0)
#define GHJPEKCGKFM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179F0D00)

inline static constexpr unsigned int GHJPEKCGKFM___c_TypeDefinitionIndex = 55199;

class GHJPEKCGKFM___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GHJPEKCGKFM___c_TypeDefinitionIndex)->GetStaticField(0x3DD50);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GHJPEKCGKFM___c_TypeDefinitionIndex)->GetStaticField(0x3DD58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJPEKCGKFM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJPEKCGKFM___C__CTOR_OFFSET))(this);
	}

	::System::String* JHMPNJLFHKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJPEKCGKFM___C_JHMPNJLFHKC_OFFSET))(this);
	}
};
