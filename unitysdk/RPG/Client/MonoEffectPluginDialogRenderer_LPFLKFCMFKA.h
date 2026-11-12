#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace RPG::Client { class DialogRenderer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_LPFLKFCMFKA_CCTOR_OFFSET UNITYSDK_OFFSET(0xE2479B0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_LPFLKFCMFKA_EFNBIDMIMMH_OFFSET UNITYSDK_OFFSET(0xE2472D0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_LPFLKFCMFKA_GAFCECMAHIB_OFFSET UNITYSDK_OFFSET(0xE246110)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_LPFLKFCMFKA_JDONBJDIGFL_OFFSET UNITYSDK_OFFSET(0xE246A70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDialogRenderer_LPFLKFCMFKA_TypeDefinitionIndex = 71954;

	class MonoEffectPluginDialogRenderer_LPFLKFCMFKA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::HashSet_1<::RPG::Client::DialogRenderer*>*>** StaticGet_CFHMMIFLAKP()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::HashSet_1<::RPG::Client::DialogRenderer*>*>**)UnitySDK::FromName("RPG.Client", "LPFLKFCMFKA")->GetStaticField(0x5BC40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_LPFLKFCMFKA_CCTOR_OFFSET))();
		}

		static ::System::Void GAFCECMAHIB(::UnityEngine::GameObject* a1, ::RPG::Client::DialogRenderer* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::DialogRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_LPFLKFCMFKA_GAFCECMAHIB_OFFSET))(a1, a2);
		}

		static ::System::Void JDONBJDIGFL(::UnityEngine::GameObject* a1, ::RPG::Client::DialogRenderer* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::DialogRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_LPFLKFCMFKA_JDONBJDIGFL_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Bounds EFNBIDMIMMH(::UnityEngine::GameObject* a1, ::UnityEngine::Bounds a2)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::GameObject*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_LPFLKFCMFKA_EFNBIDMIMMH_OFFSET))(a1, a2);
		}

	};
}
