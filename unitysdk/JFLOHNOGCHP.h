#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGIFDHGNHIP.h"
class KFELGAIGHAP;
class NGFHCJIAOLH;
namespace RPG::GameCore { class ChenLingFesLevelAbilityConfig; }
namespace RPG::GameCore { class TaskContext; }

#define JFLOHNOGCHP_CTOR_OFFSET UNITYSDK_OFFSET(0x16642770)
#define JFLOHNOGCHP_DOAMGEFCFDF_OFFSET UNITYSDK_OFFSET(0x16642E20)
#define JFLOHNOGCHP_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0x16642CC0)
#define JFLOHNOGCHP_GET_ABILITYID_OFFSET UNITYSDK_OFFSET(0x16643510)
#define JFLOHNOGCHP_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x166434F0)
#define JFLOHNOGCHP_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x16642B60)
#define JFLOHNOGCHP_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x16643220)
#define JFLOHNOGCHP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16642EC0)
#define JFLOHNOGCHP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16642E80)
#define JFLOHNOGCHP_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x16642B40)
#define JFLOHNOGCHP_SET_ABILITYID_OFFSET UNITYSDK_OFFSET(0x16643520)
#define JFLOHNOGCHP_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16643500)

inline static constexpr unsigned int JFLOHNOGCHP_TypeDefinitionIndex = 77712;

	class JFLOHNOGCHP : public ::AGIFDHGNHIP
	{
	public:
		::RPG::GameCore::ChenLingFesLevelAbilityConfig* _Config_k__BackingField; // 0x18
		::KFELGAIGHAP* EFMKPFCEKCL; // 0x20
		::NGFHCJIAOLH* EENKEBPDHCN; // 0x28
		::KFELGAIGHAP* EELHJCEEBNC; // 0x30
		::KFELGAIGHAP* LEOIENNPNLP; // 0x38
		::KFELGAIGHAP* GEAKNAPJGFD; // 0x40
		::System::Int32 _AbilityID_k__BackingField; // 0x48
		::System::Single PJCPJFBOPEA; // 0x4C
		::System::Single OFDKFNDPEAL; // 0x50
		::System::Single DAFAMCIPHDE; // 0x54
		::System::Single MMOCIIJHFHL; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChenLingFesLevelAbilityConfig* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChenLingFesLevelAbilityConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + JFLOHNOGCHP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHNOGCHP_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHNOGCHP_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHNOGCHP_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void DOAMGEFCFDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHNOGCHP_DOAMGEFCFDF_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHNOGCHP_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFLOHNOGCHP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHNOGCHP_JKCPLEJCBML_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingFesLevelAbilityConfig* get_Config()
		{
			return ((::RPG::GameCore::ChenLingFesLevelAbilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHNOGCHP_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ChenLingFesLevelAbilityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesLevelAbilityConfig*))((::PBYTE)hIl2Cpp + JFLOHNOGCHP_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Int32 get_AbilityID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHNOGCHP_GET_ABILITYID_OFFSET))(this);
		}

		::System::Void set_AbilityID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JFLOHNOGCHP_SET_ABILITYID_OFFSET))(this, a1);
		}

	};
