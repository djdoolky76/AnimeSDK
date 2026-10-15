#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/ParticlePlaybackStatus.h"
namespace RPG::Client { class MonoEffectPluginParticleBackward; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define BOGLEMMMDAC_CTOR_OFFSET UNITYSDK_OFFSET(0xC18FD70)
#define BOGLEMMMDAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC18E750)
#define BOGLEMMMDAC_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xC18ED40)
#define BOGLEMMMDAC_INAHLJAPDAM_OFFSET UNITYSDK_OFFSET(0xC18E820)
#define BOGLEMMMDAC_IPFCGNCPOED_OFFSET UNITYSDK_OFFSET(0xC18EB40)
#define BOGLEMMMDAC_JEEIHEJOHCI_OFFSET UNITYSDK_OFFSET(0xC18FB00)
#define BOGLEMMMDAC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC18EDB0)
#define BOGLEMMMDAC_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xC18E7C0)
#define BOGLEMMMDAC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC18E6E0)
#define BOGLEMMMDAC_PCBIGPAGMEK_OFFSET UNITYSDK_OFFSET(0xC18EBE0)
#define BOGLEMMMDAC_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xC18EB00)

inline static constexpr unsigned int BOGLEMMMDAC_TypeDefinitionIndex = 69887;

	class BOGLEMMMDAC : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* JAGLHHOJLHI; // 0x18
		::System::Collections::Generic::List_1<::System::Single>* MEJACJPNLFF; // 0x20
		::RPG::Client::ParticlePlaybackStatus HHPOBNLAHKF; // 0x28
		::System::Int32 PCBHPDNEOMG; // 0x2C
		::System::Int32 MOHDEJAAMDN; // 0x30
		::System::Single DGEPNMEIJHO; // 0x34
		::System::Int32 OGAGLLHMPAD; // 0x38
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
