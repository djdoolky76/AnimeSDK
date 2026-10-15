#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectCharacterMoonHaloControl; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define JEHFCPCBBBK_BCKFELNFHCF_OFFSET UNITYSDK_OFFSET(0x16618570)
#define JEHFCPCBBBK_CTOR_OFFSET UNITYSDK_OFFSET(0x16618990)
#define JEHFCPCBBBK_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0x166185D0)
#define JEHFCPCBBBK_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x16618920)
#define JEHFCPCBBBK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x166184A0)
#define JEHFCPCBBBK_PKJILGDPEGF_OFFSET UNITYSDK_OFFSET(0x16618620)

inline static constexpr unsigned int JEHFCPCBBBK_TypeDefinitionIndex = 70370;

	class JEHFCPCBBBK : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::MaterialPropertyBlock* GCGIDIIPDBC; // 0x18
		::System::Single PGMIOKKLHIE; // 0x20
		::System::Single NJOFPOAOGFA; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHFCPCBBBK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + JEHFCPCBBBK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHFCPCBBBK_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void BCKFELNFHCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHFCPCBBBK_BCKFELNFHCF_OFFSET))(this);
		}

		::System::Void PKJILGDPEGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHFCPCBBBK_PKJILGDPEGF_OFFSET))(this);
		}

		::RPG::Client::MonoEffectCharacterMoonHaloControl* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectCharacterMoonHaloControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHFCPCBBBK_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
