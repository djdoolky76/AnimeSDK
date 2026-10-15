#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class AnimatorClipOverride; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MonoBehaviour; }

#define LMPPBDNFCJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB7D4DD0)
#define LMPPBDNFCJF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7D4CF0)
#define LMPPBDNFCJF_EANFGBBHGAG_OFFSET UNITYSDK_OFFSET(0xB7D4860)
#define LMPPBDNFCJF_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB7D47F0)
#define LMPPBDNFCJF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB7D4520)

	class LMPPBDNFCJF : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* NAALBOCJENI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPPBDNFCJF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + LMPPBDNFCJF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPPBDNFCJF_DISPOSE_OFFSET))(this);
		}

		::System::Void EANFGBBHGAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPPBDNFCJF_EANFGBBHGAG_OFFSET))(this);
		}

		::RPG::Client::AnimatorClipOverride* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::AnimatorClipOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPPBDNFCJF_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
