#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBGOCNIIBML.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"

class OBAFKCKHFAF;

#define KBNPLKCALJK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x75E1C0)
#define KBNPLKCALJK_GAFHCEBHIBA_OFFSET UNITYSDK_OFFSET(0x75E1F0)
#define KBNPLKCALJK_HBECIPCGNEH_OFFSET UNITYSDK_OFFSET(0x75E1C0)
#define KBNPLKCALJK_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x48C0E0)
#define KBNPLKCALJK_MCNADLFHADK_OFFSET UNITYSDK_OFFSET(0x75E1D0)
#define KBNPLKCALJK__CTOR_OFFSET UNITYSDK_OFFSET(0x744DE0)

inline static constexpr unsigned int KBNPLKCALJK_TypeDefinitionIndex = 64767;

struct alignas(8) KBNPLKCALJK
{
	::OBAFKCKHFAF* DAAAEJDBNFI; // 0x10
	::BBGOCNIIBML PJEABGODIDL; // 0x18

	::System::Void _ctor(::OBAFKCKHFAF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::OBAFKCKHFAF*))((::PBYTE)hIl2Cpp + KBNPLKCALJK__CTOR_OFFSET))(this, AAOCANGHBDG);
	}

	::System::UInt32 ACOEONABOJL()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNPLKCALJK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNPLKCALJK_JDAPDDEOCEA_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform MCNADLFHADK()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNPLKCALJK_MCNADLFHADK_OFFSET))(this);
	}

	::System::Boolean GAFHCEBHIBA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNPLKCALJK_GAFHCEBHIBA_OFFSET))(this);
	}

	::System::UInt32 HBECIPCGNEH()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNPLKCALJK_HBECIPCGNEH_OFFSET))(this);
	}
};
