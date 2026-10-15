#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJIFFMGIAHL;
class PIHNNIFOPOC;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define CECJDKMMMHH_CTOR_OFFSET UNITYSDK_OFFSET(0xC77A0F0)
#define CECJDKMMMHH_GMGKDFJAMPM_OFFSET UNITYSDK_OFFSET(0xC779F90)
#define CECJDKMMMHH_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0xC779C40)
#define CECJDKMMMHH_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0xC779BE0)
#define CECJDKMMMHH_KEDFCMPDIBN_OFFSET UNITYSDK_OFFSET(0xC779F10)
#define CECJDKMMMHH_KPKCFMCJBCF_OFFSET UNITYSDK_OFFSET(0xC7799C0)
#define CECJDKMMMHH__SETDATA_B__0_0_OFFSET UNITYSDK_OFFSET(0xC77A100)

inline static constexpr unsigned int CECJDKMMMHH_TypeDefinitionIndex = 65578;

	class CECJDKMMMHH : public ::System::Object
	{
	public:
		::RPG::Client::EquipmentItemData* DHNNOPBAJPF; // 0x10
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x18
		::FJIFFMGIAHL* JAPKCFJEKCH; // 0x20
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
