#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GIEJNOEAKAK;
namespace System { template <typename T> class Action_1; }

#define AKCIIANEHII___C_KNPCEGLCNEM_OFFSET UNITYSDK_OFFSET(0x12D01400)
#define AKCIIANEHII___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D013B0)
#define AKCIIANEHII___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12D013F0)

inline static constexpr unsigned int AKCIIANEHII___c_TypeDefinitionIndex = 39583;

class AKCIIANEHII___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AKCIIANEHII___c_TypeDefinitionIndex)->GetStaticField(0x3FFA0);
	}
	static ::System::Action_1<::GIEJNOEAKAK*>** StaticGet___9__9_0()
	{
		return (::System::Action_1<::GIEJNOEAKAK*>**)Il2CppClass::FromTypeDefinitionIndex(AKCIIANEHII___c_TypeDefinitionIndex)->GetStaticField(0x3FFA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCIIANEHII___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCIIANEHII___C__CTOR_OFFSET))(this);
	}

	::System::Void KNPCEGLCNEM(::GIEJNOEAKAK* GINJNJKOEDJ)
	{
		return ((::System::Void(*)(::PVOID, ::GIEJNOEAKAK*))((::PBYTE)hIl2Cpp + AKCIIANEHII___C_KNPCEGLCNEM_OFFSET))(this, GINJNJKOEDJ);
	}
};
