#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
class AFLHEGNAGAB;
class FOJIGLHBPNG;
class JBACCAGFHON;
namespace RPG::GameCore { class CakeRaceGameConfig; }
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }
namespace RPG::GameCore { class CakeRaceTrapCellConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFLHEGNAGAB_ALMNNLBMGGK_OFFSET UNITYSDK_OFFSET(0xCF134A0)
#define AFLHEGNAGAB_BMNLFDHEIKA_OFFSET UNITYSDK_OFFSET(0xCF12ED0)
#define AFLHEGNAGAB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF13180)
#define AFLHEGNAGAB_CDEEGMAEDFL_OFFSET UNITYSDK_OFFSET(0xCF12BC0)
#define AFLHEGNAGAB_CMPPEBFLDJN_OFFSET UNITYSDK_OFFSET(0xCF14070)
#define AFLHEGNAGAB_CTOR_OFFSET UNITYSDK_OFFSET(0xCF13300)
#define AFLHEGNAGAB_EHPJFGNBOED_OFFSET UNITYSDK_OFFSET(0xCF136D0)
#define AFLHEGNAGAB_FGIFFNNCNKO_OFFSET UNITYSDK_OFFSET(0xCF13D90)
#define AFLHEGNAGAB_FJMLOCJKFDK_OFFSET UNITYSDK_OFFSET(0xCF12C20)
#define AFLHEGNAGAB_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0xCF12BB0)
#define AFLHEGNAGAB_GET_REGIONCONFIGPROVIDER_OFFSET UNITYSDK_OFFSET(0xCF12C80)
#define AFLHEGNAGAB_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xCF12B20)
#define AFLHEGNAGAB_IFEAOGCHBLD_OFFSET UNITYSDK_OFFSET(0xCF13CF0)
#define AFLHEGNAGAB_JDAHEOGGFEM_OFFSET UNITYSDK_OFFSET(0xCF12F60)
#define AFLHEGNAGAB_JFMNCLGEPGG_OFFSET UNITYSDK_OFFSET(0xCF12D20)
#define AFLHEGNAGAB_KGHHFOAGGFB_OFFSET UNITYSDK_OFFSET(0xCF137A0)
#define AFLHEGNAGAB_KNKIMNEMDPK_OFFSET UNITYSDK_OFFSET(0xCF12B30)
#define AFLHEGNAGAB_LCBMKPHJKOD_OFFSET UNITYSDK_OFFSET(0xCF13A20)
#define AFLHEGNAGAB_LJBALCPPECJ_1_OFFSET UNITYSDK_OFFSET(0xCF13F90)
#define AFLHEGNAGAB_LJBALCPPECJ_OFFSET UNITYSDK_OFFSET(0xCF13EE0)
#define AFLHEGNAGAB_LJCKCJMAPIE_OFFSET UNITYSDK_OFFSET(0xCF12FE0)
#define AFLHEGNAGAB_MDPDKEBEDIE_OFFSET UNITYSDK_OFFSET(0xCF14170)
#define AFLHEGNAGAB_MFPKPNNMEHM_OFFSET UNITYSDK_OFFSET(0xCF12CA0)
#define AFLHEGNAGAB_PALLCENBCAP_OFFSET UNITYSDK_OFFSET(0xCF13380)
#define AFLHEGNAGAB_SET_REGIONCONFIGPROVIDER_OFFSET UNITYSDK_OFFSET(0xCF12C90)

	class AFLHEGNAGAB : public ::System::Object
	{
	public:
		::FOJIGLHBPNG* _RegionConfigProvider_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceMoveState, ::RPG::GameCore::CakeRaceMoveStateConfig*>* IFPHDDGNDEP; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCellType, ::RPG::GameCore::CakeRaceTrapCellConfig*>* IFKDDIPCLIK; // 0x20
		::RPG::GameCore::CakeRaceGameConfig* _GameConfig_k__BackingField; // 0x28
		::JBACCAGFHON* _Services_k__BackingField; // 0x30
		// static const ::System::Object IHDBGPABLDF; // 0x0
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_CTOR_OFFSET))(this, a1);
		}

		::JBACCAGFHON* get_Services()
		{
			return ((::JBACCAGFHON*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_GET_SERVICES_OFFSET))(this);
		}

		::RPG::GameCore::LittleGameLevelConfig* KNKIMNEMDPK()
		{
			return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_KNKIMNEMDPK_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceGameConfig* get_GameConfig()
		{
			return ((::RPG::GameCore::CakeRaceGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_GET_GAMECONFIG_OFFSET))(this);
		}

		::System::Int32 CDEEGMAEDFL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_CDEEGMAEDFL_OFFSET))(this);
		}

		::System::Int32 FJMLOCJKFDK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_FJMLOCJKFDK_OFFSET))(this);
		}

		::FOJIGLHBPNG* get_RegionConfigProvider()
		{
			return ((::FOJIGLHBPNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_GET_REGIONCONFIGPROVIDER_OFFSET))(this);
		}

		::System::Void set_RegionConfigProvider(::FOJIGLHBPNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOJIGLHBPNG*))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_SET_REGIONCONFIGPROVIDER_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceMoveStateConfig* MFPKPNNMEHM(::RPG::GameCore::CakeRaceMoveState a1)
		{
			return ((::RPG::GameCore::CakeRaceMoveStateConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_MFPKPNNMEHM_OFFSET))(this, a1);
		}

		::System::Void JFMNCLGEPGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_JFMNCLGEPGG_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceMoveStateConfig* BMNLFDHEIKA(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::RPG::GameCore::CakeRaceMoveStateConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_BMNLFDHEIKA_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceTrapCellConfig* JDAHEOGGFEM(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::RPG::GameCore::CakeRaceTrapCellConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_JDAHEOGGFEM_OFFSET))(this, a1);
		}

		::System::Void LJCKCJMAPIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_LJCKCJMAPIE_OFFSET))(this);
		}

		static ::AFLHEGNAGAB* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::AFLHEGNAGAB*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_BPLPBPMEODA_OFFSET))(a1);
		}

		::RPG::GameCore::LittleGameEntityConfig* PALLCENBCAP(::RPG::GameCore::LittleGameEntityType a1)
		{
			return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_PALLCENBCAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::LittleGameEntityConfig*>* ALMNNLBMGGK(::RPG::GameCore::LittleGameEntityType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::LittleGameEntityConfig*>*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_ALMNNLBMGGK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3Int EHPJFGNBOED(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_EHPJFGNBOED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3Int LCBMKPHJKOD(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_LCBMKPHJKOD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3Int KGHHFOAGGFB(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_KGHHFOAGGFB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 IFEAOGCHBLD(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_IFEAOGCHBLD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 FGIFFNNCNKO(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_FGIFFNNCNKO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3Int LJBALCPPECJ(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_LJBALCPPECJ_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3Int LJBALCPPECJ_1(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_LJBALCPPECJ_1_OFFSET))(this, a1);
		}

		::System::Boolean CMPPEBFLDJN(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_CMPPEBFLDJN_OFFSET))(this, a1);
		}

		::System::Boolean MDPDKEBEDIE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFLHEGNAGAB_MDPDKEBEDIE_OFFSET))(this, a1);
		}

	};
