#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define ONCGFIFDDAK___C_FMJMKJNKIJK_OFFSET UNITYSDK_OFFSET(0xFD95E30)
#define ONCGFIFDDAK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD95DE0)
#define ONCGFIFDDAK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFD95E20)

inline static constexpr unsigned int ONCGFIFDDAK___c_TypeDefinitionIndex = 57871;

class ONCGFIFDDAK___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__18_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ONCGFIFDDAK___c_TypeDefinitionIndex)->GetStaticField(0x360E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ONCGFIFDDAK___c_TypeDefinitionIndex)->GetStaticField(0x360E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONCGFIFDDAK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIFDDAK___C__CTOR_OFFSET))(this);
	}

	::System::Boolean FMJMKJNKIJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIFDDAK___C_FMJMKJNKIJK_OFFSET))(this);
	}
};
