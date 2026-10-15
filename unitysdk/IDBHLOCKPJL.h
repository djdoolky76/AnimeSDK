#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class GameObject; }

#define IDBHLOCKPJL_CTOR_OFFSET UNITYSDK_OFFSET(0x15E68BB0)
#define IDBHLOCKPJL_EBDDCMGKGHC_OFFSET UNITYSDK_OFFSET(0x15E697B0)
#define IDBHLOCKPJL_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x15E68BC0)
#define IDBHLOCKPJL_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x15E698C0)
#define IDBHLOCKPJL_KEKEMOAJMAI_OFFSET UNITYSDK_OFFSET(0x15E69870)
#define IDBHLOCKPJL_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15E694B0)
#define IDBHLOCKPJL_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15E695A0)
#define IDBHLOCKPJL_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x15E69360)
#define IDBHLOCKPJL_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x15E68EA0)
#define IDBHLOCKPJL_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x15E68C10)
#define IDBHLOCKPJL_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x15E69900)
#define IDBHLOCKPJL_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x15E690E0)
#define IDBHLOCKPJL_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15E69280)
#define IDBHLOCKPJL_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x15E69660)
#define IDBHLOCKPJL_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x15E68D70)

inline static constexpr unsigned int IDBHLOCKPJL_TypeDefinitionIndex = 49049;

	class IDBHLOCKPJL
	{
	public:
		::System::Single DJPCKGAJFKP; // 0x40
		::System::Single CCIDCHOPEJO; // 0x44
		::System::Single LICHAEJHAJO; // 0x48
		::System::Boolean GIKNGLNMPOO; // 0x4C
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_CTOR_OFFSET))(this, a1);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_GETQUALITYFILTER_OFFSET))(this);
		}

		::System::Void OnPutToPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_ONPUTTOPOOL_OFFSET))(this);
		}

		::System::Void UnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1, ::ScenenLightManager::BaseComponentExportData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void OnObjectEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_ONOBJECTENABLE_OFFSET))(this);
		}

		::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnObjectDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_ONOBJECTDESTROY_OFFSET))(this);
		}

		::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnSetSceneLightLod(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
		}

		::System::Void EBDDCMGKGHC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_EBDDCMGKGHC_OFFSET))(this, a1);
		}

		::System::Void KEKEMOAJMAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_KEKEMOAJMAI_OFFSET))(this);
		}

		::System::Int32 GetTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_GETTYPEID_OFFSET))(this);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHLOCKPJL_ONRELEASE_OFFSET))(this);
		}

	};
