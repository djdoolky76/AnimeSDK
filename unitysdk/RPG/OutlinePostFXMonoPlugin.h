#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace RPG { class OutlineSettings; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define RPG_OUTLINEPOSTFXMONOPLUGIN_CCTOR_OFFSET UNITYSDK_OFFSET(0xE871760)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE871730)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDOBJECTRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xE8700E0)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDSETTINGS_OFFSET UNITYSDK_OFFSET(0xE870140)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_HASUNIFIEDMANAGER_OFFSET UNITYSDK_OFFSET(0xE8712B0)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_REGISTERPLUGIN_OFFSET UNITYSDK_OFFSET(0xE86F380)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_UNREGISTERPLUGIN_OFFSET UNITYSDK_OFFSET(0xE86F860)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_UPDATEUNIFIEDRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xE871310)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_UPDATEUNIFIEDSETTINGS_OFFSET UNITYSDK_OFFSET(0xE871120)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXMonoPlugin_TypeDefinitionIndex = 51719;

	class OutlinePostFXMonoPlugin
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* ObjectRendererList; // 0x30
		::UnityEngine::Color OutlineColor; // 0x38
		::System::Boolean PCHighQuality; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 Downsample; // 0x4C
		::System::Single BlurSize; // 0x50
		::System::Byte _padding1[0x4];
		::UnityEngine::Shader* OutlineShader; // 0x58
		::UnityEngine::Material* OutlineMaterial; // 0x60
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__unifiedObjectRendererList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("RPG", "OutlinePostFXMonoPlugin")->GetStaticField(0x6F270);
		}

		static ::System::Collections::Generic::List_1<::RPG::OutlinePostFXMonoPlugin*>** StaticGet_activeList()
		{
			return (::System::Collections::Generic::List_1<::RPG::OutlinePostFXMonoPlugin*>**)UnitySDK::FromName("RPG", "OutlinePostFXMonoPlugin")->GetStaticField(0x6F278);
		}

		static ::RPG::OutlineSettings** StaticGet__unifiedSettings()
		{
			return (::RPG::OutlineSettings**)UnitySDK::FromName("RPG", "OutlinePostFXMonoPlugin")->GetStaticField(0x6F280);
		}

		static ::System::Boolean* StaticGet__hasUnifiedManager()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG", "OutlinePostFXMonoPlugin")->GetStaticField(0x158C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* GetUnifiedObjectRendererList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDOBJECTRENDERERLIST_OFFSET))();
		}

		static ::RPG::OutlineSettings* GetUnifiedSettings()
		{
			return ((::RPG::OutlineSettings*(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDSETTINGS_OFFSET))();
		}

		static ::System::Boolean HasUnifiedManager()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_HASUNIFIEDMANAGER_OFFSET))();
		}

		static ::System::Void UpdateUnifiedRendererList()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_UPDATEUNIFIEDRENDERERLIST_OFFSET))();
		}

		static ::System::Void UpdateUnifiedSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_UPDATEUNIFIEDSETTINGS_OFFSET))();
		}

		static ::System::Void RegisterPlugin(::RPG::OutlinePostFXMonoPlugin* a1)
		{
			return ((::System::Void(*)(::RPG::OutlinePostFXMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_REGISTERPLUGIN_OFFSET))(a1);
		}

		static ::System::Void UnregisterPlugin(::RPG::OutlinePostFXMonoPlugin* a1)
		{
			return ((::System::Void(*)(::RPG::OutlinePostFXMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_UNREGISTERPLUGIN_OFFSET))(a1);
		}

	};
}
