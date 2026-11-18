#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define ADPDAPOEBJH___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x14396CF0)
#define ADPDAPOEBJH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14396CA0)
#define ADPDAPOEBJH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14396CE0)

inline static constexpr unsigned int ADPDAPOEBJH___c_TypeDefinitionIndex = 83543;

class ADPDAPOEBJH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ADPDAPOEBJH___c_TypeDefinitionIndex)->GetStaticField(0x47AF0);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(ADPDAPOEBJH___c_TypeDefinitionIndex)->GetStaticField(0x47AF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADPDAPOEBJH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPDAPOEBJH___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPDAPOEBJH___C_LPCHADDECLC_OFFSET))(this);
	}
};
