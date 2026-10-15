#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONEGHOPELAC.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class EnvironmentSystem; }
namespace RPGTools::Timeline { class ActiveVirtualCameraBehaviour; }
namespace RPGTools::Timeline { class CustomEventBehaviour; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define DDDCEEBNIKK_AMNEAFILFBO_OFFSET UNITYSDK_OFFSET(0xE2568C0)
#define DDDCEEBNIKK_CNMJKDDPLBN_OFFSET UNITYSDK_OFFSET(0xE256840)
#define DDDCEEBNIKK_CTOR_OFFSET UNITYSDK_OFFSET(0xE256C10)
#define DDDCEEBNIKK_GFLBOIGGEHH_OFFSET UNITYSDK_OFFSET(0xE256310)
#define DDDCEEBNIKK_GJGPBPKLBEH_OFFSET UNITYSDK_OFFSET(0xE2566E0)
#define DDDCEEBNIKK_JAEMFLHHDCP_OFFSET UNITYSDK_OFFSET(0xE2567C0)
#define DDDCEEBNIKK_LPAAJPJGJBP_OFFSET UNITYSDK_OFFSET(0xE256260)
#define DDDCEEBNIKK_OGAMKOFFLGK_OFFSET UNITYSDK_OFFSET(0xE2561C0)
#define DDDCEEBNIKK_OKJFHINKGOM_OFFSET UNITYSDK_OFFSET(0xE256530)
#define DDDCEEBNIKK_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE2564D0)
#define DDDCEEBNIKK_OOGBIKEGJPH_OFFSET UNITYSDK_OFFSET(0xE256A50)

inline static constexpr unsigned int DDDCEEBNIKK_TypeDefinitionIndex = 47817;

	class DDDCEEBNIKK : public ::ONEGHOPELAC
	{
	public:
		::System::Single HLLDAGEDHKO; // 0x20
		::System::Single KPHIPFOFFID; // 0x24
		::System::Double DOHPJBKCIFO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDCEEBNIKK_CTOR_OFFSET))(this);
		}

		::System::Void OGAMKOFFLGK(::RPGTools::Timeline::CustomEventBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CustomEventBehaviour*))((::PBYTE)hIl2Cpp + DDDCEEBNIKK_OGAMKOFFLGK_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DDDCEEBNIKK_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void GJGPBPKLBEH(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DDDCEEBNIKK_GJGPBPKLBEH_OFFSET))(this, a1);
		}

		::RPG::Client::EnvironmentSystem* CNMJKDDPLBN()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDCEEBNIKK_CNMJKDDPLBN_OFFSET))(this);
		}

		::System::Void LPAAJPJGJBP(::RPGTools::Timeline::ActiveVirtualCameraBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ActiveVirtualCameraBehaviour*))((::PBYTE)hIl2Cpp + DDDCEEBNIKK_LPAAJPJGJBP_OFFSET))(this, a1);
		}

		::System::Void JAEMFLHHDCP(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + DDDCEEBNIKK_JAEMFLHHDCP_OFFSET))(this, a1);
		}

		::System::Void AMNEAFILFBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDCEEBNIKK_AMNEAFILFBO_OFFSET))(this);
		}

		::System::Void OOGBIKEGJPH(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + DDDCEEBNIKK_OOGBIKEGJPH_OFFSET))(this, a1);
		}

		::System::Void GFLBOIGGEHH(::RPGTools::Timeline::ActiveVirtualCameraBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ActiveVirtualCameraBehaviour*))((::PBYTE)hIl2Cpp + DDDCEEBNIKK_GFLBOIGGEHH_OFFSET))(this, a1);
		}

		::System::Void OKJFHINKGOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDCEEBNIKK_OKJFHINKGOM_OFFSET))(this);
		}

	};
