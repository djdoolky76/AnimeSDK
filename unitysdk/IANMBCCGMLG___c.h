#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define IANMBCCGMLG___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x15398570)
#define IANMBCCGMLG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15398520)
#define IANMBCCGMLG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15398560)

inline static constexpr unsigned int IANMBCCGMLG___c_TypeDefinitionIndex = 82583;

class IANMBCCGMLG___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(IANMBCCGMLG___c_TypeDefinitionIndex)->GetStaticField(0x443A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IANMBCCGMLG___c_TypeDefinitionIndex)->GetStaticField(0x443A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IANMBCCGMLG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANMBCCGMLG___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + IANMBCCGMLG___C_LPCHADDECLC_OFFSET))(this);
	}
};
