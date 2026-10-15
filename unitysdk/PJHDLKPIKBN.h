#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class AAIKGGJKMID;
class EBBJGCKIBAA;
class EKFMIDBJDIA;
class KPGICHGAMPJ;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define PJHDLKPIKBN_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xC27FF10)
#define PJHDLKPIKBN_CTOR_OFFSET UNITYSDK_OFFSET(0xC27F4C0)
#define PJHDLKPIKBN_GHCLHCKMGMB_OFFSET UNITYSDK_OFFSET(0xC2801C0)
#define PJHDLKPIKBN_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0xC2800F0)
#define PJHDLKPIKBN_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xC27F4D0)
#define PJHDLKPIKBN_NICNEMHHKFG_OFFSET UNITYSDK_OFFSET(0xC27F940)
#define PJHDLKPIKBN_TICK_OFFSET UNITYSDK_OFFSET(0xC280070)

inline static constexpr unsigned int PJHDLKPIKBN_TypeDefinitionIndex = 56252;

	class PJHDLKPIKBN : public ::HBPNHCICJGF
	{
	public:
		::RPG::GameCore::GameEntity* LLIMPJFCMKF; // 0x28
		::KPGICHGAMPJ* LDIMEFMNHKK; // 0x30
		::AAIKGGJKMID* CHNEONHCDAH; // 0x38
		::System::UInt32 GNFNLBPFEII; // 0x40
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + PJHDLKPIKBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHDLKPIKBN_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHDLKPIKBN_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJHDLKPIKBN_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHDLKPIKBN_INOMGFMHLDO_OFFSET))(this);
		}

		::System::Void NICNEMHHKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHDLKPIKBN_NICNEMHHKFG_OFFSET))(this);
		}

		::System::Void GHCLHCKMGMB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + PJHDLKPIKBN_GHCLHCKMGMB_OFFSET))(this, a1);
		}

	};
