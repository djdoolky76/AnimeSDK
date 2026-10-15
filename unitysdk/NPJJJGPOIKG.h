#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define NPJJJGPOIKG_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF81F0)
#define NPJJJGPOIKG_MAAFKCALCMH_OFFSET UNITYSDK_OFFSET(0xBCF7BA0)
#define NPJJJGPOIKG_NEJLOGNANMC_OFFSET UNITYSDK_OFFSET(0xBCF7B50)
#define NPJJJGPOIKG_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xBCF7EF0)
#define NPJJJGPOIKG_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xBCF8120)

inline static constexpr unsigned int NPJJJGPOIKG_TypeDefinitionIndex = 48069;

	class NPJJJGPOIKG : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* ECBONMNCJMA; // 0x10
		::UnityEngine::Playables::PlayableDirector* OPNHINPCKOJ; // 0x18
		::System::Int32 BLJAICCCHIP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJJJGPOIKG_CTOR_OFFSET))(this);
		}

		::System::Void NEJLOGNANMC(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + NPJJJGPOIKG_NEJLOGNANMC_OFFSET))(this, a1);
		}

		::System::Void MAAFKCALCMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPJJJGPOIKG_MAAFKCALCMH_OFFSET))(this, a1);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NPJJJGPOIKG_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NPJJJGPOIKG_ONGRAPHSTOP_OFFSET))(this, a1);
		}

	};
