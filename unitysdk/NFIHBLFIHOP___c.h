#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define NFIHBLFIHOP___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x105B5C20)
#define NFIHBLFIHOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105B5BD0)
#define NFIHBLFIHOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105B5C10)

inline static constexpr unsigned int NFIHBLFIHOP___c_TypeDefinitionIndex = 73265;

class NFIHBLFIHOP___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(NFIHBLFIHOP___c_TypeDefinitionIndex)->GetStaticField(0x45500);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NFIHBLFIHOP___c_TypeDefinitionIndex)->GetStaticField(0x45508);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFIHBLFIHOP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIHBLFIHOP___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIHBLFIHOP___C_LPCHADDECLC_OFFSET))(this);
	}
};
