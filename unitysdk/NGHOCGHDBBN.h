#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGHOCGHDBBN_SelectTarget.h"
#include "unitysdk/RPG/Client/BattleInputProviderBlockReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace InControl { class PlayerAction; }
namespace RPG::Client { class BattleGamePhase; }
namespace System { class Object; }

#define NGHOCGHDBBN_AJKANKGLHJP_OFFSET UNITYSDK_OFFSET(0xC484E10)
#define NGHOCGHDBBN_BMLDIAMHFGB_OFFSET UNITYSDK_OFFSET(0xC485230)
#define NGHOCGHDBBN_CTOR_OFFSET UNITYSDK_OFFSET(0xC483B60)
#define NGHOCGHDBBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC485030)
#define NGHOCGHDBBN_EFFBJGFDMGG_OFFSET UNITYSDK_OFFSET(0xC485500)
#define NGHOCGHDBBN_FGKEBFKOLAN_OFFSET UNITYSDK_OFFSET(0xC484F20)
#define NGHOCGHDBBN_GFEBHNKPENL_OFFSET UNITYSDK_OFFSET(0xC4854B0)
#define NGHOCGHDBBN_GNALBDDCJHL_OFFSET UNITYSDK_OFFSET(0xC484880)
#define NGHOCGHDBBN_GOEJFKDIBCI_OFFSET UNITYSDK_OFFSET(0xC485190)
#define NGHOCGHDBBN_HDFNKPBPNMD_OFFSET UNITYSDK_OFFSET(0xC4852D0)
#define NGHOCGHDBBN_HLOJNAKJPBH_OFFSET UNITYSDK_OFFSET(0xC484C70)
#define NGHOCGHDBBN_MHNOHKEDOHO_OFFSET UNITYSDK_OFFSET(0xC484890)
#define NGHOCGHDBBN_NEMNJELJIGK_OFFSET UNITYSDK_OFFSET(0xC485330)
#define NGHOCGHDBBN_OJNLCOOELEP_OFFSET UNITYSDK_OFFSET(0xC4851E0)
#define NGHOCGHDBBN_PBEBJMPBBCE_OFFSET UNITYSDK_OFFSET(0xC484AF0)
#define NGHOCGHDBBN_PNFFEHHIJGH_OFFSET UNITYSDK_OFFSET(0xC485280)
#define NGHOCGHDBBN_TICK_OFFSET UNITYSDK_OFFSET(0xC483BD0)

inline static constexpr unsigned int NGHOCGHDBBN_TypeDefinitionIndex = 62693;

	class NGHOCGHDBBN : public ::System::Object
	{
	public:
		::RPG::Client::BattleGamePhase* JOJHDAKBNMF; // 0x10
		::System::Boolean NOPKMKHHBFH; // 0x18
		::System::Boolean IEKGNOEHEOO; // 0x19
		::System::Byte _padding0[0x2];
		::System::Single MNFMDLIMKEB; // 0x1C
		::System::Single BAGPJLJPKBP; // 0x20
		::System::UInt32 FEGIFKAGPMN; // 0x24
		::System::Single HHINGCOFADB; // 0x28
		// static const ::System::Object GNMLDPIMPJK; // 0x0
		::System::Void _ctor(::RPG::Client::BattleGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_DISPOSE_OFFSET))(this);
		}

		::System::Void GOEJFKDIBCI(::RPG::Client::BattleInputProviderBlockReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleInputProviderBlockReason))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_GOEJFKDIBCI_OFFSET))(this, a1);
		}

		::System::Void OJNLCOOELEP(::RPG::Client::BattleInputProviderBlockReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleInputProviderBlockReason))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_OJNLCOOELEP_OFFSET))(this, a1);
		}

		::System::Void BMLDIAMHFGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_BMLDIAMHFGB_OFFSET))(this);
		}

		::System::Boolean PNFFEHHIJGH(::RPG::Client::BattleInputProviderBlockReason a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleInputProviderBlockReason))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_PNFFEHHIJGH_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector2 HDFNKPBPNMD(::NGHOCGHDBBN_SelectTarget a1)
		{
			return ((::UnityEngine::Vector2(*)(::NGHOCGHDBBN_SelectTarget))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_HDFNKPBPNMD_OFFSET))(a1);
		}

		::System::Void NEMNJELJIGK(::NGHOCGHDBBN_SelectTarget a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGHOCGHDBBN_SelectTarget))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_NEMNJELJIGK_OFFSET))(this, a1);
		}

		::System::Void HLOJNAKJPBH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_HLOJNAKJPBH_OFFSET))(this, a1);
		}

		::System::Void AJKANKGLHJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_AJKANKGLHJP_OFFSET))(this);
		}

		::System::Void FGKEBFKOLAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_FGKEBFKOLAN_OFFSET))(this);
		}

		::System::Void PBEBJMPBBCE(::InControl::PlayerAction* a1, ::InControl::PlayerAction* a2, ::NGHOCGHDBBN_SelectTarget a3)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::PlayerAction*, ::NGHOCGHDBBN_SelectTarget))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_PBEBJMPBBCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MHNOHKEDOHO(::InControl::PlayerAction* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_MHNOHKEDOHO_OFFSET))(this, a1);
		}

		::System::Void GFEBHNKPENL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_GFEBHNKPENL_OFFSET))(this, a1);
		}

		::System::Boolean GNALBDDCJHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_GNALBDDCJHL_OFFSET))(this);
		}

		::System::Boolean EFFBJGFDMGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHOCGHDBBN_EFFBJGFDMGG_OFFSET))(this);
		}

	};
