#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class CharacterEffect; }
namespace RPG::Client { class MonoEffectPluginCharaEffectDataTransfer; }
namespace UnityEngine { class MonoBehaviour; }

#define PIOFNHHMCNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC274D90)
#define PIOFNHHMCNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2749E0)
#define PIOFNHHMCNJ_FDCLPOKMFJM_OFFSET UNITYSDK_OFFSET(0xC274D40)
#define PIOFNHHMCNJ_FLKCDIAECBO_OFFSET UNITYSDK_OFFSET(0xC274840)
#define PIOFNHHMCNJ_GBMHPNMMOFK_OFFSET UNITYSDK_OFFSET(0xC274AB0)
#define PIOFNHHMCNJ_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xC274A50)
#define PIOFNHHMCNJ_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xC274CC0)
#define PIOFNHHMCNJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC2747C0)
#define PIOFNHHMCNJ_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xC274D00)

inline static constexpr unsigned int PIOFNHHMCNJ_TypeDefinitionIndex = 69869;

	class PIOFNHHMCNJ : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::Client::CharacterEffect* HAHKDGACPIL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOFNHHMCNJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + PIOFNHHMCNJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOFNHHMCNJ_DISPOSE_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIOFNHHMCNJ_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOFNHHMCNJ_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOFNHHMCNJ_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void FLKCDIAECBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOFNHHMCNJ_FLKCDIAECBO_OFFSET))(this);
		}

		::System::Void GBMHPNMMOFK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIOFNHHMCNJ_GBMHPNMMOFK_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginCharaEffectDataTransfer* FDCLPOKMFJM()
		{
			return ((::RPG::Client::MonoEffectPluginCharaEffectDataTransfer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOFNHHMCNJ_FDCLPOKMFJM_OFFSET))(this);
		}

	};
