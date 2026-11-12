#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirEventType.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"
class EPFHDFJPECH;
class OJONFELBAFM;
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EPFHDFJPECH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x164E6B60)
#define EPFHDFJPECH_CTOR_OFFSET UNITYSDK_OFFSET(0x164E6F60)
#define EPFHDFJPECH_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0x164E6F70)

inline static constexpr unsigned int EPFHDFJPECH_TypeDefinitionIndex = 82178;

	class EPFHDFJPECH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirEventType, ::System::Collections::Generic::List_1<::OJONFELBAFM*>*>* KHBNAGNKKJL; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::PixAirEquipTag>* OJFFPIIKPDJ; // 0x18
		::RPG::Client::PixAir::PixAirEquipInstance* BMEOCHBMBGF; // 0x20
		::RPG::GameCore::FixPoint DHMPEOAJCCK; // 0x28
		::System::Int32 EEFIPNFMELC; // 0x30
		::System::Int32 DAKBJLLPJCN; // 0x34
		::RPG::GameCore::FixPoint NBPEHFCAIHB; // 0x38
		::System::Boolean NCCJHHCGFHF; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 NJGKCPOOHDM; // 0x44
		::RPG::GameCore::FixPoint BKICHKPMKLF; // 0x48
		::System::UInt32 AHGIENEMKFI; // 0x50
		::RPG::GameCore::PixAirSlotType MPADIDFJBEF; // 0x54
		::RPG::GameCore::FixPoint LAJJIEFELIO; // 0x58
		::RPG::GameCore::FixPoint ENEOBDACJOH; // 0x60
		::RPG::GameCore::FixPoint MNMIDHLADCO; // 0x68
		::RPG::GameCore::FixPoint EAFHJMECPEO; // 0x70
		::RPG::GameCore::FixPoint AJMPIDBBJMH; // 0x78
		::RPG::GameCore::FixPoint JDADMEJFLLL; // 0x80
		::RPG::GameCore::FixPoint JFOBGGBOFLC; // 0x88
		::System::UInt32 NBFOFKGNNIO; // 0x90
		::System::UInt32 AAGKEBFHLMC; // 0x94
		::RPG::GameCore::FixPoint HJNPFANCFEC; // 0x98
		::RPG::GameCore::FixPoint HNJLMDKOKKD; // 0xA0
		::RPG::GameCore::FixPoint KIEICALFCEM; // 0xA8
		::RPG::GameCore::FixPoint IIPCIGIOIDB; // 0xB0
		::RPG::GameCore::FixPoint EPKJNNKPIPI; // 0xB8
		::RPG::GameCore::FixPoint NPJOPHICDFD; // 0xC0
		::RPG::GameCore::FixPoint DALHCOIABHF; // 0xC8
		::RPG::GameCore::FixPoint FPEEMPIEDEM; // 0xD0
		::RPG::GameCore::FixPoint FNHLJAHDEFB; // 0xD8
		::System::Int32 CFBDMBKCNJO; // 0xE0
		::System::Int32 NPHAJEKCBKF; // 0xE4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFHDFJPECH_CTOR_OFFSET))(this);
		}

		static ::EPFHDFJPECH* BPLPBPMEODA(::RPG::Client::PixAir::PixAirEquipInstance* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::EPFHDFJPECH*(*)(::RPG::Client::PixAir::PixAirEquipInstance*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EPFHDFJPECH_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Int32 IKOCHGBIGPJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFHDFJPECH_IKOCHGBIGPJ_OFFSET))(this);
		}

	};
