#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_GETWEATHERBYKEYWITHDEFAULTSET_OFFSET UNITYSDK_OFFSET(0x1D45C250)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_GETWEATHERBYKEYWITHOUTDEFAULTSET_OFFSET UNITYSDK_OFFSET(0x1D45B790)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_GETWEATHERBYKEY_OFFSET UNITYSDK_OFFSET(0x1D45B980)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ISKEYEXISTS_OFFSET UNITYSDK_OFFSET(0x1D45B800)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONCLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1D45C930)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D45C980)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1D45C2C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D45C590)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D45C9D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherGroupScriptableObject_TypeDefinitionIndex = 26962;

	class WeatherGroupScriptableObject : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* DefaultKey; // 0x18
		::System::Boolean gap; // 0x20
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* WeatherDataList; // 0x28
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* cachedLoadedWeatherSo; // 0x30
		::System::String* cachedLoadedWeatherSoPath; // 0x38
		::System::String* cachedKey; // 0x40
		::Foundation::AssetRequestHandle cachedRequestHandle; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* GetWeatherByKeyWithOutDefaultSet(::System::String* key)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_GETWEATHERBYKEYWITHOUTDEFAULTSET_OFFSET))(this, key);
		}

		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* GetWeatherByKeyWithDefaultSet(::System::String*& key)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_GETWEATHERBYKEYWITHDEFAULTSET_OFFSET))(this, key);
		}

		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* GetWeatherByKey(::System::String* key)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_GETWEATHERBYKEY_OFFSET))(this, key);
		}

		::System::Boolean IsKeyExists(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ISKEYEXISTS_OFFSET))(this, key);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONDISPOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnClearCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERGROUPSCRIPTABLEOBJECT_ONCLEARCACHE_OFFSET))(this);
		}
	};
}
