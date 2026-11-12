#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkConditionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class ChimeraGalleryTalkRow; }

#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0xD4AEDA0)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD4B0330)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_NUMBEREDTITLE_OFFSET UNITYSDK_OFFSET(0xD4B0120)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_SORT_OFFSET UNITYSDK_OFFSET(0xD4AFE60)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xD4B0060)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET__ROW_OFFSET UNITYSDK_OFFSET(0xD4B0340)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGalleryTalkGroupEntry_TypeDefinitionIndex = 64866;

	class ChimeraGalleryTalkGroupEntry : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraTalkConditionType _ConditionType_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::GameCore::ChimeraTalkConditionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraTalkConditionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraTalkConditionType get_ConditionType()
		{
			return ((::RPG::GameCore::ChimeraTalkConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_CONDITIONTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraGalleryTalkRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraGalleryTalkRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_NumberedTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_NUMBEREDTITLE_OFFSET))(this);
		}

		::System::Single get_Sort()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_SORT_OFFSET))(this);
		}

	};
}
