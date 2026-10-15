#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameLevelHeartDialDialogueConfig; }
namespace RPG::GameCore { class GameLevelHeartDialPerformance; }
namespace RPG::GameCore { class HeartDialDialogueRow; }
namespace RPG::GameCore { class LevelDialogInfo; }
namespace System { class String; }

#define LOBFFHLFKOL_CTOR_OFFSET UNITYSDK_OFFSET(0xB7F2360)
#define LOBFFHLFKOL_DPCNJGBBPAE_OFFSET UNITYSDK_OFFSET(0xB7F20F0)
#define LOBFFHLFKOL_FOAEGOFMJEP_OFFSET UNITYSDK_OFFSET(0xB7F2370)
#define LOBFFHLFKOL_GCEKGHKENPH_OFFSET UNITYSDK_OFFSET(0xB7F2140)
#define LOBFFHLFKOL_GDEMOPIEDKG_OFFSET UNITYSDK_OFFSET(0xB7F21B0)
#define LOBFFHLFKOL_HPINPAAIDAN_OFFSET UNITYSDK_OFFSET(0xB7F2490)
#define LOBFFHLFKOL_IOLENFJNFPD_OFFSET UNITYSDK_OFFSET(0xB7F2050)
#define LOBFFHLFKOL_JNLGNKOGIEP_OFFSET UNITYSDK_OFFSET(0xB7F20A0)
#define LOBFFHLFKOL_KGCNKBLNMKE_OFFSET UNITYSDK_OFFSET(0xB7F2780)
#define LOBFFHLFKOL_MAOJLCEGAKB_OFFSET UNITYSDK_OFFSET(0xB7F2420)
#define LOBFFHLFKOL_MLDKKFELLMA_OFFSET UNITYSDK_OFFSET(0xB7F23C0)
#define LOBFFHLFKOL_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0xB7F2320)
#define LOBFFHLFKOL_NEJAOLMDOKJ_OFFSET UNITYSDK_OFFSET(0xB7F2650)
#define LOBFFHLFKOL_OEKIBBHDJGP_OFFSET UNITYSDK_OFFSET(0xB7F2280)
#define LOBFFHLFKOL_PHIBHHKLHJG_OFFSET UNITYSDK_OFFSET(0xB7F22E0)
#define LOBFFHLFKOL_PIBAOLPLMNJ_OFFSET UNITYSDK_OFFSET(0xB7F2220)

	class LOBFFHLFKOL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameLevelHeartDialDialogueConfig* BFBKGECIOKE; // 0x10
		::RPG::GameCore::HeartDialDialogueRow* LGONEOGNDPM; // 0x18
		::System::Boolean CMOBFLHAFON; // 0x20
		::System::Void _ctor(::RPG::GameCore::HeartDialDialogueRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeartDialDialogueRow*))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 IOLENFJNFPD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_IOLENFJNFPD_OFFSET))(this);
		}

		::System::UInt32 JNLGNKOGIEP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_JNLGNKOGIEP_OFFSET))(this);
		}

		::System::UInt32 DPCNJGBBPAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_DPCNJGBBPAE_OFFSET))(this);
		}

		::System::String* GCEKGHKENPH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_GCEKGHKENPH_OFFSET))(this);
		}

		::System::String* GDEMOPIEDKG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_GDEMOPIEDKG_OFFSET))(this);
		}

		::System::Boolean PIBAOLPLMNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_PIBAOLPLMNJ_OFFSET))(this);
		}

		::System::Boolean OEKIBBHDJGP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_OEKIBBHDJGP_OFFSET))(this);
		}

		::System::Boolean PHIBHHKLHJG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_PHIBHHKLHJG_OFFSET))(this);
		}

		::RPG::GameCore::HeartDialDialogueRow* MMFEEJAHPLJ()
		{
			return ((::RPG::GameCore::HeartDialDialogueRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_MMFEEJAHPLJ_OFFSET))(this);
		}

		::System::Void FOAEGOFMJEP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_FOAEGOFMJEP_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelDialogInfo* MLDKKFELLMA()
		{
			return ((::RPG::GameCore::LevelDialogInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_MLDKKFELLMA_OFFSET))(this);
		}

		::RPG::GameCore::GameLevelHeartDialPerformance* MAOJLCEGAKB(::System::Boolean a1)
		{
			return ((::RPG::GameCore::GameLevelHeartDialPerformance*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_MAOJLCEGAKB_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameLevelHeartDialPerformance* HPINPAAIDAN()
		{
			return ((::RPG::GameCore::GameLevelHeartDialPerformance*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_HPINPAAIDAN_OFFSET))(this);
		}

		::System::Void NEJAOLMDOKJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_NEJAOLMDOKJ_OFFSET))(this, a1, a2);
		}

		::System::Void KGCNKBLNMKE(::RPG::GameCore::GameLevelHeartDialDialogueConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameLevelHeartDialDialogueConfig*))((::PBYTE)hIl2Cpp + LOBFFHLFKOL_KGCNKBLNMKE_OFFSET))(this, a1);
		}

	};
