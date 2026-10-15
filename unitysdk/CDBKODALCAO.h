#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
class FABMDCOFHCG;
class PEGKGENFIJO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelCharacterCreate; }
namespace RPG::GameCore { class LevelPlayerCreateFnishAdv; }
namespace System { class String; }

#define CDBKODALCAO_AHLACABLBGA_OFFSET UNITYSDK_OFFSET(0xC75D8B0)
#define CDBKODALCAO_CTOR_OFFSET UNITYSDK_OFFSET(0xC75D8C0)
#define CDBKODALCAO_DAPLFMNNABM_OFFSET UNITYSDK_OFFSET(0xC75D850)
#define CDBKODALCAO_DKKALHNOHDI_OFFSET UNITYSDK_OFFSET(0xC75D4B0)
#define CDBKODALCAO_DLADHAAGKKI_OFFSET UNITYSDK_OFFSET(0xC75D1F0)
#define CDBKODALCAO_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xC75BB90)
#define CDBKODALCAO_DPJCAOMEKPO_OFFSET UNITYSDK_OFFSET(0xC75D7E0)
#define CDBKODALCAO_JHGPNAAPMPA_OFFSET UNITYSDK_OFFSET(0xC75D120)
#define CDBKODALCAO_JMNAGPELANO_OFFSET UNITYSDK_OFFSET(0xC75D630)
#define CDBKODALCAO_LJFPGILKFAC_OFFSET UNITYSDK_OFFSET(0xC75D180)
#define CDBKODALCAO_NHGHFGAKPPB_OFFSET UNITYSDK_OFFSET(0xC75D290)
#define CDBKODALCAO_NMOEPOMMDIK_1_OFFSET UNITYSDK_OFFSET(0xC75D0C0)
#define CDBKODALCAO_NMOEPOMMDIK_OFFSET UNITYSDK_OFFSET(0xC75D070)
#define CDBKODALCAO_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xC75B9B0)
#define CDBKODALCAO_ONPNEJEAMGO_OFFSET UNITYSDK_OFFSET(0xC75CF50)
#define CDBKODALCAO_ONUNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xC75BAA0)
#define CDBKODALCAO_PGPEJKILMLE_OFFSET UNITYSDK_OFFSET(0xC75C1E0)
#define CDBKODALCAO_POBBLJGIING_OFFSET UNITYSDK_OFFSET(0xC75C060)

inline static constexpr unsigned int CDBKODALCAO_TypeDefinitionIndex = 56240;

	class CDBKODALCAO
	{
	public:
		::Il2CppArray<::PEGKGENFIJO*>* LCIPKDKMGHO; // 0x28
		::FABMDCOFHCG* CLPDFLKFBPO; // 0x30
		::System::Int32 MMBPPCEMDNN; // 0x38
		::System::Boolean PHCJFBMEAGM; // 0x3C
		// static const ::System::String* KGALHDAJCPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBKODALCAO_CTOR_OFFSET))(this);
		}

		::System::Void OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBKODALCAO_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void OnUninitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBKODALCAO_ONUNINITIALIZE_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::FABMDCOFHCG* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::FABMDCOFHCG*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CDBKODALCAO_DLAILGNMFGI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NMOEPOMMDIK(::RPG::GameCore::LevelPlayerCreateFnishAdv* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPlayerCreateFnishAdv*))((::PBYTE)hIl2Cpp + CDBKODALCAO_NMOEPOMMDIK_OFFSET))(this, a1);
		}

		::System::Void NMOEPOMMDIK_1(::RPG::GameCore::LevelCharacterCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterCreate*))((::PBYTE)hIl2Cpp + CDBKODALCAO_NMOEPOMMDIK_1_OFFSET))(this, a1);
		}

		::System::Void JHGPNAAPMPA(::RPG::GameCore::LevelBattleEventCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CDBKODALCAO_JHGPNAAPMPA_OFFSET))(this, a1);
		}

		::System::Void LJFPGILKFAC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CDBKODALCAO_LJFPGILKFAC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ONPNEJEAMGO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CDBKODALCAO_ONPNEJEAMGO_OFFSET))(this, a1);
		}

		::System::Void DLADHAAGKKI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CDBKODALCAO_DLADHAAGKKI_OFFSET))(this, a1);
		}

		::System::Void PGPEJKILMLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBKODALCAO_PGPEJKILMLE_OFFSET))(this);
		}

		::System::Void NHGHFGAKPPB(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CDBKODALCAO_NHGHFGAKPPB_OFFSET))(this, a1, a2);
		}

		::System::Int32 DKKALHNOHDI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CDBKODALCAO_DKKALHNOHDI_OFFSET))(this, a1);
		}

		::System::Void JMNAGPELANO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CDBKODALCAO_JMNAGPELANO_OFFSET))(this, a1);
		}

		::System::Void POBBLJGIING(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CDBKODALCAO_POBBLJGIING_OFFSET))(this, a1);
		}

		::PEGKGENFIJO* DPJCAOMEKPO(::System::Int32 a1)
		{
			return ((::PEGKGENFIJO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CDBKODALCAO_DPJCAOMEKPO_OFFSET))(this, a1);
		}

		::PEGKGENFIJO* DAPLFMNNABM()
		{
			return ((::PEGKGENFIJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBKODALCAO_DAPLFMNNABM_OFFSET))(this);
		}

		::System::Int32 AHLACABLBGA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBKODALCAO_AHLACABLBGA_OFFSET))(this);
		}

	};
