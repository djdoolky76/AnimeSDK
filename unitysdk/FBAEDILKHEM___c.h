#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define FBAEDILKHEM___C_KJOCKBEOAKD_OFFSET UNITYSDK_OFFSET(0x11CCDE70)
#define FBAEDILKHEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11CCDE20)
#define FBAEDILKHEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11CCDE60)

inline static constexpr unsigned int FBAEDILKHEM___c_TypeDefinitionIndex = 72466;

class FBAEDILKHEM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FBAEDILKHEM___c_TypeDefinitionIndex)->GetStaticField(0x461D0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__13_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FBAEDILKHEM___c_TypeDefinitionIndex)->GetStaticField(0x461D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBAEDILKHEM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAEDILKHEM___C__CTOR_OFFSET))(this);
	}

	::System::Boolean KJOCKBEOAKD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAEDILKHEM___C_KJOCKBEOAKD_OFFSET))(this);
	}
};
