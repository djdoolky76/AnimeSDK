#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/OutlineOccluderMode.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace RPG { class OutlineSettings; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define RPG_OUTLINEPOSTFXMONOPLUGIN_CCTOR_OFFSET UNITYSDK_OFFSET(0xF347E30)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xF347DE0)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDGLOWRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xF344880)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDOBJECTRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xF344800)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDOCCLUDERRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xF346AD0)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDSETTINGS_OFFSET UNITYSDK_OFFSET(0xF344900)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDUIMASKRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xF346B50)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_HASUNIFIEDMANAGER_OFFSET UNITYSDK_OFFSET(0xF346DC0)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_REGISTERPLUGIN_OFFSET UNITYSDK_OFFSET(0xF343540)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_UNREGISTERPLUGIN_OFFSET UNITYSDK_OFFSET(0xF343BF0)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_UPDATEUNIFIEDRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xF346E40)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_UPDATEUNIFIEDSETTINGS_OFFSET UNITYSDK_OFFSET(0xF346BD0)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXMonoPlugin_TypeDefinitionIndex = 52805;

	class OutlinePostFXMonoPlugin
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* ObjectRendererList; // 0x30
		::UnityEngine::Color OutlineColor; // 0x38
		::System::Boolean PCHighQuality; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 Downsample; // 0x4C
		::System::Single BlurSize; // 0x50
		::System::Boolean EnableDepthTest; // 0x54
		::System::Byte _padding1[0x3];
		::System::Single DepthTestBias; // 0x58
		::System::Boolean EnableOccluder; // 0x5C
		::System::Byte _padding2[0x3];
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* OccluderRendererList; // 0x60
		::RPG::OutlineOccluderMode OccluderMode; // 0x68
		::System::Single OccludedOutlineAlpha; // 0x6C
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* GlowRendererList; // 0x70
		::UnityEngine::Color GlowColor; // 0x78
		::System::Single GlowIntensity; // 0x88
		::System::Single GlowRange; // 0x8C
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* UIMaskRendererList; // 0x90
		::UnityEngine::Shader* OutlineShader; // 0x98
		::UnityEngine::Material* OutlineMaterial; // 0xA0
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__unifiedObjectRendererList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("RPG", "OutlinePostFXMonoPlugin")->GetStaticField(0x73A50);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__unifiedGlowRendererList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("RPG", "OutlinePostFXMonoPlugin")->GetStaticField(0x73A58);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__unifiedUIMaskRendererList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("RPG", "OutlinePostFXMonoPlugin")->GetStaticField(0x73A60);
		}

		static ::RPG::OutlineSettings** StaticGet__unifiedSettings()
		{
			return (::RPG::OutlineSettings**)UnitySDK::FromName("RPG", "OutlinePostFXMonoPlugin")->GetStaticField(0x73A68);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__unifiedOccluderRendererList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("RPG", "OutlinePostFXMonoPlugin")->GetStaticField(0x73A70);
		}

		static ::System::Collections::Generic::List_1<::RPG::OutlinePostFXMonoPlugin*>** StaticGet_activeList()
		{
			return (::System::Collections::Generic::List_1<::RPG::OutlinePostFXMonoPlugin*>**)UnitySDK::FromName("RPG", "OutlinePostFXMonoPlugin")->GetStaticField(0x73A78);
		}

		static ::System::Boolean* StaticGet__hasUnifiedManager()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG", "OutlinePostFXMonoPlugin")->GetStaticField(0x163D0);
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

		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* GetUnifiedGlowRendererList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDGLOWRENDERERLIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* GetUnifiedOccluderRendererList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDOCCLUDERRENDERERLIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* GetUnifiedUIMaskRendererList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDUIMASKRENDERERLIST_OFFSET))();
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
