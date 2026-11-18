#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define AGMKENNHHHN___C_CBLKKAKLEOM_OFFSET UNITYSDK_OFFSET(0x1439F180)
#define AGMKENNHHHN___C_KOGHNJMONNA_OFFSET UNITYSDK_OFFSET(0x1439F170)
#define AGMKENNHHHN___C_MBKPCNCNLAE_OFFSET UNITYSDK_OFFSET(0x1439F1F0)
#define AGMKENNHHHN___C_NJIJMAECILD_OFFSET UNITYSDK_OFFSET(0x1439F190)
#define AGMKENNHHHN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1439F120)
#define AGMKENNHHHN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1439F160)

inline static constexpr unsigned int AGMKENNHHHN___c_TypeDefinitionIndex = 82461;

class AGMKENNHHHN___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__3_15()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AGMKENNHHHN___c_TypeDefinitionIndex)->GetStaticField(0x47B00);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AGMKENNHHHN___c_TypeDefinitionIndex)->GetStaticField(0x47B08);
	}
	static ::System::Action** StaticGet___9__3_10()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AGMKENNHHHN___c_TypeDefinitionIndex)->GetStaticField(0x47B10);
	}
	static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__3_13()
	{
		return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(AGMKENNHHHN___c_TypeDefinitionIndex)->GetStaticField(0x47B18);
	}
	static ::System::Action** StaticGet___9__3_14()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AGMKENNHHHN___c_TypeDefinitionIndex)->GetStaticField(0x47B20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGMKENNHHHN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKENNHHHN___C__CTOR_OFFSET))(this);
	}

	::System::Void KOGHNJMONNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKENNHHHN___C_KOGHNJMONNA_OFFSET))(this);
	}

	::System::Void CBLKKAKLEOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKENNHHHN___C_CBLKKAKLEOM_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask NJIJMAECILD(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + AGMKENNHHHN___C_NJIJMAECILD_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Boolean MBKPCNCNLAE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKENNHHHN___C_MBKPCNCNLAE_OFFSET))(this);
	}
};
