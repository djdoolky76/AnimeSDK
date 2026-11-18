#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define OMPBGHJLNBO___C_MMKGGEGEFDD_OFFSET UNITYSDK_OFFSET(0x15FF1870)
#define OMPBGHJLNBO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FF1820)
#define OMPBGHJLNBO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF1860)

inline static constexpr unsigned int OMPBGHJLNBO___c_TypeDefinitionIndex = 80659;

class OMPBGHJLNBO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OMPBGHJLNBO___c_TypeDefinitionIndex)->GetStaticField(0x360D0);
	}
	static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(OMPBGHJLNBO___c_TypeDefinitionIndex)->GetStaticField(0x360D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMPBGHJLNBO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPBGHJLNBO___C__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask MMKGGEGEFDD(::System::Threading::CancellationToken PIIPCLCCOIG)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + OMPBGHJLNBO___C_MMKGGEGEFDD_OFFSET))(this, PIIPCLCCOIG);
	}
};
