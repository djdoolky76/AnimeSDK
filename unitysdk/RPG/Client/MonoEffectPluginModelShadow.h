#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginModelShadow_ProjectionLightType.h"
#include "unitysdk/UnityEngine/Color.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINMODELSHADOW_CCTOR_OFFSET UNITYSDK_OFFSET(0xE253DD0)
#define RPG_CLIENT_MONOEFFECTPLUGINMODELSHADOW_CTOR_OFFSET UNITYSDK_OFFSET(0xE253CF0)
#define RPG_CLIENT_MONOEFFECTPLUGINMODELSHADOW_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xE253630)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginModelShadow_TypeDefinitionIndex = 71970;

	class MonoEffectPluginModelShadow : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::System::Int32 RenderQueue; // 0x220
		::RPG::Client::MonoEffectPluginModelShadow_ProjectionLightType LightType; // 0x224
		::UnityEngine::Transform* LightTransform; // 0x228
		::UnityEngine::Transform* PlaneTransform; // 0x230
		::UnityEngine::Color ShadowColor; // 0x238
		::System::Single PlaneOffset; // 0x248
		static ::System::Int32* StaticGet_JIKKAIGMFCN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginModelShadow")->GetStaticField(0x13A20);
		}

		static ::System::Int32* StaticGet_CMOJKJNNGPI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginModelShadow")->GetStaticField(0x13A24);
		}

		static ::System::Int32* StaticGet_FIEHEFNCGLD()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginModelShadow")->GetStaticField(0x13A28);
		}

		// static const ::System::Object ANELBKOGFHA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMODELSHADOW_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMODELSHADOW_CCTOR_OFFSET))();
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMODELSHADOW_IFOEAAAKONL_OFFSET))(this);
		}

	};
}
