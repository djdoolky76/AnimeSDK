#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPGKEGIKGN_AAGONFFJLHB_OFFSET UNITYSDK_OFFSET(0xBAB79D0)
#define NAPGKEGIKGN_CTOR_OFFSET UNITYSDK_OFFSET(0xBAB7D50)
#define NAPGKEGIKGN_KOMIDHBOOIC_OFFSET UNITYSDK_OFFSET(0xBAB7B00)
#define NAPGKEGIKGN_PAMCFLCNAPG_OFFSET UNITYSDK_OFFSET(0xBAB7AA0)

inline static constexpr unsigned int NAPGKEGIKGN_TypeDefinitionIndex = 66858;

	class NAPGKEGIKGN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGKEGIKGN_CTOR_OFFSET))(this);
		}

		::System::UInt32 AAGONFFJLHB(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + NAPGKEGIKGN_AAGONFFJLHB_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RelicSmartSuit::RankType PAMCFLCNAPG(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a2)
		{
			return ((::RPG::Client::RelicSmartSuit::RankType(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + NAPGKEGIKGN_PAMCFLCNAPG_OFFSET))(this, a1, a2);
		}

		::System::Boolean KOMIDHBOOIC(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NAPGKEGIKGN_KOMIDHBOOIC_OFFSET))(this, a1, a2);
		}

	};
