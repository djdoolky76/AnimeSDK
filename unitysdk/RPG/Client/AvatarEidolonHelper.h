#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OADLFAMLGPP;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class AvatarRankConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_AVATAREIDOLONHELPER_CANEIDOLONRANKUP_OFFSET UNITYSDK_OFFSET(0xD02FCB0)
#define RPG_CLIENT_AVATAREIDOLONHELPER_GETEIDOLONBIGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD02FA60)
#define RPG_CLIENT_AVATAREIDOLONHELPER_GETEIDOLONITEMID_OFFSET UNITYSDK_OFFSET(0xD02F9B0)
#define RPG_CLIENT_AVATAREIDOLONHELPER_GETEIDOLONUNLOCKITEMDATA_OFFSET UNITYSDK_OFFSET(0xD02F7D0)
#define RPG_CLIENT_AVATAREIDOLONHELPER__GETEIDOLON_OFFSET UNITYSDK_OFFSET(0xD02FAC0)
#define RPG_CLIENT_AVATAREIDOLONHELPER__ISAVATARRANKUPCOSTENOUGH_OFFSET UNITYSDK_OFFSET(0xD030020)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEidolonHelper_TypeDefinitionIndex = 64072;

	class AvatarEidolonHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::ItemData* GetEidolonUnlockItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREIDOLONHELPER_GETEIDOLONUNLOCKITEMDATA_OFFSET))(a1);
		}

		static ::System::UInt32 GetEidolonItemID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREIDOLONHELPER_GETEIDOLONITEMID_OFFSET))(a1);
		}

		static ::System::String* GetEidolonBigImagePath(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREIDOLONHELPER_GETEIDOLONBIGIMAGEPATH_OFFSET))(a1, a2);
		}

		static ::System::Boolean CanEidolonRankUp(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREIDOLONHELPER_CANEIDOLONRANKUP_OFFSET))(a1);
		}

		static ::OADLFAMLGPP* _GetEidolon(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
		{
			return ((::OADLFAMLGPP*(*)(::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREIDOLONHELPER__GETEIDOLON_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsAvatarRankUpCostEnough(::RPG::GameCore::AvatarRankConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREIDOLONHELPER__ISAVATARRANKUPCOSTENOUGH_OFFSET))(a1);
		}

	};
}
