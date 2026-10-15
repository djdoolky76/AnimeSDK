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

#define AEEKMHCMBPL_ABIGJLFMFLC_OFFSET UNITYSDK_OFFSET(0xB14D6F0)
#define AEEKMHCMBPL_AIBLKCJHCCC_OFFSET UNITYSDK_OFFSET(0xB14CD30)
#define AEEKMHCMBPL_CIOJDANBNJE_OFFSET UNITYSDK_OFFSET(0xB14D1B0)
#define AEEKMHCMBPL_CTOR_OFFSET UNITYSDK_OFFSET(0xB14CC60)
#define AEEKMHCMBPL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB14CDA0)
#define AEEKMHCMBPL_GHINAPEMCHG_OFFSET UNITYSDK_OFFSET(0xB14CDF0)
#define AEEKMHCMBPL_KGKBLKFGIGF_OFFSET UNITYSDK_OFFSET(0xB14CF90)
#define AEEKMHCMBPL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB14CE40)
#define AEEKMHCMBPL_LAKAPHCEIIC_OFFSET UNITYSDK_OFFSET(0xB14D530)
#define AEEKMHCMBPL_LOFAPMKOANO_OFFSET UNITYSDK_OFFSET(0xB14D750)
#define AEEKMHCMBPL_MLLLOKGGFPI_OFFSET UNITYSDK_OFFSET(0xB14CED0)
#define AEEKMHCMBPL_NLDOADDIDIO_OFFSET UNITYSDK_OFFSET(0xB14D5D0)

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
