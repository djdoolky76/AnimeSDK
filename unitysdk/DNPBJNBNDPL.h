#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"

class PPAAHJMDPAO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DNPBJNBNDPL_BAAHOCIKDJL_OFFSET UNITYSDK_OFFSET(0x12427BE0)
#define DNPBJNBNDPL_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x12427DC0)
#define DNPBJNBNDPL_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x12427E50)
#define DNPBJNBNDPL_KOLCCIGOOHD_OFFSET UNITYSDK_OFFSET(0x12427CC0)
#define DNPBJNBNDPL_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x12427B90)
#define DNPBJNBNDPL_ONSTART_OFFSET UNITYSDK_OFFSET(0x12427B50)
#define DNPBJNBNDPL__CTOR_OFFSET UNITYSDK_OFFSET(0x12427BD0)

inline static constexpr unsigned int DNPBJNBNDPL_TypeDefinitionIndex = 80425;

class DNPBJNBNDPL : public ::JGELKBLKFHE
{
public:
	static ::UnityEngine::Vector3* StaticGet_PNDAPAKCFIK()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(DNPBJNBNDPL_TypeDefinitionIndex)->GetStaticField(0x130F0);
	}
	static ::UnityEngine::Vector3* StaticGet_DCAOELLLKAE()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(DNPBJNBNDPL_TypeDefinitionIndex)->GetStaticField(0x130FC);
	}
	::Foundation::Coroutine::CoroutineHandle BELKCKIINHL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPBJNBNDPL__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPBJNBNDPL_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPBJNBNDPL_ONSHUTDOWN_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> BAAHOCIKDJL(::PPAAHJMDPAO* HHHNJIMDFOG, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IGAAKDOIPNN, ::System::Int32 KHCOCCKOFHI)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PPAAHJMDPAO*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + DNPBJNBNDPL_BAAHOCIKDJL_OFFSET))(HHHNJIMDFOG, IGAAKDOIPNN, KHCOCCKOFHI);
	}

	static ::PPAAHJMDPAO* KOLCCIGOOHD(::UnityEngine::Vector3 POKOCIIJGGK, ::UnityEngine::Vector3 FCNPOKNKMOD, ::System::Int32 LIMNECOMDOM, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IGAAKDOIPNN, ::System::Int32 KHCOCCKOFHI)
	{
		return ((::PPAAHJMDPAO*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + DNPBJNBNDPL_KOLCCIGOOHD_OFFSET))(POKOCIIJGGK, FCNPOKNKMOD, LIMNECOMDOM, IGAAKDOIPNN, KHCOCCKOFHI);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPBJNBNDPL_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPBJNBNDPL_DOPGAFCKMNF_OFFSET))(this);
	}
};
