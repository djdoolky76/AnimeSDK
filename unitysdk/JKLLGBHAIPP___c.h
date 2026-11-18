#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define JKLLGBHAIPP___C_EBKCHBBGDIP_OFFSET UNITYSDK_OFFSET(0x1385FF00)
#define JKLLGBHAIPP___C_OHMEGDBGFEH_OFFSET UNITYSDK_OFFSET(0x1385FEA0)
#define JKLLGBHAIPP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1385FE50)
#define JKLLGBHAIPP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1385FE90)

inline static constexpr unsigned int JKLLGBHAIPP___c_TypeDefinitionIndex = 56643;

class JKLLGBHAIPP___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(JKLLGBHAIPP___c_TypeDefinitionIndex)->GetStaticField(0x3E380);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JKLLGBHAIPP___c_TypeDefinitionIndex)->GetStaticField(0x3E388);
	}
	static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(JKLLGBHAIPP___c_TypeDefinitionIndex)->GetStaticField(0x3E390);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKLLGBHAIPP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP___C__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask OHMEGDBGFEH(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + JKLLGBHAIPP___C_OHMEGDBGFEH_OFFSET))(this, OMMEALOOOOD);
	}

	::Cysharp::Threading::Tasks::UniTask EBKCHBBGDIP(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + JKLLGBHAIPP___C_EBKCHBBGDIP_OFFSET))(this, OMMEALOOOOD);
	}
};
