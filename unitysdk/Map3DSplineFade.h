#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MAP3DSPLINEFADE_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x18B60C20)
#define MAP3DSPLINEFADE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18B60A20)
#define MAP3DSPLINEFADE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18B603F0)
#define MAP3DSPLINEFADE_REFRESHCACHEDCENTERS_OFFSET UNITYSDK_OFFSET(0x18B60540)
#define MAP3DSPLINEFADE_UPDATE_OFFSET UNITYSDK_OFFSET(0x18B60AE0)
#define MAP3DSPLINEFADE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B60E40)
#define MAP3DSPLINEFADE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B60DF0)

inline static constexpr unsigned int Map3DSplineFade_TypeDefinitionIndex = 54025;

class Map3DSplineFade : public ::UnityEngine::MonoBehaviour
{
public:
	static ::UnityEngine::Transform** StaticGet_CachedCenter2()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Map3DSplineFade_TypeDefinitionIndex)->GetStaticField(0x46B50);
	}
	static ::UnityEngine::Transform** StaticGet_CachedCenter1()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Map3DSplineFade_TypeDefinitionIndex)->GetStaticField(0x46B58);
	}
	static ::System::Collections::Generic::List_1<::Map3DSplineFade*>** StaticGet_Instances()
	{
		return (::System::Collections::Generic::List_1<::Map3DSplineFade*>**)Il2CppClass::FromTypeDefinitionIndex(Map3DSplineFade_TypeDefinitionIndex)->GetStaticField(0x46B60);
	}
	static ::System::Int32* StaticGet_Map3DSphericalFadeCenter1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Map3DSplineFade_TypeDefinitionIndex)->GetStaticField(0x10500);
	}
	static ::System::Int32* StaticGet_Map3DSphericalFadeCenter2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Map3DSplineFade_TypeDefinitionIndex)->GetStaticField(0x10504);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DSPLINEFADE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAP3DSPLINEFADE__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DSPLINEFADE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DSPLINEFADE_ONDISABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DSPLINEFADE_UPDATE_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 GetWorldPosition(::UnityEngine::Transform* target)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MAP3DSPLINEFADE_GETWORLDPOSITION_OFFSET))(target);
	}

	static ::System::Void RefreshCachedCenters()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAP3DSPLINEFADE_REFRESHCACHEDCENTERS_OFFSET))();
	}
};
