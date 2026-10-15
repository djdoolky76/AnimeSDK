#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPICKHAEHCL.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
class JDLGAODEILH;
class MEIGMBOLDOF;
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace RPG::Client { class BillboardController; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define GPFEAEOEGFA_CTOR_OFFSET UNITYSDK_OFFSET(0x15B52FE0)
#define GPFEAEOEGFA_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x15B53200)
#define GPFEAEOEGFA_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x15B53170)
#define GPFEAEOEGFA_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x15B530D0)
#define GPFEAEOEGFA_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x15B53B40)
#define GPFEAEOEGFA_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x15B531C0)
#define GPFEAEOEGFA_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x15B53AD0)
#define GPFEAEOEGFA_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x15B53250)
#define GPFEAEOEGFA_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x15B539C0)
#define GPFEAEOEGFA_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x15B53120)
#define GPFEAEOEGFA_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x15B532D0)
#define GPFEAEOEGFA__UNSERIALIZEASYNC_B__12_0_OFFSET UNITYSDK_OFFSET(0x15B53B80)
#define GPFEAEOEGFA__UNSERIALIZEASYNC_B__12_1_OFFSET UNITYSDK_OFFSET(0x15B53BB0)

inline static constexpr unsigned int GPFEAEOEGFA_TypeDefinitionIndex = 49039;

	class GPFEAEOEGFA : public ::NPICKHAEHCL
	{
	public:
		::RPG::Client::BillboardController* LBMMAIOMDAM; // 0x20
		::JDLGAODEILH* HINIKDOHFHL; // 0x28
		::UnityEngine::GameObject* PANGKOPAOML; // 0x30
		::System::Single CBKEAPEHIMO; // 0x38
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GPFEAEOEGFA_CTOR_OFFSET))(this, a1);
		}

		::System::Void OnObjectCreatedAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + GPFEAEOEGFA_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
		}

		::System::Void SetHostManagedLight(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + GPFEAEOEGFA_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
		}

		::System::Void OnGetFromPoolAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + GPFEAEOEGFA_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
		}

		::System::Void OnPutToPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEAEOEGFA_ONPUTTOPOOL_OFFSET))(this);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEAEOEGFA_GETQUALITYFILTER_OFFSET))(this);
		}

		::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + GPFEAEOEGFA_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
		}

		::System::Void UnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1, ::ScenenLightManager::BaseComponentExportData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + GPFEAEOEGFA_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void OnUnserializeFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEAEOEGFA_ONUNSERIALIZEFINISH_OFFSET))(this);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEAEOEGFA_ONRELEASE_OFFSET))(this);
		}

		::System::Void OnObjectDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEAEOEGFA_ONOBJECTDESTROY_OFFSET))(this);
		}

		::System::Void _UnserializeAsync_b__12_0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + GPFEAEOEGFA__UNSERIALIZEASYNC_B__12_0_OFFSET))(this, a1);
		}

		::System::Void _UnserializeAsync_b__12_1(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + GPFEAEOEGFA__UNSERIALIZEASYNC_B__12_1_OFFSET))(this, a1);
		}

	};
