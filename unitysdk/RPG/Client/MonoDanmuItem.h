#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DanmuType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
class FJGLDHEOPOF;
class MFLJIEBFMOF;
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONODANMUITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xE1DD8B0)
#define RPG_CLIENT_MONODANMUITEM_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xE1DD580)
#define RPG_CLIENT_MONODANMUITEM_GETWORLDEDGE_OFFSET UNITYSDK_OFFSET(0xE1DD810)
#define RPG_CLIENT_MONODANMUITEM_GETWORLDHEIGHT_OFFSET UNITYSDK_OFFSET(0xE1DC8E0)
#define RPG_CLIENT_MONODANMUITEM_GET_ISENDED_OFFSET UNITYSDK_OFFSET(0xE1DC820)
#define RPG_CLIENT_MONODANMUITEM_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE1DD3B0)
#define RPG_CLIENT_MONODANMUITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xE1DD3C0)
#define RPG_CLIENT_MONODANMUITEM_HASLEFTRIGHTEDGE_OFFSET UNITYSDK_OFFSET(0xE1DC880)
#define RPG_CLIENT_MONODANMUITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE1DD630)
#define RPG_CLIENT_MONODANMUITEM_ONCREATE_OFFSET UNITYSDK_OFFSET(0xE1DD430)
#define RPG_CLIENT_MONODANMUITEM_SETSTARTED_OFFSET UNITYSDK_OFFSET(0xE1DC7B0)
#define RPG_CLIENT_MONODANMUITEM_SPAWNED_OFFSET UNITYSDK_OFFSET(0xE1DD4E0)
#define RPG_CLIENT_MONODANMUITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xE1DD3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDanmuItem_TypeDefinitionIndex = 70902;

	class MonoDanmuItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::FJGLDHEOPOF* EGEDKLFCGKK; // 0x18
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0x20
		::RPG::GameCore::DanmuType GMCNLFICNOB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEnded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_GET_ISENDED_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_RectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::RPG::GameCore::DanmuType get_Type()
		{
			return ((::RPG::GameCore::DanmuType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_GET_TYPE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_UPDATE_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_DESPAWNED_OFFSET))(this);
		}

		::System::Void Initialize(::MFLJIEBFMOF* a1, ::FJGLDHEOPOF* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MFLJIEBFMOF*, ::FJGLDHEOPOF*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetStarted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_SETSTARTED_OFFSET))(this, a1);
		}

		::System::Single GetWorldHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_GETWORLDHEIGHT_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetWorldEdge()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_GETWORLDEDGE_OFFSET))(this);
		}

		::System::Boolean HasLeftRightEdge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_HASLEFTRIGHTEDGE_OFFSET))(this);
		}

	};
}
