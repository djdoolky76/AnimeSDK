#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"
class BNPCGCMCEOH;
namespace RPG::Client { class BattleAlertParam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NHHJIBPNBHN_CTOR_OFFSET UNITYSDK_OFFSET(0xBBC58E0)
#define NHHJIBPNBHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBC55C0)
#define NHHJIBPNBHN_DNFGLHMKGOB_OFFSET UNITYSDK_OFFSET(0xBBC5650)
#define NHHJIBPNBHN_HPFFLCOIBAJ_OFFSET UNITYSDK_OFFSET(0xBBC5830)

inline static constexpr unsigned int NHHJIBPNBHN_TypeDefinitionIndex = 71418;

	class NHHJIBPNBHN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillType, ::BNPCGCMCEOH*>* PNCMFGPEAMF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHJIBPNBHN_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHJIBPNBHN_DISPOSE_OFFSET))(this);
		}

		::System::Void DNFGLHMKGOB(::RPG::Client::BattleAlertParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAlertParam*))((::PBYTE)hIl2Cpp + NHHJIBPNBHN_DNFGLHMKGOB_OFFSET))(this, a1);
		}

		::BNPCGCMCEOH* HPFFLCOIBAJ(::RPG::GameCore::SkillType a1)
		{
			return ((::BNPCGCMCEOH*(*)(::PVOID, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + NHHJIBPNBHN_HPFFLCOIBAJ_OFFSET))(this, a1);
		}

	};
