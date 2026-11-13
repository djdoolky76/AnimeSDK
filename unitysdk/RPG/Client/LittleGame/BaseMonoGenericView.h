#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView_AttachPointInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class LittleGameAttachPointInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBDD590)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDC230)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_GETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1CBDCD20)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1CBDC240)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_GETUNITYOBJECT_OFFSET UNITYSDK_OFFSET(0x1CBDC290)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_INITATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x1CBDC500)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_ISDYNAMICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1CBDD150)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_REMOVEATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x1CBDCAF0)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1CBDC3F0)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1CBDC2E0)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW__CREATEDYNAMICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1CBDD380)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW__CREATESTATICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1CBDD210)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseMonoGenericView_TypeDefinitionIndex = 78839;

	class BaseMonoGenericView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::PoolDictionary_2<::System::String*, ::System::Object*>* _AttachPoints; // 0x18
		static ::RPG::GameCore::LittleGameAttachPointInfo** StaticGet_NoNameAttachPointConfig()
		{
			return (::RPG::GameCore::LittleGameAttachPointInfo**)UnitySDK::FromName("RPG.Client.LittleGame", "BaseMonoGenericView")->GetStaticField(0x29800);
		}

		// static const ::System::String* NoNameAttachPointName; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_CCTOR_OFFSET))();
		}

		::UnityEngine::Transform* GetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_GETTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetUnityObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_GETUNITYOBJECT_OFFSET))(this);
		}

		::System::Void SetTransform(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_SETTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void InitAttachPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_INITATTACHPOINTS_OFFSET))(this);
		}

		::System::Void RemoveAttachPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_REMOVEATTACHPOINTS_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAttachPoint(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_GETATTACHPOINT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDynamicAttachPoint(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_ISDYNAMICATTACHPOINT_OFFSET))(this, a1);
		}

		::System::Void _CreateStaticAttachPoint(::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW__CREATESTATICATTACHPOINT_OFFSET))(this, a1);
		}

		::System::Void _CreateDynamicAttachPoint(::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW__CREATEDYNAMICATTACHPOINT_OFFSET))(this, a1);
		}

	};
}
