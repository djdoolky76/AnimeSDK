#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginProgress; }
namespace UnityEngine { class MonoBehaviour; }

#define LMGBJIFBAAN_CTOR_OFFSET UNITYSDK_OFFSET(0xC020A10)
#define LMGBJIFBAAN_DKFEKHAJNGN_OFFSET UNITYSDK_OFFSET(0xC0204F0)
#define LMGBJIFBAAN_EJDAKAECODE_OFFSET UNITYSDK_OFFSET(0xC0208C0)
#define LMGBJIFBAAN_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xC020480)
#define LMGBJIFBAAN_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xC0209C0)
#define LMGBJIFBAAN_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xC020430)
#define LMGBJIFBAAN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC0203C0)
#define LMGBJIFBAAN_OLBAJJAGCAM_OFFSET UNITYSDK_OFFSET(0xC020600)

inline static constexpr unsigned int LMGBJIFBAAN_TypeDefinitionIndex = 71852;

	class LMGBJIFBAAN : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Single HJKJOLPBAOO; // 0x18
		::System::Single GHGGLAKNLAD; // 0x1C
		::System::Single GDLCJLFBFPG; // 0x20
		::System::Single KCLBCNGCLHJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGBJIFBAAN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + LMGBJIFBAAN_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGBJIFBAAN_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMGBJIFBAAN_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void EJDAKAECODE(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LMGBJIFBAAN_EJDAKAECODE_OFFSET))(this, a1, a2);
		}

		::System::Void DKFEKHAJNGN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMGBJIFBAAN_DKFEKHAJNGN_OFFSET))(this, a1);
		}

		::System::Void OLBAJJAGCAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGBJIFBAAN_OLBAJJAGCAM_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginProgress* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGBJIFBAAN_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
