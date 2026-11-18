#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MPFFINOMGAH;
namespace System { template <typename T> class Action_1; }

#define PEBLFLEEBPA___C_KNPCEGLCNEM_OFFSET UNITYSDK_OFFSET(0x16FA0900)
#define PEBLFLEEBPA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FA08B0)
#define PEBLFLEEBPA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA08F0)

inline static constexpr unsigned int PEBLFLEEBPA___c_TypeDefinitionIndex = 52807;

class PEBLFLEEBPA___c : public ::System::Object
{
public:
	static ::System::Action_1<::MPFFINOMGAH*>** StaticGet___9__9_0()
	{
		return (::System::Action_1<::MPFFINOMGAH*>**)Il2CppClass::FromTypeDefinitionIndex(PEBLFLEEBPA___c_TypeDefinitionIndex)->GetStaticField(0x4B260);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PEBLFLEEBPA___c_TypeDefinitionIndex)->GetStaticField(0x4B268);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEBLFLEEBPA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBLFLEEBPA___C__CTOR_OFFSET))(this);
	}

	::System::Void KNPCEGLCNEM(::MPFFINOMGAH* ILPONJJBLHJ)
	{
		return ((::System::Void(*)(::PVOID, ::MPFFINOMGAH*))((::PBYTE)hIl2Cpp + PEBLFLEEBPA___C_KNPCEGLCNEM_OFFSET))(this, ILPONJJBLHJ);
	}
};
