#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define JMEEKAJOMMJ___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x13866270)
#define JMEEKAJOMMJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13866220)
#define JMEEKAJOMMJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13866260)

inline static constexpr unsigned int JMEEKAJOMMJ___c_TypeDefinitionIndex = 58044;

class JMEEKAJOMMJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JMEEKAJOMMJ___c_TypeDefinitionIndex)->GetStaticField(0x3B640);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(JMEEKAJOMMJ___c_TypeDefinitionIndex)->GetStaticField(0x3B648);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMEEKAJOMMJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEEKAJOMMJ___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEEKAJOMMJ___C_LPCHADDECLC_OFFSET))(this);
	}
};
