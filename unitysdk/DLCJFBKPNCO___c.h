#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define DLCJFBKPNCO___C_DFHDBEBLMIC_OFFSET UNITYSDK_OFFSET(0x19D6EBC0)
#define DLCJFBKPNCO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D6EB70)
#define DLCJFBKPNCO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6EBB0)

inline static constexpr unsigned int DLCJFBKPNCO___c_TypeDefinitionIndex = 42891;

class DLCJFBKPNCO___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(DLCJFBKPNCO___c_TypeDefinitionIndex)->GetStaticField(0x404F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DLCJFBKPNCO___c_TypeDefinitionIndex)->GetStaticField(0x404F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLCJFBKPNCO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCJFBKPNCO___C__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask DFHDBEBLMIC(::System::Threading::CancellationToken PIIPCLCCOIG)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + DLCJFBKPNCO___C_DFHDBEBLMIC_OFFSET))(this, PIIPCLCCOIG);
	}
};
