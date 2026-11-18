#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW_AWAKE_OFFSET UNITYSDK_OFFSET(0x12B835E0)
#define MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW_UPDATE_OFFSET UNITYSDK_OFFSET(0x12B83780)
#define MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B83A00)
#define MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x12B839B0)

namespace MoleMole::NAPCameras::Utils
{
	inline static constexpr unsigned int DebugDraw_TypeDefinitionIndex = 74827;

	class DebugDraw : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::NAPCameras::Utils::DebugDraw** StaticGet_ECMMKCJLBMD()
		{
			return (::MoleMole::NAPCameras::Utils::DebugDraw**)Il2CppClass::FromTypeDefinitionIndex(DebugDraw_TypeDefinitionIndex)->GetStaticField(0x4D8A0);
		}
		static ::System::Boolean* StaticGet_Enabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DebugDraw_TypeDefinitionIndex)->GetStaticField(0x12300);
		}
		::UnityEngine::GameObject* BKIPDELJIAL; // 0x18
		::Il2CppArray<::System::Object*>* GAAFFBBJHKG; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW_UPDATE_OFFSET))(this);
		}
	};
}
