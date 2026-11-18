#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define GFNGDFPMBLI___C_JOEFGINLCBO_OFFSET UNITYSDK_OFFSET(0x16CC0BB0)
#define GFNGDFPMBLI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CC0B60)
#define GFNGDFPMBLI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC0BA0)

inline static constexpr unsigned int GFNGDFPMBLI___c_TypeDefinitionIndex = 51511;

class GFNGDFPMBLI___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__8_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GFNGDFPMBLI___c_TypeDefinitionIndex)->GetStaticField(0x378A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GFNGDFPMBLI___c_TypeDefinitionIndex)->GetStaticField(0x378A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFNGDFPMBLI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNGDFPMBLI___C__CTOR_OFFSET))(this);
	}

	::System::String* JOEFGINLCBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNGDFPMBLI___C_JOEFGINLCBO_OFFSET))(this);
	}
};
