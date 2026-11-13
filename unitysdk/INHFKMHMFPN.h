#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
class CLFIGBPHLHI;
class INHFKMHMFPN;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceMonoView; }

#define INHFKMHMFPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5EF7F0)
#define INHFKMHMFPN_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x1A5EF6E0)
#define INHFKMHMFPN_ILOFNCKLLKG_OFFSET UNITYSDK_OFFSET(0x1A5EF4B0)
#define INHFKMHMFPN_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x1A5EF7A0)
#define INHFKMHMFPN_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A5EF560)

inline static constexpr unsigned int INHFKMHMFPN_TypeDefinitionIndex = 80902;

	class INHFKMHMFPN : public ::AJHHFMBOCEN
	{
	public:
		::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView* CFKHNPGEAJA; // 0x20
		::CLFIGBPHLHI* GCFJDABCFGK; // 0x28
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
