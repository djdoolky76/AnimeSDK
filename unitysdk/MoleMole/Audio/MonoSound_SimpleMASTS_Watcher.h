#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Rigidbody; }

#define MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0x11E588F0)
#define MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_NNCDHGPMAFF_OFFSET UNITYSDK_OFFSET(0x11E59260)
#define MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x11E58C60)
#define MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_START_OFFSET UNITYSDK_OFFSET(0x11E589C0)
#define MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11E58CE0)
#define MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E59190)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSound_SimpleMASTS_Watcher_TypeDefinitionIndex = 57322;

	class MonoSound_SimpleMASTS_Watcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rigidbody* IIKPLPKCDBI; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* watchTypes; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* DJALDOIOAIN; // 0x28
		::System::Int32 historyWindowSize; // 0x30
		::System::Single PCEGOJJHJEK; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_START_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* GMKILPBDCFN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_ONCOLLISIONENTER_OFFSET))(this, GMKILPBDCFN);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_UPDATE_OFFSET))(this);
		}

		::System::Void NNCDHGPMAFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_NNCDHGPMAFF_OFFSET))(this);
		}
	};
}
