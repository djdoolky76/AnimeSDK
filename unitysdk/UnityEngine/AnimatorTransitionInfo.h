#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/DurationUnit.h"

namespace System { class String; }

#define UNITYENGINE_ANIMATORTRANSITIONINFO_GET_ANYSTATE_OFFSET UNITYSDK_OFFSET(0x3D00D0)
#define UNITYENGINE_ANIMATORTRANSITIONINFO_GET_DURATIONUNIT_OFFSET UNITYSDK_OFFSET(0x9BC600)
#define UNITYENGINE_ANIMATORTRANSITIONINFO_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x42FDC0)
#define UNITYENGINE_ANIMATORTRANSITIONINFO_GET_LISTENTRANSITION_OFFSET UNITYSDK_OFFSET(0x654700)
#define UNITYENGINE_ANIMATORTRANSITIONINFO_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x363D60)
#define UNITYENGINE_ANIMATORTRANSITIONINFO_GET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x6F95F0)
#define UNITYENGINE_ANIMATORTRANSITIONINFO_GET_USERNAMEHASH_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define UNITYENGINE_ANIMATORTRANSITIONINFO_ISUSERNAME_OFFSET UNITYSDK_OFFSET(0x9BC5E0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorTransitionInfo_TypeDefinitionIndex = 6637;

	struct alignas(4) AnimatorTransitionInfo
	{
		::System::Int32 m_FullPath; // 0x10
		::System::Int32 m_UserName; // 0x14
		::System::Int32 m_Name; // 0x18
		::System::Boolean m_HasFixedDuration; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single m_Duration; // 0x20
		::System::Single m_NormalizedTime; // 0x24
		::System::Boolean m_AnyState; // 0x28
		::System::Byte _padding1[0x3];
		::System::Int32 m_TransitionType; // 0x2C
		::System::Boolean m_ListenTransition; // 0x30

		::System::Boolean IsUserName(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORTRANSITIONINFO_ISUSERNAME_OFFSET))(this, name);
		}

		::System::Int32 get_nameHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORTRANSITIONINFO_GET_NAMEHASH_OFFSET))(this);
		}

		::System::Int32 get_userNameHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORTRANSITIONINFO_GET_USERNAMEHASH_OFFSET))(this);
		}

		::UnityEngine::DurationUnit get_durationUnit()
		{
			return ((::UnityEngine::DurationUnit(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORTRANSITIONINFO_GET_DURATIONUNIT_OFFSET))(this);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORTRANSITIONINFO_GET_DURATION_OFFSET))(this);
		}

		::System::Single get_normalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORTRANSITIONINFO_GET_NORMALIZEDTIME_OFFSET))(this);
		}

		::System::Boolean get_anyState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORTRANSITIONINFO_GET_ANYSTATE_OFFSET))(this);
		}

		::System::Boolean get_listenTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORTRANSITIONINFO_GET_LISTENTRANSITION_OFFSET))(this);
		}
	};
}
