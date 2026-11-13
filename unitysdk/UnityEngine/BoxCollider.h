#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_BOXCOLLIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x2017C110)
#define UNITYENGINE_BOXCOLLIDER_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2017BFD0)
#define UNITYENGINE_BOXCOLLIDER_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x2017BF80)
#define UNITYENGINE_BOXCOLLIDER_GET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x2017C080)
#define UNITYENGINE_BOXCOLLIDER_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2017C050)
#define UNITYENGINE_BOXCOLLIDER_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x2017C000)
#define UNITYENGINE_BOXCOLLIDER_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2017BFF0)
#define UNITYENGINE_BOXCOLLIDER_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x2017BFE0)
#define UNITYENGINE_BOXCOLLIDER_SET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x2017C0E0)
#define UNITYENGINE_BOXCOLLIDER_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2017C070)
#define UNITYENGINE_BOXCOLLIDER_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x2017C060)

namespace UnityEngine
{
	inline static constexpr unsigned int BoxCollider_TypeDefinitionIndex = 5324;

	class BoxCollider : public ::UnityEngine::Collider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_CENTER_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_SIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_extents()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_EXTENTS_OFFSET))(this);
		}

		::System::Void set_extents(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_EXTENTS_OFFSET))(this, a1);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_CENTER_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_CENTER_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_SIZE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_SIZE_INJECTED_OFFSET))(this, a1);
		}

	};
}
