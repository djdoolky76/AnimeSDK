#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HDKBLKJOLMC___C_OHHFMNHBCCB_OFFSET UNITYSDK_OFFSET(0x16F24DE0)
#define HDKBLKJOLMC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F24D90)
#define HDKBLKJOLMC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F24DD0)

inline static constexpr unsigned int HDKBLKJOLMC___c_TypeDefinitionIndex = 64693;

class HDKBLKJOLMC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HDKBLKJOLMC___c_TypeDefinitionIndex)->GetStaticField(0x3DE60);
	}
	static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>** StaticGet___9__0_1()
	{
		return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(HDKBLKJOLMC___c_TypeDefinitionIndex)->GetStaticField(0x3DE68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDKBLKJOLMC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKBLKJOLMC___C__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* OHHFMNHBCCB(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + HDKBLKJOLMC___C_OHHFMNHBCCB_OFFSET))(this, OMMEALOOOOD);
	}
};
