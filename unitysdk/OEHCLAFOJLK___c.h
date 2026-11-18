#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define OEHCLAFOJLK___C_ILFJHJHJMNB_OFFSET UNITYSDK_OFFSET(0xF17C3C0)
#define OEHCLAFOJLK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF17C370)
#define OEHCLAFOJLK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF17C3B0)

inline static constexpr unsigned int OEHCLAFOJLK___c_TypeDefinitionIndex = 73314;

class OEHCLAFOJLK___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(OEHCLAFOJLK___c_TypeDefinitionIndex)->GetStaticField(0x47790);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OEHCLAFOJLK___c_TypeDefinitionIndex)->GetStaticField(0x47798);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEHCLAFOJLK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCLAFOJLK___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath ILFJHJHJMNB()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCLAFOJLK___C_ILFJHJHJMNB_OFFSET))(this);
	}
};
