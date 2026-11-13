#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoFogVolume; }
namespace RPG::CustomRP { class FogVolume; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class MonoBehaviour; }

#define AKGOAGMFOFF_AFBHEPJCLBA_OFFSET UNITYSDK_OFFSET(0x19D5B530)
#define AKGOAGMFOFF_AMLPIFGDDKH_OFFSET UNITYSDK_OFFSET(0x19D5C640)
#define AKGOAGMFOFF_CTOR_OFFSET UNITYSDK_OFFSET(0x19D5C680)
#define AKGOAGMFOFF_HBAMMNHOAED_OFFSET UNITYSDK_OFFSET(0x19D5C4F0)
#define AKGOAGMFOFF_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x19D5B240)
#define AKGOAGMFOFF_KNJOEMEFKMD_OFFSET UNITYSDK_OFFSET(0x19D5B060)
#define AKGOAGMFOFF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19D5AE70)
#define AKGOAGMFOFF_LAKMDBCPIPF_OFFSET UNITYSDK_OFFSET(0x19D5B290)
#define AKGOAGMFOFF_MDCKFHDAPOF_OFFSET UNITYSDK_OFFSET(0x19D5B420)

inline static constexpr unsigned int AKGOAGMFOFF_TypeDefinitionIndex = 72775;

	class AKGOAGMFOFF : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Material* MOGLPFOBMDG; // 0x18
		::UnityEngine::MeshRenderer* DECKHIDFMNC; // 0x20
		::RPG::CustomRP::FogVolume* BHHLAMNIOOH; // 0x28
		::System::Boolean LFADEFIDHBO; // 0x30
		::System::Boolean BDPFHDBFIKL; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGOAGMFOFF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + AKGOAGMFOFF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void LAKMDBCPIPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGOAGMFOFF_LAKMDBCPIPF_OFFSET))(this);
		}

		::System::Void HBAMMNHOAED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGOAGMFOFF_HBAMMNHOAED_OFFSET))(this);
		}

		::System::Void AFBHEPJCLBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGOAGMFOFF_AFBHEPJCLBA_OFFSET))(this);
		}

		::UnityEngine::Material* MDCKFHDAPOF(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + AKGOAGMFOFF_MDCKFHDAPOF_OFFSET))(this, a1);
		}

		::System::Void AMLPIFGDDKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGOAGMFOFF_AMLPIFGDDKH_OFFSET))(this);
		}

		::System::Void KNJOEMEFKMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGOAGMFOFF_KNJOEMEFKMD_OFFSET))(this);
		}

		::RPG::Client::MonoFogVolume* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoFogVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGOAGMFOFF_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
