#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class BBDBABJLIIB;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelPerformanceInitialize; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKMLAKCCPHD_ACPNHPJNCEM_OFFSET UNITYSDK_OFFSET(0xC1291B0)
#define BKMLAKCCPHD_CBCJFJIMCFP_OFFSET UNITYSDK_OFFSET(0xC128AD0)
#define BKMLAKCCPHD_CTOR_OFFSET UNITYSDK_OFFSET(0xC129B20)
#define BKMLAKCCPHD_ECJNKJFJHJA_OFFSET UNITYSDK_OFFSET(0xC128CC0)
#define BKMLAKCCPHD_FCFLAJKBODC_OFFSET UNITYSDK_OFFSET(0xC129620)
#define BKMLAKCCPHD_FJFCFKCABJK_OFFSET UNITYSDK_OFFSET(0xC1298D0)
#define BKMLAKCCPHD_GCJECAJCFCJ_OFFSET UNITYSDK_OFFSET(0xC128DF0)
#define BKMLAKCCPHD_GET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0xC129B00)
#define BKMLAKCCPHD_GFGOJMFEEGO_OFFSET UNITYSDK_OFFSET(0xC129130)
#define BKMLAKCCPHD_GHKCBLAJOCE_OFFSET UNITYSDK_OFFSET(0xC1296F0)
#define BKMLAKCCPHD_GKOJACPKGMA_OFFSET UNITYSDK_OFFSET(0xC1286D0)
#define BKMLAKCCPHD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC1281B0)
#define BKMLAKCCPHD_KBMHAHEHMJL_OFFSET UNITYSDK_OFFSET(0xC128B90)
#define BKMLAKCCPHD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC128110)
#define BKMLAKCCPHD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC127F80)
#define BKMLAKCCPHD_MAMOIBKFJOH_OFFSET UNITYSDK_OFFSET(0xC1283B0)
#define BKMLAKCCPHD_MIKGBABDBBD_OFFSET UNITYSDK_OFFSET(0xC128C00)
#define BKMLAKCCPHD_MLIHJCLNNHA_OFFSET UNITYSDK_OFFSET(0xC129410)
#define BKMLAKCCPHD_NOFJENGOJGE_OFFSET UNITYSDK_OFFSET(0xC1282B0)
#define BKMLAKCCPHD_OMICEPNECIA_OFFSET UNITYSDK_OFFSET(0xC129500)
#define BKMLAKCCPHD_SET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0xC129B10)

inline static constexpr unsigned int BKMLAKCCPHD_TypeDefinitionIndex = 62078;

	class BKMLAKCCPHD : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* PIFIOLGCNDO; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* JKDEAEGLAON; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::GameEntity*>* GPNHEDBHBHL; // 0x20
		::System::Boolean OCCIFHOEJMI; // 0x28
		::System::Boolean _BlockNew_k__BackingField; // 0x29
		::System::Byte _padding0[0x2];
		::RPG::GameCore::ELevelPerformanceType DBLMPDKBMLH; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::BBDBABJLIIB* a1, ::RPG::GameCore::LevelPerformanceInitialize* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::BBDBABJLIIB*, ::RPG::GameCore::LevelPerformanceInitialize*, ::System::Boolean))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean NOFJENGOJGE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_NOFJENGOJGE_OFFSET))(this, a1);
		}

		::System::Void MAMOIBKFJOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_MAMOIBKFJOH_OFFSET))(this);
		}

		::System::Void GKOJACPKGMA(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_GKOJACPKGMA_OFFSET))(this, a1, a2);
		}

		::System::Void ECJNKJFJHJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_ECJNKJFJHJA_OFFSET))(this, a1);
		}

		::System::Void GCJECAJCFCJ(::RPG::GameCore::ELevelPerformanceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_GCJECAJCFCJ_OFFSET))(this, a1);
		}

		::System::Void GFGOJMFEEGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_GFGOJMFEEGO_OFFSET))(this);
		}

		::System::Void ACPNHPJNCEM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_ACPNHPJNCEM_OFFSET))(this, a1, a2);
		}

		::System::Void OMICEPNECIA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_OMICEPNECIA_OFFSET))(this, a1, a2);
		}

		::System::Boolean FCFLAJKBODC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_FCFLAJKBODC_OFFSET))(this, a1);
		}

		::System::Void GHKCBLAJOCE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_GHKCBLAJOCE_OFFSET))(this, a1);
		}

		::System::Void FJFCFKCABJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_FJFCFKCABJK_OFFSET))(this);
		}

		::System::Void CBCJFJIMCFP(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_CBCJFJIMCFP_OFFSET))(this, a1, a2);
		}

		::System::Void MLIHJCLNNHA(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_MLIHJCLNNHA_OFFSET))(this, a1, a2);
		}

		::System::Void KBMHAHEHMJL(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_KBMHAHEHMJL_OFFSET))(this, a1, a2);
		}

		::System::Void MIKGBABDBBD(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_MIKGBABDBBD_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_BlockNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_GET_BLOCKNEW_OFFSET))(this);
		}

		::System::Void set_BlockNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BKMLAKCCPHD_SET_BLOCKNEW_OFFSET))(this, a1);
		}

	};
