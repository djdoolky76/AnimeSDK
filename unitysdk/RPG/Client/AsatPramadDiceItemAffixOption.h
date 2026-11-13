#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9CF10)
#define RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_AFFIXID_OFFSET UNITYSDK_OFFSET(0x1CA9CF60)
#define RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_ISFORBIDDEN_OFFSET UNITYSDK_OFFSET(0x1CA9CFD0)
#define RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_ISINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1CA9CFE0)
#define RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1CA9CFB0)
#define RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1CA9CFC0)
#define RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CA9CF80)
#define RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_PROPERTYICONPATH_OFFSET UNITYSDK_OFFSET(0x1CA9CFA0)
#define RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_PROPERTYNAMERELIC_OFFSET UNITYSDK_OFFSET(0x1CA9CF90)
#define RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1CA9CF70)

namespace RPG::Client
{
	inline static constexpr unsigned int AsatPramadDiceItemAffixOption_TypeDefinitionIndex = 68791;

	class AsatPramadDiceItemAffixOption : public ::System::Object
	{
	public:
		::System::String* _PropertyIconPath_k__BackingField; // 0x10
		::System::UInt32 _AffixID_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0x20
		::RPG::Client::TextID _PropertyNameRelic_k__BackingField; // 0x30
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x40
		::System::Boolean _IsRecommend_k__BackingField; // 0x44
		::System::Boolean _IsForbidden_k__BackingField; // 0x45
		::System::Boolean _IsSelected_k__BackingField; // 0x46
		::System::Boolean _IsInteractable_k__BackingField; // 0x47
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::AvatarPropertyType a2, ::RPG::Client::TextID a3, ::RPG::Client::TextID a4, ::System::String* a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AvatarPropertyType, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::UInt32 get_AffixID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_AFFIXID_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_PropertyNameRelic()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_PROPERTYNAMERELIC_OFFSET))(this);
		}

		::System::String* get_PropertyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_PROPERTYICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Boolean get_IsForbidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_ISFORBIDDEN_OFFSET))(this);
		}

		::System::Boolean get_IsInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMAFFIXOPTION_GET_ISINTERACTABLE_OFFSET))(this);
		}

	};
}
