#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class GameObject; }

#define IFJLINPEJDM_CTOR_OFFSET UNITYSDK_OFFSET(0x15F11BD0)
#define IFJLINPEJDM_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x15F11EE0)
#define IFJLINPEJDM_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x15F11F30)
#define IFJLINPEJDM_HDFDHLOKCIB_OFFSET UNITYSDK_OFFSET(0x15F11D30)
#define IFJLINPEJDM_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x15F11FC0)
#define IFJLINPEJDM_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x15F11F80)
#define IFJLINPEJDM_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x15F11D70)
#define IFJLINPEJDM_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x15F11BE0)

inline static constexpr unsigned int IFJLINPEJDM_TypeDefinitionIndex = 49048;

	class IFJLINPEJDM
	{
	public:
		::System::Single CCIDCHOPEJO; // 0x40
		::System::Boolean GIKNGLNMPOO; // 0x44
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + IFJLINPEJDM_CTOR_OFFSET))(this, a1);
		}

		::System::Void UnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1, ::ScenenLightManager::BaseComponentExportData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + IFJLINPEJDM_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void HDFDHLOKCIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJLINPEJDM_HDFDHLOKCIB_OFFSET))(this);
		}

		::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IFJLINPEJDM_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJLINPEJDM_GETQUALITYFILTER_OFFSET))(this);
		}

		::System::Int32 GetTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJLINPEJDM_GETTYPEID_OFFSET))(this);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJLINPEJDM_ONRELEASE_OFFSET))(this);
		}

		::System::Void OnObjectEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJLINPEJDM_ONOBJECTENABLE_OFFSET))(this);
		}

	};
