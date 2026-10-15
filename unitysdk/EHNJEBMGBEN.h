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

#define EHNJEBMGBEN_CTOR_OFFSET UNITYSDK_OFFSET(0x154ACF80)
#define EHNJEBMGBEN_DEPKIMKPCKI_OFFSET UNITYSDK_OFFSET(0x154AD6C0)
#define EHNJEBMGBEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154AD050)
#define EHNJEBMGBEN_FCKNMIBHHLJ_OFFSET UNITYSDK_OFFSET(0x154AD260)
#define EHNJEBMGBEN_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x154AD690)
#define EHNJEBMGBEN_HCLBPLABKBO_OFFSET UNITYSDK_OFFSET(0x154AD4D0)
#define EHNJEBMGBEN_HCPFICMDBDL_OFFSET UNITYSDK_OFFSET(0x154AD090)
#define EHNJEBMGBEN_HMJLNOJFOIE_OFFSET UNITYSDK_OFFSET(0x154AD6B0)
#define EHNJEBMGBEN_KIIABCILKMG_OFFSET UNITYSDK_OFFSET(0x154AD2F0)
#define EHNJEBMGBEN_LJDKBLMIGOK_OFFSET UNITYSDK_OFFSET(0x154AD140)
#define EHNJEBMGBEN_MAFJMDLEKIB_OFFSET UNITYSDK_OFFSET(0x154AD6E0)
#define EHNJEBMGBEN_MPLKGAHJCNF_OFFSET UNITYSDK_OFFSET(0x154AD6F0)
#define EHNJEBMGBEN_NIEJHDJCPHH_OFFSET UNITYSDK_OFFSET(0x154AD6D0)
#define EHNJEBMGBEN_OHLLPBAEHJH_OFFSET UNITYSDK_OFFSET(0x154AD700)
#define EHNJEBMGBEN_PMHIAKGODPI_OFFSET UNITYSDK_OFFSET(0x154AD710)
#define EHNJEBMGBEN_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x154AD6A0)

inline static constexpr unsigned int EHNJEBMGBEN_TypeDefinitionIndex = 76653;

	class EHNJEBMGBEN : public ::System::Object
	{
	public:
		::RPG::GameCore::PingPongGameConfig* _GameConfig_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::RPG::GameCore::PingPongDropItemInfo*>>* MDMNDKJIPDH; // 0x18
		::OMPCEECHGJK* OKOEHJDMLFM; // 0x20
		::System::Random* OLEEIPHBJKB; // 0x28
		::EHOFEPBAHNK* NHIKLMODJJB; // 0x30
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
