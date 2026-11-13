#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/ParticlePlaybackStatus.h"
namespace RPG::Client { class MonoEffectPluginParticleBackward; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define BOGLEMMMDAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A785630)
#define BOGLEMMMDAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A784020)
#define BOGLEMMMDAC_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x1A784610)
#define BOGLEMMMDAC_INAHLJAPDAM_OFFSET UNITYSDK_OFFSET(0x1A7840F0)
#define BOGLEMMMDAC_IPFCGNCPOED_OFFSET UNITYSDK_OFFSET(0x1A784410)
#define BOGLEMMMDAC_JEEIHEJOHCI_OFFSET UNITYSDK_OFFSET(0x1A7853C0)
#define BOGLEMMMDAC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1A784680)
#define BOGLEMMMDAC_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x1A784090)
#define BOGLEMMMDAC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1A783FB0)
#define BOGLEMMMDAC_PCBIGPAGMEK_OFFSET UNITYSDK_OFFSET(0x1A7844B0)
#define BOGLEMMMDAC_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0x1A7843D0)

inline static constexpr unsigned int BOGLEMMMDAC_TypeDefinitionIndex = 71846;

	class BOGLEMMMDAC : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* MEJACJPNLFF; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* JAGLHHOJLHI; // 0x20
		::System::Single DGEPNMEIJHO; // 0x28
		::RPG::Client::ParticlePlaybackStatus HHPOBNLAHKF; // 0x2C
		::System::Int32 MOHDEJAAMDN; // 0x30
		::System::Int32 OGAGLLHMPAD; // 0x34
		::System::Int32 PCBHPDNEOMG; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGLEMMMDAC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + BOGLEMMMDAC_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGLEMMMDAC_DISPOSE_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGLEMMMDAC_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGLEMMMDAC_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void IPFCGNCPOED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGLEMMMDAC_IPFCGNCPOED_OFFSET))(this);
		}

		::System::Void PCBIGPAGMEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGLEMMMDAC_PCBIGPAGMEK_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BOGLEMMMDAC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void INAHLJAPDAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGLEMMMDAC_INAHLJAPDAM_OFFSET))(this);
		}

		::System::Void JEEIHEJOHCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGLEMMMDAC_JEEIHEJOHCI_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginParticleBackward* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginParticleBackward*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGLEMMMDAC_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
