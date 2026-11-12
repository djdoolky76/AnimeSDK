#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPICNGFLLCA.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityManualTriggerType.h"
class FBCJBMKPDEH;
class KFELGAIGHAP;
class LACOFPCJAFI;
class NAOKFLDEDBJ;
class NBHAKGBHPOE;
class OHHPOGMFPBF;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class AdventureAbilityConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define AEEKMHCMBPL_ABIGJLFMFLC_OFFSET UNITYSDK_OFFSET(0xB7B2C40)
#define AEEKMHCMBPL_AIBLKCJHCCC_OFFSET UNITYSDK_OFFSET(0xB7B22B0)
#define AEEKMHCMBPL_CIOJDANBNJE_OFFSET UNITYSDK_OFFSET(0xB7B2730)
#define AEEKMHCMBPL_CTOR_OFFSET UNITYSDK_OFFSET(0xB7B21E0)
#define AEEKMHCMBPL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7B2320)
#define AEEKMHCMBPL_GHINAPEMCHG_OFFSET UNITYSDK_OFFSET(0xB7B2370)
#define AEEKMHCMBPL_KGKBLKFGIGF_OFFSET UNITYSDK_OFFSET(0xB7B2510)
#define AEEKMHCMBPL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB7B23C0)
#define AEEKMHCMBPL_LAKAPHCEIIC_OFFSET UNITYSDK_OFFSET(0xB7B2A80)
#define AEEKMHCMBPL_LOFAPMKOANO_OFFSET UNITYSDK_OFFSET(0xB7B2CA0)
#define AEEKMHCMBPL_MLLLOKGGFPI_OFFSET UNITYSDK_OFFSET(0xB7B2450)
#define AEEKMHCMBPL_NLDOADDIDIO_OFFSET UNITYSDK_OFFSET(0xB7B2B20)

inline static constexpr unsigned int AEEKMHCMBPL_TypeDefinitionIndex = 55573;

	class AEEKMHCMBPL : public ::HPICNGFLLCA
	{
	public:
		::KFELGAIGHAP* CKOEPEAPNAC; // 0x90
		::FBCJBMKPDEH* AJHIEPNBIKM; // 0x98
		::System::Int32 KJHKGCBPNMB; // 0xA0
		::System::UInt32 GEEJAJPPGDG; // 0xA4
		::System::Void _ctor(::RPG::GameCore::AbilityComponent* a1, ::RPG::GameCore::AdventureAbilityConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*, ::RPG::GameCore::AdventureAbilityConfig*))((::PBYTE)hIl2Cpp + AEEKMHCMBPL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void AIBLKCJHCCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEEKMHCMBPL_AIBLKCJHCCC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEEKMHCMBPL_DISPOSE_OFFSET))(this);
		}

		::System::Void GHINAPEMCHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEEKMHCMBPL_GHINAPEMCHG_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEEKMHCMBPL_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void MLLLOKGGFPI(::FBCJBMKPDEH* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FBCJBMKPDEH*, ::System::String*))((::PBYTE)hIl2Cpp + AEEKMHCMBPL_MLLLOKGGFPI_OFFSET))(this, a1, a2);
		}

		::System::Void KGKBLKFGIGF(::FBCJBMKPDEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBCJBMKPDEH*))((::PBYTE)hIl2Cpp + AEEKMHCMBPL_KGKBLKFGIGF_OFFSET))(this, a1);
		}

		::System::Void CIOJDANBNJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEEKMHCMBPL_CIOJDANBNJE_OFFSET))(this);
		}

		::System::Void LAKAPHCEIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEEKMHCMBPL_LAKAPHCEIIC_OFFSET))(this);
		}

		::NAOKFLDEDBJ* NLDOADDIDIO(::RPG::GameCore::ProjectileData* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::NBHAKGBHPOE* a4, ::OHHPOGMFPBF* a5, ::LACOFPCJAFI* a6, ::System::Boolean a7, ::RPG::GameCore::NewProjectileConfig* a8)
		{
			return ((::NAOKFLDEDBJ*(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::NBHAKGBHPOE*, ::OHHPOGMFPBF*, ::LACOFPCJAFI*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + AEEKMHCMBPL_NLDOADDIDIO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::RPG::GameCore::TaskContext* ABIGJLFMFLC()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEEKMHCMBPL_ABIGJLFMFLC_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAbilityManualTriggerType LOFAPMKOANO()
		{
			return ((::RPG::GameCore::AdventureAbilityManualTriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + AEEKMHCMBPL_LOFAPMKOANO_OFFSET))(this);
		}

	};
