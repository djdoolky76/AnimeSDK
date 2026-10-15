#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class DMEPKAKPGBO;
class EIKBBAPBBAB;
class HFFAFBIGNKP;
class JPKJNNKMIGJ;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelCharacterCreate; }
namespace RPG::GameCore { class LevelEntitySPChange; }
namespace RPG::GameCore { class LevelEntityUseSkill; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLHPGILEONH_ABKBLPGPDIO_OFFSET UNITYSDK_OFFSET(0xB528A60)
#define KLHPGILEONH_BGJGNFHGLBC_OFFSET UNITYSDK_OFFSET(0xB528440)
#define KLHPGILEONH_CTOR_OFFSET UNITYSDK_OFFSET(0xB529C60)
#define KLHPGILEONH_EANGFHIEFMP_OFFSET UNITYSDK_OFFSET(0xB529170)
#define KLHPGILEONH_EIPCGGPHELP_OFFSET UNITYSDK_OFFSET(0xB5289D0)
#define KLHPGILEONH_EPPOMLEFPOI_OFFSET UNITYSDK_OFFSET(0xB528CF0)
#define KLHPGILEONH_FBEDCPAPIIJ_OFFSET UNITYSDK_OFFSET(0xB528FF0)
#define KLHPGILEONH_FOAEGDBDMJE_OFFSET UNITYSDK_OFFSET(0xB5284B0)
#define KLHPGILEONH_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB5287A0)
#define KLHPGILEONH_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xB528390)
#define KLHPGILEONH_GOCIIGAMFLN_OFFSET UNITYSDK_OFFSET(0xB529780)
#define KLHPGILEONH_GPGEEILLHKO_OFFSET UNITYSDK_OFFSET(0xB5297F0)
#define KLHPGILEONH_HBEALPOHNIH_OFFSET UNITYSDK_OFFSET(0xB529BB0)
#define KLHPGILEONH_HCLHFONBMAP_OFFSET UNITYSDK_OFFSET(0xB5285F0)
#define KLHPGILEONH_KNFIILGBGOG_OFFSET UNITYSDK_OFFSET(0xB529070)
#define KLHPGILEONH_MEELNEALLCM_OFFSET UNITYSDK_OFFSET(0xB529AD0)
#define KLHPGILEONH_NGIIGBLNPON_OFFSET UNITYSDK_OFFSET(0xB529100)
#define KLHPGILEONH_OBAKIMAJDKE_OFFSET UNITYSDK_OFFSET(0xB529540)
#define KLHPGILEONH_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xB5283A0)
#define KLHPGILEONH_PDBGPLJEDFD_OFFSET UNITYSDK_OFFSET(0xB529670)

	class KLHPGILEONH : public ::LHHEGNEBMLN
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* EMBPLHNIEOA; // 0x38
		::System::Collections::Generic::List_1<::JPKJNNKMIGJ*>* HCNLLBJCFPA; // 0x40
		::RPG::GameCore::GameEntity* PEGKBDDJOEC; // 0x48
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x50
		::System::Collections::Generic::List_1<::HFFAFBIGNKP*>* DPNHCAGGICP; // 0x58
		::System::UInt32 CKIFGOPLPLB; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::System::Void OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Void BGJGNFHGLBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH_BGJGNFHGLBC_OFFSET))(this);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + KLHPGILEONH_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void EIPCGGPHELP(::EIKBBAPBBAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIKBBAPBBAB*))((::PBYTE)hIl2Cpp + KLHPGILEONH_EIPCGGPHELP_OFFSET))(this, a1);
		}

		::System::Void EPPOMLEFPOI(::RPG::GameCore::LevelEntityUseSkill* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityUseSkill*))((::PBYTE)hIl2Cpp + KLHPGILEONH_EPPOMLEFPOI_OFFSET))(this, a1);
		}

		::System::Void EANGFHIEFMP(::RPG::GameCore::LevelEntitySPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntitySPChange*))((::PBYTE)hIl2Cpp + KLHPGILEONH_EANGFHIEFMP_OFFSET))(this, a1);
		}

		::System::Void OBAKIMAJDKE(::RPG::GameCore::LevelCharacterCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterCreate*))((::PBYTE)hIl2Cpp + KLHPGILEONH_OBAKIMAJDKE_OFFSET))(this, a1);
		}

		::System::Void PDBGPLJEDFD(::RPG::GameCore::LevelBattleEventCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + KLHPGILEONH_PDBGPLJEDFD_OFFSET))(this, a1);
		}

		::System::Void GOCIIGAMFLN(::DMEPKAKPGBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMEPKAKPGBO*))((::PBYTE)hIl2Cpp + KLHPGILEONH_GOCIIGAMFLN_OFFSET))(this, a1);
		}

		::System::Void GPGEEILLHKO(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + KLHPGILEONH_GPGEEILLHKO_OFFSET))(this, a1);
		}

		::System::Void HCLHFONBMAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH_HCLHFONBMAP_OFFSET))(this);
		}

		::System::Void ABKBLPGPDIO(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + KLHPGILEONH_ABKBLPGPDIO_OFFSET))(this, a1, a2);
		}

		::System::Void FOAEGDBDMJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH_FOAEGDBDMJE_OFFSET))(this);
		}

		::System::Double MEELNEALLCM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Double(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KLHPGILEONH_MEELNEALLCM_OFFSET))(this, a1);
		}

		::System::Double FBEDCPAPIIJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH_FBEDCPAPIIJ_OFFSET))(this);
		}

		::System::UInt32 KNFIILGBGOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH_KNFIILGBGOG_OFFSET))(this);
		}

		::System::UInt32 NGIIGBLNPON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH_NGIIGBLNPON_OFFSET))(this);
		}

		::System::UInt32 HBEALPOHNIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH_HBEALPOHNIH_OFFSET))(this);
		}

	};
