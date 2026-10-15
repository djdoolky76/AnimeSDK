#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOBANEOGHIB_EatingState.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerEating; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define MOBANEOGHIB_AEJOPFOKMBP_OFFSET UNITYSDK_OFFSET(0xBA1DFD0)
#define MOBANEOGHIB_AJMLMFCGGBM_OFFSET UNITYSDK_OFFSET(0xBA1FA90)
#define MOBANEOGHIB_BLDJALMDFBF_OFFSET UNITYSDK_OFFSET(0xBA1D660)
#define MOBANEOGHIB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA1C280)
#define MOBANEOGHIB_DIFEGHLFAGN_OFFSET UNITYSDK_OFFSET(0xBA201F0)
#define MOBANEOGHIB_EHFLGAHEFDA_OFFSET UNITYSDK_OFFSET(0xBA1E8B0)
#define MOBANEOGHIB_GFOJELLAPGL_OFFSET UNITYSDK_OFFSET(0xBA20BF0)
#define MOBANEOGHIB_GNAMMECEMCD_OFFSET UNITYSDK_OFFSET(0xBA214C0)
#define MOBANEOGHIB_GNGDGPFALAP_OFFSET UNITYSDK_OFFSET(0xBA200C0)
#define MOBANEOGHIB_GOGHINHCBEP_OFFSET UNITYSDK_OFFSET(0xBA1F370)
#define MOBANEOGHIB_HHGNECAGCCA_OFFSET UNITYSDK_OFFSET(0xBA1FD40)
#define MOBANEOGHIB_HKIIMHCBFJB_OFFSET UNITYSDK_OFFSET(0xBA1F7E0)
#define MOBANEOGHIB_JMJIJKPDCMB_OFFSET UNITYSDK_OFFSET(0xBA20670)
#define MOBANEOGHIB_LLFBCOHMCDC_OFFSET UNITYSDK_OFFSET(0xBA1ED20)
#define MOBANEOGHIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA1C2A0)
#define MOBANEOGHIB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA1CF90)
#define MOBANEOGHIB_PNFHGBJFEMN_OFFSET UNITYSDK_OFFSET(0xBA1E440)
#define MOBANEOGHIB_TICK_OFFSET UNITYSDK_OFFSET(0xBA1CFE0)
#define MOBANEOGHIB__TICK_B__3_0_OFFSET UNITYSDK_OFFSET(0xBA21A60)
#define MOBANEOGHIB___ONCOMPLETEEATING_B__5_0_OFFSET UNITYSDK_OFFSET(0xBA21AF0)
#define MOBANEOGHIB___ONPAYING_B__11_0_OFFSET UNITYSDK_OFFSET(0xBA21B80)
#define MOBANEOGHIB___ONPAYING_B__11_1_OFFSET UNITYSDK_OFFSET(0xBA21C10)

inline static constexpr unsigned int MOBANEOGHIB_TypeDefinitionIndex = 52152;

	class MOBANEOGHIB
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* CCPIFEPGOEN; // 0x28
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PCPOJALEGGF; // 0x30
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x38
		::System::Single JLEHFEKALDB; // 0x40
		::System::Single FLGMFBBOKNN; // 0x44
		::MOBANEOGHIB_EatingState EAHDKCILFIK; // 0x48
		::System::Boolean PBICLKEMBJL; // 0x4C
		::System::Boolean FLHLHHLDAGI; // 0x4D
		::System::Byte _padding0[0x2];
		::System::Single LNMEAAGLLCI; // 0x50
		::System::Single PGMIOKKLHIE; // 0x54
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerEating* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerEating*))((::PBYTE)hIl2Cpp + MOBANEOGHIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOBANEOGHIB_TICK_OFFSET))(this, a1);
		}

		::System::Void GNGDGPFALAP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOBANEOGHIB_GNGDGPFALAP_OFFSET))(this, a1);
		}

		::System::Boolean BLDJALMDFBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB_BLDJALMDFBF_OFFSET))(this);
		}

		::System::Void HKIIMHCBFJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB_HKIIMHCBFJB_OFFSET))(this);
		}

		::System::Boolean AEJOPFOKMBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB_AEJOPFOKMBP_OFFSET))(this);
		}

		::System::Boolean PNFHGBJFEMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB_PNFHGBJFEMN_OFFSET))(this);
		}

		::System::Boolean EHFLGAHEFDA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB_EHFLGAHEFDA_OFFSET))(this);
		}

		::System::Boolean LLFBCOHMCDC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB_LLFBCOHMCDC_OFFSET))(this);
		}

		::System::Void AJMLMFCGGBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB_AJMLMFCGGBM_OFFSET))(this);
		}

		::System::Void HHGNECAGCCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB_HHGNECAGCCA_OFFSET))(this);
		}

		::System::Boolean GFOJELLAPGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB_GFOJELLAPGL_OFFSET))(this);
		}

		::System::Int32 JMJIJKPDCMB(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + MOBANEOGHIB_JMJIJKPDCMB_OFFSET))(this, a1);
		}

		::System::Void GOGHINHCBEP(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOBANEOGHIB_GOGHINHCBEP_OFFSET))(this, a1, a2);
		}

		::System::Void GNAMMECEMCD(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + MOBANEOGHIB_GNAMMECEMCD_OFFSET))(this, a1);
		}

		::System::Void DIFEGHLFAGN(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::Int32 a2, ::RPG::GameCore::LittleGameSmartObjectSlotGroup a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Int32, ::RPG::GameCore::LittleGameSmartObjectSlotGroup))((::PBYTE)hIl2Cpp + MOBANEOGHIB_DIFEGHLFAGN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Tick_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB__TICK_B__3_0_OFFSET))(this);
		}

		::System::Void __OnCompleteEating_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB___ONCOMPLETEEATING_B__5_0_OFFSET))(this);
		}

		::System::Void __OnPaying_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB___ONPAYING_B__11_0_OFFSET))(this);
		}

		::System::Void __OnPaying_b__11_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBANEOGHIB___ONPAYING_B__11_1_OFFSET))(this);
		}

	};
