#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define JHEHHLKAHEJ___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x165AA5D0)
#define JHEHHLKAHEJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x165AA580)
#define JHEHHLKAHEJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165AA5C0)

inline static constexpr unsigned int JHEHHLKAHEJ___c_TypeDefinitionIndex = 54100;

class JHEHHLKAHEJ___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(JHEHHLKAHEJ___c_TypeDefinitionIndex)->GetStaticField(0x466D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JHEHHLKAHEJ___c_TypeDefinitionIndex)->GetStaticField(0x466D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHEHHLKAHEJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ___C_LPCHADDECLC_OFFSET))(this);
	}
};
