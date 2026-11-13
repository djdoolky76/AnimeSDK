#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongProjectileType.h"
#include "unitysdk/RPG/GameCore/PingPongSPSkillType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class EHOFEPBAHNK;
class OMPCEECHGJK;
namespace RPG::GameCore { class PingPongDropItemInfo; }
namespace RPG::GameCore { class PingPongGameConfig; }
namespace RPG::GameCore { class PingPongProjectileGroup; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHNJEBMGBEN_CTOR_OFFSET UNITYSDK_OFFSET(0x18BDDBD0)
#define EHNJEBMGBEN_DEPKIMKPCKI_OFFSET UNITYSDK_OFFSET(0x18BDE310)
#define EHNJEBMGBEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BDDCA0)
#define EHNJEBMGBEN_FCKNMIBHHLJ_OFFSET UNITYSDK_OFFSET(0x18BDDEB0)
#define EHNJEBMGBEN_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x18BDE2E0)
#define EHNJEBMGBEN_HCLBPLABKBO_OFFSET UNITYSDK_OFFSET(0x18BDE120)
#define EHNJEBMGBEN_HCPFICMDBDL_OFFSET UNITYSDK_OFFSET(0x18BDDCE0)
#define EHNJEBMGBEN_HMJLNOJFOIE_OFFSET UNITYSDK_OFFSET(0x18BDE300)
#define EHNJEBMGBEN_KIIABCILKMG_OFFSET UNITYSDK_OFFSET(0x18BDDF40)
#define EHNJEBMGBEN_LJDKBLMIGOK_OFFSET UNITYSDK_OFFSET(0x18BDDD90)
#define EHNJEBMGBEN_MAFJMDLEKIB_OFFSET UNITYSDK_OFFSET(0x18BDE330)
#define EHNJEBMGBEN_MPLKGAHJCNF_OFFSET UNITYSDK_OFFSET(0x18BDE340)
#define EHNJEBMGBEN_NIEJHDJCPHH_OFFSET UNITYSDK_OFFSET(0x18BDE320)
#define EHNJEBMGBEN_OHLLPBAEHJH_OFFSET UNITYSDK_OFFSET(0x18BDE350)
#define EHNJEBMGBEN_PMHIAKGODPI_OFFSET UNITYSDK_OFFSET(0x18BDE360)
#define EHNJEBMGBEN_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x18BDE2F0)

inline static constexpr unsigned int EHNJEBMGBEN_TypeDefinitionIndex = 78984;

	class EHNJEBMGBEN : public ::System::Object
	{
	public:
		::EHOFEPBAHNK* NHIKLMODJJB; // 0x10
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::RPG::GameCore::PingPongDropItemInfo*>>* MDMNDKJIPDH; // 0x18
		::RPG::GameCore::PingPongGameConfig* _GameConfig_k__BackingField; // 0x20
		::OMPCEECHGJK* OKOEHJDMLFM; // 0x28
		::System::Random* OLEEIPHBJKB; // 0x30
		::System::Int32 AGMPPDAOBLG; // 0x38
		::System::Void _ctor(::OMPCEECHGJK* a1, ::EHOFEPBAHNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMPCEECHGJK*, ::EHOFEPBAHNK*))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_DISPOSE_OFFSET))(this);
		}

		::System::String* HCPFICMDBDL(::RPG::GameCore::PingPongSPSkillType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::PingPongSPSkillType))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_HCPFICMDBDL_OFFSET))(this, a1);
		}

		::RPG::GameCore::PingPongProjectileGroup* LJDKBLMIGOK(::RPG::GameCore::PingPongSPSkillType a1)
		{
			return ((::RPG::GameCore::PingPongProjectileGroup*(*)(::PVOID, ::RPG::GameCore::PingPongSPSkillType))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_LJDKBLMIGOK_OFFSET))(this, a1);
		}

		::RPG::GameCore::PingPongProjectileGroup* FCKNMIBHHLJ(::RPG::GameCore::PingPongProjectileType a1)
		{
			return ((::RPG::GameCore::PingPongProjectileGroup*(*)(::PVOID, ::RPG::GameCore::PingPongProjectileType))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_FCKNMIBHHLJ_OFFSET))(this, a1);
		}

		::System::Void KIIABCILKMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_KIIABCILKMG_OFFSET))(this);
		}

		::System::Boolean HCLBPLABKBO(::System::Int32 a1, ::RPG::GameCore::PingPongDropItemInfo* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PingPongDropItemInfo*))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_HCLBPLABKBO_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PingPongGameConfig* get_GameConfig()
		{
			return ((::RPG::GameCore::PingPongGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_GET_GAMECONFIG_OFFSET))(this);
		}

		::System::Void set_GameConfig(::RPG::GameCore::PingPongGameConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongGameConfig*))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_SET_GAMECONFIG_OFFSET))(this, a1);
		}

		::System::Int32 HMJLNOJFOIE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_HMJLNOJFOIE_OFFSET))(this);
		}

		::System::Int32 DEPKIMKPCKI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_DEPKIMKPCKI_OFFSET))(this);
		}

		::System::Int32 NIEJHDJCPHH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_NIEJHDJCPHH_OFFSET))(this);
		}

		::System::Int32 MAFJMDLEKIB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_MAFJMDLEKIB_OFFSET))(this);
		}

		::System::Int32 MPLKGAHJCNF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_MPLKGAHJCNF_OFFSET))(this);
		}

		::System::Single OHLLPBAEHJH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_OHLLPBAEHJH_OFFSET))(this);
		}

		::System::Single PMHIAKGODPI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNJEBMGBEN_PMHIAKGODPI_OFFSET))(this);
		}

	};
