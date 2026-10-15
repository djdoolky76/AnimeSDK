#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD7EEB60)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD7EEBA0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C__GET_DIALOGTARGETRENDERERS_B__27_0_OFFSET UNITYSDK_OFFSET(0xD7EEBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDialogRendererOverlay___c_TypeDefinitionIndex = 69999;

	class MonoEffectPluginDialogRendererOverlay___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65650);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_DialogTargetRenderers_b__27_0(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C__GET_DIALOGTARGETRENDERERS_B__27_0_OFFSET))(this, a1);
		}

	};
}
