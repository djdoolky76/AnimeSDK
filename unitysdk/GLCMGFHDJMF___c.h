#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define GLCMGFHDJMF___C_OEOKHAHKEKE_OFFSET UNITYSDK_OFFSET(0x15D73D90)
#define GLCMGFHDJMF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D73D40)
#define GLCMGFHDJMF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D73D80)

inline static constexpr unsigned int GLCMGFHDJMF___c_TypeDefinitionIndex = 83444;

class GLCMGFHDJMF___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GLCMGFHDJMF___c_TypeDefinitionIndex)->GetStaticField(0x40AA0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GLCMGFHDJMF___c_TypeDefinitionIndex)->GetStaticField(0x40AA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLCMGFHDJMF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCMGFHDJMF___C__CTOR_OFFSET))(this);
	}

	::System::Boolean OEOKHAHKEKE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCMGFHDJMF___C_OEOKHAHKEKE_OFFSET))(this);
	}
};
