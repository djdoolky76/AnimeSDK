#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/MoleMole/Config/EtherEyesFixConfig.h"

class FJLFPGKDIBD;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_AWAKE_OFFSET UNITYSDK_OFFSET(0x162D95E0)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_BAAIEMPICPH_OFFSET UNITYSDK_OFFSET(0x162DA6A0)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x162D97A0)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x162DA5A0)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYANDMUTEINTERACT_OFFSET UNITYSDK_OFFSET(0x162DA700)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYBACKWARD_OFFSET UNITYSDK_OFFSET(0x162DA350)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x162D9AD0)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0x162D9C60)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_SETANIMTOFINISH_OFFSET UNITYSDK_OFFSET(0x162DA4E0)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_SETDATA_OFFSET UNITYSDK_OFFSET(0x162D99B0)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_STARTFROMTIME_OFFSET UNITYSDK_OFFSET(0x162D9A30)
#define MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x162DA8C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoAnimatorPlaybackPlugin_TypeDefinitionIndex = 72339;

	class MonoAnimatorPlaybackPlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* animator; // 0x18
		::System::Boolean LNHPFLMBEJF; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* clipNameForward; // 0x28
		::System::String* clipNameBackward; // 0x30
		::System::String* soundEventForward; // 0x38
		::System::String* soundEventBackward; // 0x40
		::System::Boolean canLoop; // 0x48
		::System::Boolean isInReverse; // 0x49
		::System::Boolean needCheckEnd; // 0x4A
		::System::Byte _padding1[0x5];
		::System::String* savedPlayName; // 0x50
		::FJLFPGKDIBD* cachedComponent; // 0x58
		::System::UInt32 HDBGIMEHIDG; // 0x60
		::System::UInt32 BPALMIBOFDE; // 0x64
		::UnityEngine::GameObject* PADBLNAIFAH; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetData(::MoleMole::Config::EtherEyesFixConfig FLHMJLNDNGP)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EtherEyesFixConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_SETDATA_OFFSET))(this, FLHMJLNDNGP);
		}

		::System::Void StartFromTime(::System::String* HIAIKHDFCLN, ::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_STARTFROMTIME_OFFSET))(this, HIAIKHDFCLN, AHAFNGEDPLI);
		}

		::System::Void PlayForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYFORWARD_OFFSET))(this);
		}

		::System::Void PlayBackward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYBACKWARD_OFFSET))(this);
		}

		::System::Void PlaySound(::System::Boolean CFJFMMGPGKE, ::System::Single BFGHPIFHKAO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYSOUND_OFFSET))(this, CFJFMMGPGKE, BFGHPIFHKAO);
		}

		::System::Void SetAnimToFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_SETANIMTOFINISH_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_ONUPDATE_OFFSET))(this);
		}

		::System::Void PlayAndMuteInteract(::System::Boolean CGGAJBOAMML, ::FJLFPGKDIBD* KPAJKBKCLDF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::FJLFPGKDIBD*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_PLAYANDMUTEINTERACT_OFFSET))(this, CGGAJBOAMML, KPAJKBKCLDF);
		}

		::System::Void BAAIEMPICPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATORPLAYBACKPLUGIN_BAAIEMPICPH_OFFSET))(this);
		}
	};
}
