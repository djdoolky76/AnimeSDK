#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class EADLNAAMFFE;
namespace System { template <typename T1, typename T2> class Func_2; }

#define BAJBDJANHAA___C_BLOHCNCAJAC_OFFSET UNITYSDK_OFFSET(0xF784A20)
#define BAJBDJANHAA___C_CCDFCJOCMHP_OFFSET UNITYSDK_OFFSET(0xF784AF0)
#define BAJBDJANHAA___C_FDGLDNNGIGK_OFFSET UNITYSDK_OFFSET(0xF784B00)
#define BAJBDJANHAA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7849D0)
#define BAJBDJANHAA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF784A10)

inline static constexpr unsigned int BAJBDJANHAA___c_TypeDefinitionIndex = 56302;

class BAJBDJANHAA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BAJBDJANHAA___c_TypeDefinitionIndex)->GetStaticField(0x4FFC0);
	}
	static ::EADLNAAMFFE** StaticGet___9__3_0()
	{
		return (::EADLNAAMFFE**)Il2CppClass::FromTypeDefinitionIndex(BAJBDJANHAA___c_TypeDefinitionIndex)->GetStaticField(0x4FFC8);
	}
	static ::System::Func_2<::EADLNAAMFFE*, ::System::Boolean>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::EADLNAAMFFE*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BAJBDJANHAA___c_TypeDefinitionIndex)->GetStaticField(0x4FFD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAJBDJANHAA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJBDJANHAA___C__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask BLOHCNCAJAC(::System::Threading::CancellationToken CBJFKEAGLGD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + BAJBDJANHAA___C_BLOHCNCAJAC_OFFSET))(this, CBJFKEAGLGD);
	}

	::System::Boolean CCDFCJOCMHP(::EADLNAAMFFE* KKIAHJODOIA)
	{
		return ((::System::Boolean(*)(::PVOID, ::EADLNAAMFFE*))((::PBYTE)hIl2Cpp + BAJBDJANHAA___C_CCDFCJOCMHP_OFFSET))(this, KKIAHJODOIA);
	}

	::Cysharp::Threading::Tasks::UniTask FDGLDNNGIGK(::System::Threading::CancellationToken PIIPCLCCOIG)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + BAJBDJANHAA___C_FDGLDNNGIGK_OFFSET))(this, PIIPCLCCOIG);
	}
};
