#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHLPMJFEECF;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHLPMJFEECF_ALFPDGNALPM_OFFSET UNITYSDK_OFFSET(0xEBEA0F0)
#define DHLPMJFEECF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xEBE9B50)
#define DHLPMJFEECF_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE9BF0)
#define DHLPMJFEECF_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xEBE9AA0)
#define DHLPMJFEECF_GET_PLANDATA_OFFSET UNITYSDK_OFFSET(0xEBE9B30)
#define DHLPMJFEECF_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xEBE9A80)
#define DHLPMJFEECF_IANNMHIBLCL_OFFSET UNITYSDK_OFFSET(0xEBE9CC0)
#define DHLPMJFEECF_ICNHJCLKPGF_OFFSET UNITYSDK_OFFSET(0xEBE9DD0)
#define DHLPMJFEECF_IOLDPPAGAEC_OFFSET UNITYSDK_OFFSET(0xEBE9C30)
#define DHLPMJFEECF_LNGOHBLAPIO_OFFSET UNITYSDK_OFFSET(0xEBE9D80)
#define DHLPMJFEECF_MBPCIFAIMKI_OFFSET UNITYSDK_OFFSET(0xEBE9AC0)
#define DHLPMJFEECF_PMMLIOOMBON_OFFSET UNITYSDK_OFFSET(0xEBE9D30)
#define DHLPMJFEECF_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0xEBE9AB0)
#define DHLPMJFEECF_SET_PLANDATA_OFFSET UNITYSDK_OFFSET(0xEBE9B40)
#define DHLPMJFEECF_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xEBE9A90)

	class DHLPMJFEECF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* DBHLFFFDPAG; // 0x10
		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* _PlanData_k__BackingField; // 0x18
		::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x20
		::System::UInt32 _Version_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPMJFEECF_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPMJFEECF_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHLPMJFEECF_SET_VERSION_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPMJFEECF_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + DHLPMJFEECF_SET_AVATAR_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarRelicRecommendRow* MBPCIFAIMKI()
		{
			return ((::RPG::GameCore::AvatarRelicRecommendRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPMJFEECF_MBPCIFAIMKI_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* get_PlanData()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPMJFEECF_GET_PLANDATA_OFFSET))(this);
		}

		::System::Void set_PlanData(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + DHLPMJFEECF_SET_PLANDATA_OFFSET))(this, a1);
		}

		static ::DHLPMJFEECF* BPLPBPMEODA()
		{
			return ((::DHLPMJFEECF*(*)())((::PBYTE)hIl2Cpp + DHLPMJFEECF_BPLPBPMEODA_OFFSET))();
		}

		::System::Void IOLDPPAGAEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPMJFEECF_IOLDPPAGAEC_OFFSET))(this);
		}

		::System::Void IANNMHIBLCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPMJFEECF_IANNMHIBLCL_OFFSET))(this);
		}

		::System::Void PMMLIOOMBON(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + DHLPMJFEECF_PMMLIOOMBON_OFFSET))(this, a1);
		}

		::System::Void LNGOHBLAPIO(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + DHLPMJFEECF_LNGOHBLAPIO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* ICNHJCLKPGF()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPMJFEECF_ICNHJCLKPGF_OFFSET))(this);
		}

		::System::Boolean ALFPDGNALPM(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + DHLPMJFEECF_ALFPDGNALPM_OFFSET))(this, a1);
		}

	};
