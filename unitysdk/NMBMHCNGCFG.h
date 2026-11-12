#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAADKDMPILK.h"
#include "unitysdk/ODAGKNPDBMH.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class KEELLMNDMII;
class NMBMHCNGCFG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMBMHCNGCFG_AENNAEOGJOH_OFFSET UNITYSDK_OFFSET(0xC567170)
#define NMBMHCNGCFG_BDNFEMGIEIH_OFFSET UNITYSDK_OFFSET(0xC565380)
#define NMBMHCNGCFG_CPGJGAAOIAK_OFFSET UNITYSDK_OFFSET(0xC565330)
#define NMBMHCNGCFG_CTOR_OFFSET UNITYSDK_OFFSET(0xC55B250)
#define NMBMHCNGCFG_DBIJFDMIKLM_OFFSET UNITYSDK_OFFSET(0xC566230)
#define NMBMHCNGCFG_FDMPFIEGNBD_OFFSET UNITYSDK_OFFSET(0xC565300)
#define NMBMHCNGCFG_GET_BATTLERELICINFOS_OFFSET UNITYSDK_OFFSET(0xC5652B0)
#define NMBMHCNGCFG_GET_SPECIALRELICDATA_OFFSET UNITYSDK_OFFSET(0xC5652D0)
#define NMBMHCNGCFG_GGDEOICFOJA_OFFSET UNITYSDK_OFFSET(0xC565C80)
#define NMBMHCNGCFG_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0xC566310)
#define NMBMHCNGCFG_INKDDOFKHHG_OFFSET UNITYSDK_OFFSET(0xC565310)
#define NMBMHCNGCFG_KCHLCAALNOJ_OFFSET UNITYSDK_OFFSET(0xC565320)
#define NMBMHCNGCFG_KHCKEAAHMBO_OFFSET UNITYSDK_OFFSET(0xC566FE0)
#define NMBMHCNGCFG_LICMMLJKNIG_OFFSET UNITYSDK_OFFSET(0xC566CC0)
#define NMBMHCNGCFG_LLMFLLCFKAB_OFFSET UNITYSDK_OFFSET(0xC5652F0)
#define NMBMHCNGCFG_NMPKFJNEDGA_OFFSET UNITYSDK_OFFSET(0xC565C30)
#define NMBMHCNGCFG_OBCOJAOPONO_OFFSET UNITYSDK_OFFSET(0xC566E40)
#define NMBMHCNGCFG_SET_BATTLERELICINFOS_OFFSET UNITYSDK_OFFSET(0xC5652C0)
#define NMBMHCNGCFG_SET_SPECIALRELICDATA_OFFSET UNITYSDK_OFFSET(0xC5652E0)

inline static constexpr unsigned int NMBMHCNGCFG_TypeDefinitionIndex = 57536;

	class NMBMHCNGCFG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* DLOINOGKOKN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FAADKDMPILK>* AKLGLFLMOFL; // 0x18
		::Il2CppArray<::ODAGKNPDBMH>* _BattleRelicInfos_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* CHGBEMPCPIG; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* DNBPHLHLBIL; // 0x30
		::KEELLMNDMII* _SpecialRelicData_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::ODAGKNPDBMH>* get_BattleRelicInfos()
		{
			return ((::Il2CppArray<::ODAGKNPDBMH>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_GET_BATTLERELICINFOS_OFFSET))(this);
		}

		::System::Void set_BattleRelicInfos(::Il2CppArray<::ODAGKNPDBMH>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::ODAGKNPDBMH>*))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_SET_BATTLERELICINFOS_OFFSET))(this, a1);
		}

		::KEELLMNDMII* get_SpecialRelicData()
		{
			return ((::KEELLMNDMII*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_GET_SPECIALRELICDATA_OFFSET))(this);
		}

		::System::Void set_SpecialRelicData(::KEELLMNDMII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEELLMNDMII*))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_SET_SPECIALRELICDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* LLMFLLCFKAB()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_LLMFLLCFKAB_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* FDMPFIEGNBD()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_FDMPFIEGNBD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::FAADKDMPILK>* INKDDOFKHHG()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::FAADKDMPILK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_INKDDOFKHHG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* KCHLCAALNOJ()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_KCHLCAALNOJ_OFFSET))(this);
		}

		::System::Void CPGJGAAOIAK(::Il2CppArray<::ODAGKNPDBMH>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::ODAGKNPDBMH>*))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_CPGJGAAOIAK_OFFSET))(this, a1);
		}

		::System::Void NMPKFJNEDGA(::KEELLMNDMII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEELLMNDMII*))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_NMPKFJNEDGA_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint DBIJFDMIKLM(::System::String* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_DBIJFDMIKLM_OFFSET))(this, a1, a2);
		}

		::NMBMHCNGCFG* HEPPBBLLBPN()
		{
			return ((::NMBMHCNGCFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_HEPPBBLLBPN_OFFSET))(this);
		}

		::System::Void BDNFEMGIEIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_BDNFEMGIEIH_OFFSET))(this);
		}

		::System::Void OBCOJAOPONO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_OBCOJAOPONO_OFFSET))(this, a1, a2);
		}

		::System::Void LICMMLJKNIG(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_LICMMLJKNIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHCKEAAHMBO(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_KHCKEAAHMBO_OFFSET))(this, a1, a2);
		}

		::System::Void AENNAEOGJOH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_AENNAEOGJOH_OFFSET))(this, a1, a2);
		}

		::System::Void GGDEOICFOJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBMHCNGCFG_GGDEOICFOJA_OFFSET))(this);
		}

	};
