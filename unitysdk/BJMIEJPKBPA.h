#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPMNBIGNDMO.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define BJMIEJPKBPA_CLEAR_OFFSET UNITYSDK_OFFSET(0xB7A40F0)
#define BJMIEJPKBPA_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A4490)
#define BJMIEJPKBPA_EMKKBNIPBCH_OFFSET UNITYSDK_OFFSET(0xB7A3E00)
#define BJMIEJPKBPA_HLAMABIMDLN_OFFSET UNITYSDK_OFFSET(0xB7A4400)
#define BJMIEJPKBPA_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0xB7A3D50)
#define BJMIEJPKBPA_KPBOMHKLJMM_OFFSET UNITYSDK_OFFSET(0xB7A4230)
#define BJMIEJPKBPA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB7A3DA0)
#define BJMIEJPKBPA_PIJGJLABIFO_OFFSET UNITYSDK_OFFSET(0xB7A4180)
#define BJMIEJPKBPA_POMAEIJODAB_OFFSET UNITYSDK_OFFSET(0xB7A4070)

inline static constexpr unsigned int BJMIEJPKBPA_TypeDefinitionIndex = 70869;

	class BJMIEJPKBPA : public ::NPMNBIGNDMO
	{
	public:
		::UnityEngine::ParticleSystem* MFHLLHDECAC; // 0x50
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x58
		::System::Boolean LDLIFHFJFLJ; // 0x60
		::System::Byte _padding0[0x3];
		::System::UInt32 OFMIHKBOOHH; // 0x64
		// static const ::System::String* LDFPLNPEBLA; // 0x0
		// static const ::System::String* CKPKHDCLLID; // 0x0
		// static const ::System::Object AMHHMFEFPJC; // 0x0
		// static const ::System::Object DICBEILBKML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMIEJPKBPA_CTOR_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BJMIEJPKBPA_JDEKJLHMPLG_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BJMIEJPKBPA_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void POMAEIJODAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMIEJPKBPA_POMAEIJODAB_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMIEJPKBPA_CLEAR_OFFSET))(this);
		}

		::System::Void EMKKBNIPBCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMIEJPKBPA_EMKKBNIPBCH_OFFSET))(this);
		}

		::System::Void KPBOMHKLJMM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BJMIEJPKBPA_KPBOMHKLJMM_OFFSET))(this, a1);
		}

		::System::Void PIJGJLABIFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMIEJPKBPA_PIJGJLABIFO_OFFSET))(this);
		}

		::System::Void HLAMABIMDLN(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + BJMIEJPKBPA_HLAMABIMDLN_OFFSET))(this, a1, a2);
		}

	};
