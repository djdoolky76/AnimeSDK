#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
class CLFIGBPHLHI;
class INHFKMHMFPN;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceMonoView; }

#define INHFKMHMFPN_CTOR_OFFSET UNITYSDK_OFFSET(0x164EF8D0)
#define INHFKMHMFPN_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x164EF7C0)
#define INHFKMHMFPN_ILOFNCKLLKG_OFFSET UNITYSDK_OFFSET(0x164EF590)
#define INHFKMHMFPN_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x164EF880)
#define INHFKMHMFPN_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x164EF640)

	class INHFKMHMFPN : public ::AJHHFMBOCEN
	{
	public:
		::CLFIGBPHLHI* GCFJDABCFGK; // 0x20
		::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView* CFKHNPGEAJA; // 0x28
		::System::Single BPMNMDJIPLE; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INHFKMHMFPN_CTOR_OFFSET))(this);
		}

		static ::INHFKMHMFPN* ILOFNCKLLKG(::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView* a1, ::System::Single a2)
		{
			return ((::INHFKMHMFPN*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView*, ::System::Single))((::PBYTE)hIl2Cpp + INHFKMHMFPN_ILOFNCKLLKG_OFFSET))(a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INHFKMHMFPN_ONEXECUTE_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INHFKMHMFPN_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INHFKMHMFPN_LGAOOKPFIMF_OFFSET))(this);
		}

	};
