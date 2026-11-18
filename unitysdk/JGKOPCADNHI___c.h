#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define JGKOPCADNHI___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x187383A0)
#define JGKOPCADNHI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18738350)
#define JGKOPCADNHI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18738390)

inline static constexpr unsigned int JGKOPCADNHI___c_TypeDefinitionIndex = 64582;

class JGKOPCADNHI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JGKOPCADNHI___c_TypeDefinitionIndex)->GetStaticField(0x38050);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(JGKOPCADNHI___c_TypeDefinitionIndex)->GetStaticField(0x38058);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGKOPCADNHI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKOPCADNHI___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKOPCADNHI___C_LPCHADDECLC_OFFSET))(this);
	}
};
