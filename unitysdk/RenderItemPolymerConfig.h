#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RENDERITEMPOLYMERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE95EBD0)
#define RENDERITEMPOLYMERCONFIG_EOJBCLHBEGA_OFFSET UNITYSDK_OFFSET(0xE95DD80)
#define RENDERITEMPOLYMERCONFIG_GET_ADDANIMATIONIRI_OFFSET UNITYSDK_OFFSET(0xE95DBF0)
#define RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONCHILDPATH_OFFSET UNITYSDK_OFFSET(0xE95E990)
#define RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONROOTPATH_OFFSET UNITYSDK_OFFSET(0xE95D120)
#define RENDERITEMPOLYMERCONFIG_HLKALOJGAKI_OFFSET UNITYSDK_OFFSET(0xE95D190)
#define RENDERITEMPOLYMERCONFIG_LMFALLOAKHL_OFFSET UNITYSDK_OFFSET(0xE95D880)
#define RENDERITEMPOLYMERCONFIG_SET_ADDANIMATIONIRI_OFFSET UNITYSDK_OFFSET(0xE95DC00)
#define RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONCHILDPATH_OFFSET UNITYSDK_OFFSET(0xE95E9A0)
#define RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONROOTPATH_OFFSET UNITYSDK_OFFSET(0xE95D130)

	class RenderItemPolymerConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* SyncPositionRoot; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* SyncPositionChildPath; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* AnimationIRI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_AddSyncPositionRootPath()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONROOTPATH_OFFSET))(this);
		}

		::System::Void set_AddSyncPositionRootPath(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONROOTPATH_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_AddAnimationIRI()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_GET_ADDANIMATIONIRI_OFFSET))(this);
		}

		::System::Void set_AddAnimationIRI(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_SET_ADDANIMATIONIRI_OFFSET))(this, a1);
		}

		::System::Void HLKALOJGAKI(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_HLKALOJGAKI_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_AddSyncPositionChildPath()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONCHILDPATH_OFFSET))(this);
		}

		::System::Void set_AddSyncPositionChildPath(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONCHILDPATH_OFFSET))(this, a1);
		}

		::System::Void LMFALLOAKHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_LMFALLOAKHL_OFFSET))(this);
		}

		::System::Void EOJBCLHBEGA(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_EOJBCLHBEGA_OFFSET))(this, a1, a2, a3, a4);
		}

	};
