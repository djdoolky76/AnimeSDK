#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDHAIJDALAH_ValueModifyType.h"
#include "unitysdk/RPG/Client/ParkourGame/EModifyEngineFlags.h"
#include "unitysdk/RPG/Client/ParkourGame/Engine.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDHAIJDALAH_ADAHCAJBNOB_OFFSET UNITYSDK_OFFSET(0x15ED37E0)
#define IDHAIJDALAH_AIAGOAFNENK_OFFSET UNITYSDK_OFFSET(0x15ED3510)
#define IDHAIJDALAH_APAECLPLHNC_OFFSET UNITYSDK_OFFSET(0x15ED31D0)
#define IDHAIJDALAH_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x15ED37D0)
#define IDHAIJDALAH_CTOR_OFFSET UNITYSDK_OFFSET(0x15ED2860)
#define IDHAIJDALAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15ED2BA0)
#define IDHAIJDALAH_DLJBOPPBGCC_OFFSET UNITYSDK_OFFSET(0x15ED2EC0)
#define IDHAIJDALAH_ECBHDOPBGHE_OFFSET UNITYSDK_OFFSET(0x15ED3010)
#define IDHAIJDALAH_GET_DEFAULTLEVEL_OFFSET UNITYSDK_OFFSET(0x15ED37B0)
#define IDHAIJDALAH_IAKADFJMLPB_OFFSET UNITYSDK_OFFSET(0x15ED3430)
#define IDHAIJDALAH_IJLKPFFFPKC_OFFSET UNITYSDK_OFFSET(0x15ED28F0)
#define IDHAIJDALAH_IOIMEFFNGDH_OFFSET UNITYSDK_OFFSET(0x15ED3720)
#define IDHAIJDALAH_JKNBMENBFGD_OFFSET UNITYSDK_OFFSET(0x15ED3160)
#define IDHAIJDALAH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15ED2BE0)
#define IDHAIJDALAH_JPLKAINKLCH_OFFSET UNITYSDK_OFFSET(0x15ED3830)
#define IDHAIJDALAH_KOAFOODBGLK_OFFSET UNITYSDK_OFFSET(0x15ED3350)
#define IDHAIJDALAH_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x15ED3270)
#define IDHAIJDALAH_LGDKDHPDAEB_OFFSET UNITYSDK_OFFSET(0x15ED3680)
#define IDHAIJDALAH_MNONOJKPPJP_OFFSET UNITYSDK_OFFSET(0x15ED2F30)
#define IDHAIJDALAH_NKNKMDIOOOC_OFFSET UNITYSDK_OFFSET(0x15ED2DB0)
#define IDHAIJDALAH_OEEJMPKCEFF_OFFSET UNITYSDK_OFFSET(0x15ED3080)
#define IDHAIJDALAH_OLBAHGAAKLF_OFFSET UNITYSDK_OFFSET(0x15ED30F0)
#define IDHAIJDALAH_ONGNDOHAMDB_OFFSET UNITYSDK_OFFSET(0x15ED2FA0)
#define IDHAIJDALAH_SET_DEFAULTLEVEL_OFFSET UNITYSDK_OFFSET(0x15ED37C0)

inline static constexpr unsigned int IDHAIJDALAH_TypeDefinitionIndex = 74192;

	class IDHAIJDALAH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* KMOMNKKEJAK; // 0x10
		::RPG::Client::ParkourGame::Engine HICEHCKKEPK; // 0x18
		::System::Int32 IACHHFMCKMC; // 0x28
		::System::Int32 _DefaultLevel_k__BackingField; // 0x2C
		::System::Void _ctor(::RPG::Client::ParkourGame::Engine a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::Engine))((::PBYTE)hIl2Cpp + IDHAIJDALAH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDHAIJDALAH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Single DLJBOPPBGCC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_DLJBOPPBGCC_OFFSET))(this);
		}

		::System::Single MNONOJKPPJP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_MNONOJKPPJP_OFFSET))(this);
		}

		::System::Single ONGNDOHAMDB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_ONGNDOHAMDB_OFFSET))(this);
		}

		::System::Single ECBHDOPBGHE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_ECBHDOPBGHE_OFFSET))(this);
		}

		::System::Single OEEJMPKCEFF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_OEEJMPKCEFF_OFFSET))(this);
		}

		::System::Single OLBAHGAAKLF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_OLBAHGAAKLF_OFFSET))(this);
		}

		::System::Single JKNBMENBFGD(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IDHAIJDALAH_JKNBMENBFGD_OFFSET))(this, a1);
		}

		::System::Single APAECLPLHNC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_APAECLPLHNC_OFFSET))(this);
		}

		::System::Boolean LCJMKJPECAP(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IDHAIJDALAH_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean KOAFOODBGLK(::RPG::Client::ParkourGame::EModifyEngineFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourGame::EModifyEngineFlags))((::PBYTE)hIl2Cpp + IDHAIJDALAH_KOAFOODBGLK_OFFSET))(this, a1);
		}

		::System::Boolean IAKADFJMLPB(::RPG::Client::ParkourGame::EModifyEngineFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourGame::EModifyEngineFlags))((::PBYTE)hIl2Cpp + IDHAIJDALAH_IAKADFJMLPB_OFFSET))(this, a1);
		}

		::System::Void IJLKPFFFPKC(::IDHAIJDALAH_ValueModifyType a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::RPG::Client::ParkourGame::EModifyEngineFlags a5)
		{
			return ((::System::Void(*)(::PVOID, ::IDHAIJDALAH_ValueModifyType, ::System::Int32, ::System::Int32, ::System::Single, ::RPG::Client::ParkourGame::EModifyEngineFlags))((::PBYTE)hIl2Cpp + IDHAIJDALAH_IJLKPFFFPKC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AIAGOAFNENK(::RPG::Client::ParkourGame::EModifyEngineFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::EModifyEngineFlags))((::PBYTE)hIl2Cpp + IDHAIJDALAH_AIAGOAFNENK_OFFSET))(this, a1);
		}

		::System::Void LGDKDHPDAEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_LGDKDHPDAEB_OFFSET))(this);
		}

		::System::Void IOIMEFFNGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_IOIMEFFNGDH_OFFSET))(this);
		}

		::System::Void NKNKMDIOOOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_NKNKMDIOOOC_OFFSET))(this);
		}

		::System::Int32 get_DefaultLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_GET_DEFAULTLEVEL_OFFSET))(this);
		}

		::System::Void set_DefaultLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IDHAIJDALAH_SET_DEFAULTLEVEL_OFFSET))(this, a1);
		}

		::System::Int32 CMFGFDOOFFI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Int32 ADAHCAJBNOB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_ADAHCAJBNOB_OFFSET))(this);
		}

		::System::Single JPLKAINKLCH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHAIJDALAH_JPLKAINKLCH_OFFSET))(this);
		}

	};
