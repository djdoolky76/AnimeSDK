#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x12B2E440)
#define MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x12B2E490)
#define MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_TRIGGERSETTINGS_OFFSET UNITYSDK_OFFSET(0x12B2E840)
#define MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B2EA00)

namespace MoleMole::Engine
{
	inline static constexpr unsigned int NapSceneOptimizeManager_TypeDefinitionIndex = 86805;

	class NapSceneOptimizeManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* MKJHKFHBKGI; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* PIKIDEOHIAH; // 0x20
		::Il2CppArray<::UnityEngine::Material*>* m_LinkedMaterials; // 0x28
		::Il2CppArray<::System::Object*>* m_RenderItems; // 0x30
		::Il2CppArray<::UnityEngine::Renderer*>* shadowOffRenders; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_AWAKE_OFFSET))(this);
		}

		static ::System::Void TriggerSettings(::System::Boolean OOOKMHDHAHP)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_TRIGGERSETTINGS_OFFSET))(OOOKMHDHAHP);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_REFRESHDATA_OFFSET))(this);
		}
	};
}
