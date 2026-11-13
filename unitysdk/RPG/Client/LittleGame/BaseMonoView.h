#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDD8F0)
#define RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1CBDD6F0)
#define RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1CBDD790)
#define RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1CBDD7E0)
#define RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1CBDD670)
#define RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1CBDD5E0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseMonoView_TypeDefinitionIndex = 78817;

	class BaseMonoView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_CTOR_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_GETCENTERPOSITION_OFFSET))(this);
		}

		::UnityEngine::Transform* GetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_GETTRANSFORM_OFFSET))(this);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_SAFESETACTIVE_OFFSET))(this, a1);
		}

	};
}
