#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define NDMPPPPIHFI___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0xE733690)
#define NDMPPPPIHFI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE733640)
#define NDMPPPPIHFI___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE733680)

inline static constexpr unsigned int NDMPPPPIHFI___c_TypeDefinitionIndex = 74185;

class NDMPPPPIHFI___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(NDMPPPPIHFI___c_TypeDefinitionIndex)->GetStaticField(0x3F590);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NDMPPPPIHFI___c_TypeDefinitionIndex)->GetStaticField(0x3F598);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDMPPPPIHFI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMPPPPIHFI___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMPPPPIHFI___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
