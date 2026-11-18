#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FANBKJPNEDB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define AIPFGBCLCIE___C_HLOOGMIAIDG_OFFSET UNITYSDK_OFFSET(0x181F5200)
#define AIPFGBCLCIE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181F51B0)
#define AIPFGBCLCIE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181F51F0)

inline static constexpr unsigned int AIPFGBCLCIE___c_TypeDefinitionIndex = 75715;

class AIPFGBCLCIE___c : public ::System::Object
{
public:
	static ::System::Func_2<::FANBKJPNEDB*, ::FANBKJPNEDB*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::FANBKJPNEDB*, ::FANBKJPNEDB*>**)Il2CppClass::FromTypeDefinitionIndex(AIPFGBCLCIE___c_TypeDefinitionIndex)->GetStaticField(0x36B80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AIPFGBCLCIE___c_TypeDefinitionIndex)->GetStaticField(0x36B88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIPFGBCLCIE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPFGBCLCIE___C__CTOR_OFFSET))(this);
	}

	::FANBKJPNEDB* HLOOGMIAIDG(::FANBKJPNEDB* KHIGJKINJJB)
	{
		return ((::FANBKJPNEDB*(*)(::PVOID, ::FANBKJPNEDB*))((::PBYTE)hIl2Cpp + AIPFGBCLCIE___C_HLOOGMIAIDG_OFFSET))(this, KHIGJKINJJB);
	}
};
