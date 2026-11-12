#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenBubbleType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xCD42A70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GETATTACHSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0xCD42B50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_BUBBLETYPE_OFFSET UNITYSDK_OFFSET(0xCD42CF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xCD42C20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_FOLLOWROOT_OFFSET UNITYSDK_OFFSET(0xCD42C40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_FORCEARROWCENTER_OFFSET UNITYSDK_OFFSET(0xCD42D30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_ISINVERSE_OFFSET UNITYSDK_OFFSET(0xCD42CB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_LIFEDURATION_OFFSET UNITYSDK_OFFSET(0xCD42C60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xCD42C80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_PARAM_OFFSET UNITYSDK_OFFSET(0xCD42D10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_USEUPARROW_OFFSET UNITYSDK_OFFSET(0xCD42CD0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SETFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xCD42A90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SETFINISH_OFFSET UNITYSDK_OFFSET(0xCD42AE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_BUBBLETYPE_OFFSET UNITYSDK_OFFSET(0xCD42D00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xCD42C30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_FOLLOWROOT_OFFSET UNITYSDK_OFFSET(0xCD42C50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_FORCEARROWCENTER_OFFSET UNITYSDK_OFFSET(0xCD42D40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_ISINVERSE_OFFSET UNITYSDK_OFFSET(0xCD42CC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_LIFEDURATION_OFFSET UNITYSDK_OFFSET(0xCD42C70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0xCD42CA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_PARAM_OFFSET UNITYSDK_OFFSET(0xCD42D20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_USEUPARROW_OFFSET UNITYSDK_OFFSET(0xCD42CE0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenBubbleInfo_TypeDefinitionIndex = 77793;

	class ActivityHipplenBubbleInfo : public ::System::Object
	{
	public:
		::System::Action* _OnFinish; // 0x10
		::System::String* _Param_k__BackingField; // 0x18
		::UnityEngine::Transform* _FollowRoot_k__BackingField; // 0x20
		::RPG::Client::ActivityHipplen::ActivityHipplenBubbleType _BubbleType_k__BackingField; // 0x28
		::System::Boolean _IsInverse_k__BackingField; // 0x2C
		::System::Boolean _UseUpArrow_k__BackingField; // 0x2D
		::System::Boolean _ForceArrowCenter_k__BackingField; // 0x2E
		::System::Byte _padding0[0x1];
		::RPG::Client::TextID _Content_k__BackingField; // 0x30
		::UnityEngine::Vector3 _Offset_k__BackingField; // 0x40
		::System::Single _LifeDuration_k__BackingField; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_CTOR_OFFSET))(this);
		}

		::System::Void SetFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SETFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SETFINISH_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetAttachScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GETATTACHSCREENPOSITION_OFFSET))(this);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_CONTENT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_FollowRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_FOLLOWROOT_OFFSET))(this);
		}

		::System::Void set_FollowRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_FOLLOWROOT_OFFSET))(this, a1);
		}

		::System::Single get_LifeDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_LIFEDURATION_OFFSET))(this);
		}

		::System::Void set_LifeDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_LIFEDURATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Offset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_OFFSET_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInverse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_ISINVERSE_OFFSET))(this);
		}

		::System::Void set_IsInverse(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_ISINVERSE_OFFSET))(this, a1);
		}

		::System::Boolean get_UseUpArrow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_USEUPARROW_OFFSET))(this);
		}

		::System::Void set_UseUpArrow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_USEUPARROW_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenBubbleType get_BubbleType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_BUBBLETYPE_OFFSET))(this);
		}

		::System::Void set_BubbleType(::RPG::Client::ActivityHipplen::ActivityHipplenBubbleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenBubbleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_BUBBLETYPE_OFFSET))(this, a1);
		}

		::System::String* get_Param()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_PARAM_OFFSET))(this);
		}

		::System::Void set_Param(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_PARAM_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceArrowCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_GET_FORCEARROWCENTER_OFFSET))(this);
		}

		::System::Void set_ForceArrowCenter(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENBUBBLEINFO_SET_FORCEARROWCENTER_OFFSET))(this, a1);
		}

	};
}
