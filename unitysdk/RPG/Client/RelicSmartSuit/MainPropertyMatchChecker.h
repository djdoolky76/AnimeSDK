#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CENEJCKEFHJ;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::RelicSmartSuit { class MainPropertyMatchChecker; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }

#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_CREATE_OFFSET UNITYSDK_OFFSET(0xDE7E950)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_CTOR_OFFSET UNITYSDK_OFFSET(0xDE7E9C0)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_1_OFFSET UNITYSDK_OFFSET(0xDE7EA30)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_2_OFFSET UNITYSDK_OFFSET(0xDE7ECB0)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_OFFSET UNITYSDK_OFFSET(0xDE7E9D0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int MainPropertyMatchChecker_TypeDefinitionIndex = 74390;

	class MainPropertyMatchChecker : public ::System::Object
	{
	public:
		::CENEJCKEFHJ* _DataSource; // 0x10
		::System::Void _ctor(::CENEJCKEFHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENEJCKEFHJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicSmartSuit::MainPropertyMatchChecker* Create(::CENEJCKEFHJ* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::MainPropertyMatchChecker*(*)(::CENEJCKEFHJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_CREATE_OFFSET))(a1);
		}

		::System::Boolean IsMainPropertyMatch(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_OFFSET))(this, a1);
		}

		::System::Boolean IsMainPropertyMatch_1(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_1_OFFSET))(this, a1);
		}

		static ::System::Boolean IsMainPropertyMatch_2(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicRecommendData* a2, ::RPG::AvatarSystem::IAvatar* a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*, ::RPG::Client::RelicRecommendData*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_2_OFFSET))(a1, a2, a3);
		}

	};
}
