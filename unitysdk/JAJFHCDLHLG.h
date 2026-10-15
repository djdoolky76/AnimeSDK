#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDBHLOCKPJL.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class GameObject; }

#define JAJFHCDLHLG_CTOR_OFFSET UNITYSDK_OFFSET(0x16545740)
#define JAJFHCDLHLG_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x16545750)
#define JAJFHCDLHLG_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x16545F40)
#define JAJFHCDLHLG_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x16545C20)
#define JAJFHCDLHLG_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x16545C90)
#define JAJFHCDLHLG_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x165458D0)
#define JAJFHCDLHLG_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x165459A0)
#define JAJFHCDLHLG_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x16545B40)
#define JAJFHCDLHLG_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x16545DF0)
#define JAJFHCDLHLG_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x165457A0)

inline static constexpr unsigned int JAJFHCDLHLG_TypeDefinitionIndex = 49050;

	class JAJFHCDLHLG : public ::IDBHLOCKPJL
	{
	public:
		::System::Boolean GIKNGLNMPOO; // 0x50
		::System::Byte _padding0[0x3];
		::System::Single CCIDCHOPEJO; // 0x54
		::System::Single DJPCKGAJFKP; // 0x58
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JAJFHCDLHLG_CTOR_OFFSET))(this, a1);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJFHCDLHLG_GETQUALITYFILTER_OFFSET))(this);
		}

		::System::Void UnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1, ::ScenenLightManager::BaseComponentExportData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + JAJFHCDLHLG_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void OnObjectEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJFHCDLHLG_ONOBJECTENABLE_OFFSET))(this);
		}

		::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + JAJFHCDLHLG_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JAJFHCDLHLG_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JAJFHCDLHLG_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JAJFHCDLHLG_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnSetSceneLightLod(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JAJFHCDLHLG_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
		}

		::System::Int32 GetTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJFHCDLHLG_GETTYPEID_OFFSET))(this);
		}

	};
