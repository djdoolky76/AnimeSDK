#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CNCJJIGLMAL;
namespace System { template <typename T> class Action_1; }

#define BOCFLENBOFJ___C_PLACCFJJGGK_OFFSET UNITYSDK_OFFSET(0x14F00390)
#define BOCFLENBOFJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F00340)
#define BOCFLENBOFJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14F00380)

inline static constexpr unsigned int BOCFLENBOFJ___c_TypeDefinitionIndex = 74870;

class BOCFLENBOFJ___c : public ::System::Object
{
public:
	static ::System::Action_1<::CNCJJIGLMAL*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::CNCJJIGLMAL*>**)Il2CppClass::FromTypeDefinitionIndex(BOCFLENBOFJ___c_TypeDefinitionIndex)->GetStaticField(0x30F10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BOCFLENBOFJ___c_TypeDefinitionIndex)->GetStaticField(0x30F18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOCFLENBOFJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCFLENBOFJ___C__CTOR_OFFSET))(this);
	}

	::System::Void PLACCFJJGGK(::CNCJJIGLMAL* KILFBNJGLHA)
	{
		return ((::System::Void(*)(::PVOID, ::CNCJJIGLMAL*))((::PBYTE)hIl2Cpp + BOCFLENBOFJ___C_PLACCFJJGGK_OFFSET))(this, KILFBNJGLHA);
	}
};
