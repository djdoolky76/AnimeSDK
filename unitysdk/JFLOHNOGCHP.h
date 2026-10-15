#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGIFDHGNHIP.h"
class KFELGAIGHAP;
class NGFHCJIAOLH;
namespace RPG::GameCore { class ChenLingFesLevelAbilityConfig; }
namespace RPG::GameCore { class TaskContext; }

#define JFLOHNOGCHP_CTOR_OFFSET UNITYSDK_OFFSET(0x166564A0)
#define JFLOHNOGCHP_DOAMGEFCFDF_OFFSET UNITYSDK_OFFSET(0x16656B50)
#define JFLOHNOGCHP_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0x166569F0)
#define JFLOHNOGCHP_GET_ABILITYID_OFFSET UNITYSDK_OFFSET(0x16657240)
#define JFLOHNOGCHP_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16657220)
#define JFLOHNOGCHP_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x16656890)
#define JFLOHNOGCHP_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x16656F50)
#define JFLOHNOGCHP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16656BF0)
#define JFLOHNOGCHP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16656BB0)
#define JFLOHNOGCHP_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x16656870)
#define JFLOHNOGCHP_SET_ABILITYID_OFFSET UNITYSDK_OFFSET(0x16657250)
#define JFLOHNOGCHP_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16657230)

inline static constexpr unsigned int JFLOHNOGCHP_TypeDefinitionIndex = 77713;

	class JFLOHNOGCHP : public ::AGIFDHGNHIP
	{
	public:
		::KFELGAIGHAP* EFMKPFCEKCL; // 0x18
		::KFELGAIGHAP* GEAKNAPJGFD; // 0x20
		::KFELGAIGHAP* EELHJCEEBNC; // 0x28
		::KFELGAIGHAP* LEOIENNPNLP; // 0x30
		::NGFHCJIAOLH* EENKEBPDHCN; // 0x38
		::RPG::GameCore::ChenLingFesLevelAbilityConfig* _Config_k__BackingField; // 0x40
		::System::Single PJCPJFBOPEA; // 0x48
		::System::Single OFDKFNDPEAL; // 0x4C
		::System::Int32 _AbilityID_k__BackingField; // 0x50
		::System::Single MMOCIIJHFHL; // 0x54
		::System::Single DAFAMCIPHDE; // 0x58
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
