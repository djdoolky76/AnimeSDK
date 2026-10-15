#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJIFFMGIAHL;
class PIHNNIFOPOC;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define CECJDKMMMHH_CTOR_OFFSET UNITYSDK_OFFSET(0xC77D650)
#define CECJDKMMMHH_GMGKDFJAMPM_OFFSET UNITYSDK_OFFSET(0xC77D4F0)
#define CECJDKMMMHH_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0xC77D1A0)
#define CECJDKMMMHH_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0xC77D140)
#define CECJDKMMMHH_KEDFCMPDIBN_OFFSET UNITYSDK_OFFSET(0xC77D470)
#define CECJDKMMMHH_KPKCFMCJBCF_OFFSET UNITYSDK_OFFSET(0xC77CF20)
#define CECJDKMMMHH__SETDATA_B__0_0_OFFSET UNITYSDK_OFFSET(0xC77D660)

	class CECJDKMMMHH : public ::System::Object
	{
	public:
		::RPG::Client::EquipmentItemData* DHNNOPBAJPF; // 0x10
		::FJIFFMGIAHL* JAPKCFJEKCH; // 0x18
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CECJDKMMMHH_CTOR_OFFSET))(this);
		}

		::System::Void KPKCFMCJBCF(::RPG::AvatarSystem::IAvatar* a1, ::FJIFFMGIAHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::FJIFFMGIAHL*))((::PBYTE)hIl2Cpp + CECJDKMMMHH_KPKCFMCJBCF_OFFSET))(this, a1, a2);
		}

		::System::Boolean JAGPJGOOALH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CECJDKMMMHH_JAGPJGOOALH_OFFSET))(this);
		}

		::PIHNNIFOPOC* HFIDHKKOEOA()
		{
			return ((::PIHNNIFOPOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CECJDKMMMHH_HFIDHKKOEOA_OFFSET))(this);
		}

		::System::Boolean KEDFCMPDIBN(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CECJDKMMMHH_KEDFCMPDIBN_OFFSET))(this, a1);
		}

		::System::Int32 GMGKDFJAMPM(::RPG::Client::EquipmentItemData* a1, ::RPG::Client::EquipmentItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EquipmentItemData*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CECJDKMMMHH_GMGKDFJAMPM_OFFSET))(this, a1, a2);
		}

		::System::Boolean _SetData_b__0_0(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CECJDKMMMHH__SETDATA_B__0_0_OFFSET))(this, a1);
		}

	};
