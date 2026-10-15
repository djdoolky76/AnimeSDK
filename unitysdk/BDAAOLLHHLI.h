#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BDAAOLLHHLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x162EB5F0)
#define BDAAOLLHHLI_GPKIEBPEKDG_OFFSET UNITYSDK_OFFSET(0x162EAAA0)
#define BDAAOLLHHLI_IJBLECNCCFA_OFFSET UNITYSDK_OFFSET(0x162EAB80)
#define BDAAOLLHHLI_OCJGPCNJDGG_OFFSET UNITYSDK_OFFSET(0x162EB400)
#define BDAAOLLHHLI_PFNCKNAICGC_OFFSET UNITYSDK_OFFSET(0x162EB480)

	class BDAAOLLHHLI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_IMDHKOKGNJF()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)UnitySDK::FromName("", "BDAAOLLHHLI")->GetStaticField(0x66150);
		}

		static ::UnityEngine::SceneManagement::Scene* StaticGet_PDNJFABBNPL()
		{
			return (::UnityEngine::SceneManagement::Scene*)UnitySDK::FromName("", "BDAAOLLHHLI")->GetStaticField(0x14E20);
		}

		static ::System::Boolean* StaticGet_HKBBJJEDNJL()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BDAAOLLHHLI")->GetStaticField(0x14E24);
		}

		// static const ::System::Object HFNCJEJJPJO; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDAAOLLHHLI_CCTOR_OFFSET))();
		}

		static ::System::Boolean GPKIEBPEKDG(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BDAAOLLHHLI_GPKIEBPEKDG_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* IJBLECNCCFA(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + BDAAOLLHHLI_IJBLECNCCFA_OFFSET))(a1);
		}

		static ::System::String* OCJGPCNJDGG(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BDAAOLLHHLI_OCJGPCNJDGG_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* PFNCKNAICGC(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BDAAOLLHHLI_PFNCKNAICGC_OFFSET))(a1, a2);
		}

	};
