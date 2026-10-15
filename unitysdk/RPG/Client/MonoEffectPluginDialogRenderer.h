#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DialogRendererBehavior_DialogRendererType.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace RPG::Client { class DialogRenderer; }
namespace RPG::Client::TAUtils { class MaterialPropertiesCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CBKPMHCOCMH_OFFSET UNITYSDK_OFFSET(0xD7F4100)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CTOR_OFFSET UNITYSDK_OFFSET(0xD7F55A0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_DISPOSEDIALOGRENDERER_OFFSET UNITYSDK_OFFSET(0xD7F45C0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_FAJAHACNNOH_OFFSET UNITYSDK_OFFSET(0xD7F4200)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GBAHDJFPPBC_OFFSET UNITYSDK_OFFSET(0xD7F4150)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0xD7F4B90)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_DIALOGCAMERA_OFFSET UNITYSDK_OFFSET(0xD7F4B20)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_DIALOGTARGETRENDERERS_OFFSET UNITYSDK_OFFSET(0xD7F4C20)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_DIALOGTARGET_OFFSET UNITYSDK_OFFSET(0xD7F4720)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xD7F4B80)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xD7F3F60)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_IJICJDNHKHN_OFFSET UNITYSDK_OFFSET(0xD7F3E10)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0xD7F3FE0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0xD7F3E60)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_NNOPFHDNCAF_OFFSET UNITYSDK_OFFSET(0xD7F4280)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_ONVIEWMODESTATECHANGED_OFFSET UNITYSDK_OFFSET(0xD7F4330)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_REFRESHDIALOGRENDERER_OFFSET UNITYSDK_OFFSET(0xD7F46A0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_RESETDIALOGRENDERER_OFFSET UNITYSDK_OFFSET(0xD7F4390)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_SETOVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0xD7F4DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDialogRenderer_TypeDefinitionIndex = 69993;

	class MonoEffectPluginDialogRenderer : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::RPG::Client::DialogRendererBehavior_DialogRendererType JNGECEAMGJE; // 0x170
		::System::Byte _padding0[0x4];
		::RPG::Client::DialogRenderer* DialogRenderer; // 0x178
		::RPG::Client::TAUtils::MaterialPropertiesCollection* OverrideProperties; // 0x180
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* BDPBDLLKPFA; // 0x188
		::Il2CppArray<::UnityEngine::Renderer*>* CLGBKMEMCKC; // 0x190
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CTOR_OFFSET))(this);
		}

		::System::Void IJICJDNHKHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_IJICJDNHKHN_OFFSET))(this);
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_IFOEAAAKONL_OFFSET))(this);
		}

		::System::Void CBKPMHCOCMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CBKPMHCOCMH_OFFSET))(this);
		}

		::System::Boolean FAJAHACNNOH(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_FAJAHACNNOH_OFFSET))(this, a1);
		}

		::System::Void NNOPFHDNCAF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_NNOPFHDNCAF_OFFSET))(this, a1);
		}

		::System::Void OnViewModeStateChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_ONVIEWMODESTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void KEPMMNEBKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_KEPMMNEBKCD_OFFSET))(this);
		}

		::System::Void IKOHLHDGFKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_IKOHLHDGFKH_OFFSET))(this);
		}

		::System::Void GBAHDJFPPBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GBAHDJFPPBC_OFFSET))(this);
		}

		::System::Void ResetDialogRenderer(::RPG::Client::DialogRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_RESETDIALOGRENDERER_OFFSET))(this, a1);
		}

		::System::Void DisposeDialogRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_DISPOSEDIALOGRENDERER_OFFSET))(this);
		}

		::System::Void RefreshDialogRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_REFRESHDIALOGRENDERER_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_DialogTarget()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_DIALOGTARGET_OFFSET))(this);
		}

		::UnityEngine::Camera* get_DialogCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_DIALOGCAMERA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_materials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_MATERIALS_OFFSET))(this);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void SetOverrideBounds(::System::Boolean a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_SETOVERRIDEBOUNDS_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* get_DialogTargetRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_DIALOGTARGETRENDERERS_OFFSET))(this);
		}

	};
}
