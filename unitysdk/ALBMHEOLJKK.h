#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPICKHAEHCL.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
class DFCDIIJKIJC;
class FPNCFGCJNJL;
class MEIGMBOLDOF;
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define ALBMHEOLJKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1555EE60)
#define ALBMHEOLJKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1555D2D0)
#define ALBMHEOLJKK_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x1555D410)
#define ALBMHEOLJKK_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x1555D460)
#define ALBMHEOLJKK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1555D240)
#define ALBMHEOLJKK_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x1555E0F0)
#define ALBMHEOLJKK_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x1555E7A0)
#define ALBMHEOLJKK_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x1555E310)
#define ALBMHEOLJKK_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x1555E9F0)
#define ALBMHEOLJKK_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x1555D7F0)
#define ALBMHEOLJKK_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x1555D840)
#define ALBMHEOLJKK_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x1555D730)
#define ALBMHEOLJKK_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x1555D890)
#define ALBMHEOLJKK_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x1555D7B0)
#define ALBMHEOLJKK_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x1555D500)
#define ALBMHEOLJKK_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x1555DEA0)
#define ALBMHEOLJKK_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x1555E530)
#define ALBMHEOLJKK_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x1555EC40)
#define ALBMHEOLJKK_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x1555D770)
#define ALBMHEOLJKK_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x1555D4B0)
#define ALBMHEOLJKK_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x1555D310)
#define ALBMHEOLJKK__UNSERIALIZEASYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0x1555EE90)

	class ALBMHEOLJKK : public ::NPICKHAEHCL
	{
	public:
		::UnityEngine::GameObject* PANGKOPAOML; // 0x20
		::UnityEngine::GameObject* OIBJBILPJHB; // 0x28
		::System::Collections::Generic::List_1<::DFCDIIJKIJC*>* LPPLFNJENOF; // 0x30
		static ::FPNCFGCJNJL** StaticGet_OKOMBBIAKBL()
		{
			return (::FPNCFGCJNJL**)UnitySDK::FromName("", "ALBMHEOLJKK")->GetStaticField(0x5DF50);
		}

		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALBMHEOLJKK_CCTOR_OFFSET))();
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void UnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1, ::ScenenLightManager::BaseComponentExportData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_GETQUALITYFILTER_OFFSET))(this);
		}

		::System::Int32 GetTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_GETTYPEID_OFFSET))(this);
		}

		::System::Void SetHostManagedLight(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_ONRELEASE_OFFSET))(this);
		}

		::System::Void OnObjectDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_ONOBJECTDESTROY_OFFSET))(this);
		}

		::System::Void OnUnserializeFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_ONUNSERIALIZEFINISH_OFFSET))(this);
		}

		::System::Void OnPutToPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_ONPUTTOPOOL_OFFSET))(this);
		}

		::System::Void OnGetFromPoolAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
		}

		::System::Void OnObjectCreatedAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
		}

		::System::Void OnObjectEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_ONOBJECTENABLE_OFFSET))(this);
		}

		::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnSetSceneLightLod(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALBMHEOLJKK_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
		}

		::System::Void _UnserializeAsync_b__6_0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + ALBMHEOLJKK__UNSERIALIZEASYNC_B__6_0_OFFSET))(this, a1);
		}

	};
