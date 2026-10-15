#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define IBBCPBCFNEM_CTOR_OFFSET UNITYSDK_OFFSET(0x15E29F80)
#define IBBCPBCFNEM_IPGCIPGBHHF_OFFSET UNITYSDK_OFFSET(0x15E29B30)
#define IBBCPBCFNEM_NEJLOGNANMC_OFFSET UNITYSDK_OFFSET(0x15E29F30)
#define IBBCPBCFNEM_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x15E29930)
#define IBBCPBCFNEM_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15E29A80)

	class IBBCPBCFNEM : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* OPNHINPCKOJ; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* ECBONMNCJMA; // 0x18
		::System::Double HBDJCFFDGDD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBCPBCFNEM_CTOR_OFFSET))(this);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IBBCPBCFNEM_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IBBCPBCFNEM_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void IPGCIPGBHHF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBBCPBCFNEM_IPGCIPGBHHF_OFFSET))(this, a1);
		}

		::System::Void NEJLOGNANMC(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + IBBCPBCFNEM_NEJLOGNANMC_OFFSET))(this, a1);
		}

	};
