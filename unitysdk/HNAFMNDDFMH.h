#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class EffectAudioItem; }
namespace RPG::Client { class MonoEffectPluginAudio; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define HNAFMNDDFMH_BKOPFDBMKEP_OFFSET UNITYSDK_OFFSET(0x16D2C040)
#define HNAFMNDDFMH_COBDNLCNDED_OFFSET UNITYSDK_OFFSET(0x16D2BDD0)
#define HNAFMNDDFMH_CTOR_OFFSET UNITYSDK_OFFSET(0x16D2C5D0)
#define HNAFMNDDFMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D2B230)
#define HNAFMNDDFMH_EBNLMBENHLB_OFFSET UNITYSDK_OFFSET(0x16D2BAB0)
#define HNAFMNDDFMH_EPODAGHCEKF_OFFSET UNITYSDK_OFFSET(0x16D2C3A0)
#define HNAFMNDDFMH_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x16D2B1E0)
#define HNAFMNDDFMH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16D2B2A0)
#define HNAFMNDDFMH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16D2B0A0)
#define HNAFMNDDFMH_LAJGPANFAHN_OFFSET UNITYSDK_OFFSET(0x16D2BF30)
#define HNAFMNDDFMH_MBBGMGIMMBP_OFFSET UNITYSDK_OFFSET(0x16D2B5E0)
#define HNAFMNDDFMH_NDGINHEPJOJ_OFFSET UNITYSDK_OFFSET(0x16D2BC30)
#define HNAFMNDDFMH_OBLOGLDHPKM_OFFSET UNITYSDK_OFFSET(0x16D2C4B0)

inline static constexpr unsigned int HNAFMNDDFMH_TypeDefinitionIndex = 71818;

	class HNAFMNDDFMH : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::GameObject* EAFMEEFNGMM; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::EffectAudioItem*>* HLMNPOPCCAG; // 0x20
		::System::Single ONGBOJDIPNL; // 0x28
		::System::Single PGMIOKKLHIE; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAFMNDDFMH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + HNAFMNDDFMH_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAFMNDDFMH_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HNAFMNDDFMH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void LAJGPANFAHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAFMNDDFMH_LAJGPANFAHN_OFFSET))(this);
		}

		::System::Void BKOPFDBMKEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAFMNDDFMH_BKOPFDBMKEP_OFFSET))(this);
		}

		::System::Void EPODAGHCEKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAFMNDDFMH_EPODAGHCEKF_OFFSET))(this);
		}

		::System::Void MBBGMGIMMBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAFMNDDFMH_MBBGMGIMMBP_OFFSET))(this);
		}

		::System::Void NDGINHEPJOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAFMNDDFMH_NDGINHEPJOJ_OFFSET))(this);
		}

		::System::Void COBDNLCNDED(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HNAFMNDDFMH_COBDNLCNDED_OFFSET))(this, a1);
		}

		::System::Void EBNLMBENHLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAFMNDDFMH_EBNLMBENHLB_OFFSET))(this);
		}

		::System::Void OBLOGLDHPKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAFMNDDFMH_OBLOGLDHPKM_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginAudio* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginAudio*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAFMNDDFMH_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
