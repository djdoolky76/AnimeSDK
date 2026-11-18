#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableCullingParameters.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_DIR2XY_OFFSET UNITYSDK_OFFSET(0x1A07B6D0)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_GETBAKEDINDEX_OFFSET UNITYSDK_OFFSET(0x1A07C2C0)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_GETBAKEDPVSHANDLE_OFFSET UNITYSDK_OFFSET(0x1A07C350)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A07C490)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1A07B640)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1A07BE40)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_SETUPSUNSHADOWPVSCULLPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1A07B910)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1A07C440)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_XY2DIR_OFFSET UNITYSDK_OFFSET(0x1A07B7D0)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A07C5F0)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07C590)

namespace MoleMole::Engine
{
	inline static constexpr unsigned int SunShadowPVSManager_TypeDefinitionIndex = 56394;

	class SunShadowPVSManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::Engine::SunShadowPVSManager** StaticGet_Instance()
		{
			return (::MoleMole::Engine::SunShadowPVSManager**)Il2CppClass::FromTypeDefinitionIndex(SunShadowPVSManager_TypeDefinitionIndex)->GetStaticField(0x3EB00);
		}
		static ::System::String** StaticGet_DataState()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SunShadowPVSManager_TypeDefinitionIndex)->GetStaticField(0x3EB08);
		}
		static ::System::Boolean* StaticGet_LogAction()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SunShadowPVSManager_TypeDefinitionIndex)->GetStaticField(0xE6B0);
		}
		static ::System::Boolean* StaticGet_HitState()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SunShadowPVSManager_TypeDefinitionIndex)->GetStaticField(0xE6B1);
		}
		// static const ::System::String* NJMDDMPFAII; // 0x0
		// static const ::System::String* MAKMCFNOHJD; // 0x0
		// static const ::System::String* IMAIGODMKND; // 0x0
		// static const ::System::UInt32 AFOCNIDKPKK = 0xFFFFFFFF; // 0x0
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x18
		::Il2CppArray<::System::Int32>* pvsHandles; // 0x20
		::Il2CppArray<::System::UInt32>* dirKeys; // 0x28
		::Il2CppArray<::System::Byte>* pvsBits; // 0x30
		::System::Int32 uCellsCnt; // 0x38
		::System::Int32 vCellsCnt; // 0x3C
		::System::Single invUCellAngle; // 0x40
		::System::Single invVCellAngle; // 0x44
		::System::UInt32 pvsHandleRangeCount; // 0x48
		::UnityEngine::Bounds shadowRendererBounds; // 0x4C
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* FGLAPDHHCEI; // 0x68
		::System::UInt32 CDKDGMKOKNC; // 0x70
		::System::UInt32 IFPLJHJPNOG; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER__CCTOR_OFFSET))();
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		static ::System::Void Dir2XY(::UnityEngine::Vector3 DAAEHEHLLLD, ::System::Int32& HAAEBCOBKFF, ::System::Int32& BFMMEICFNCD, ::System::Single GAJOAOIOEMK, ::System::Single FNMOFOKGDGJ, ::System::Int32 AKIMDHIDLAM, ::System::Int32 IEBOPGJILMB)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Int32&, ::System::Int32&, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_DIR2XY_OFFSET))(DAAEHEHLLLD, HAAEBCOBKFF, BFMMEICFNCD, GAJOAOIOEMK, FNMOFOKGDGJ, AKIMDHIDLAM, IEBOPGJILMB);
		}

		static ::UnityEngine::Vector3 XY2Dir(::System::Int32 FOOAINDCMJJ, ::System::Int32 MOLHGGHKKCL, ::System::Int32 AKIMDHIDLAM, ::System::Int32 IEBOPGJILMB)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_XY2DIR_OFFSET))(FOOAINDCMJJ, MOLHGGHKKCL, AKIMDHIDLAM, IEBOPGJILMB);
		}

		::System::Void SetupSunShadowPVSCullParameters(::UnityEngine::Rendering::ScriptableCullingParameters& BJPBJALPGIK, ::UnityEngine::Vector3 FCAJAIHDFBP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableCullingParameters&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_SETUPSUNSHADOWPVSCULLPARAMETERS_OFFSET))(this, BJPBJALPGIK, FCAJAIHDFBP);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_REGISTER_OFFSET))(this);
		}

		::System::Int32 GetBakedIndex(::UnityEngine::Renderer* OCFHGOGFGPE)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_GETBAKEDINDEX_OFFSET))(this, OCFHGOGFGPE);
		}

		::System::Int32 GetBakedPVSHandle(::UnityEngine::Renderer* OCFHGOGFGPE)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_GETBAKEDPVSHANDLE_OFFSET))(this, OCFHGOGFGPE);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_ONDESTROY_OFFSET))(this);
		}
	};
}
