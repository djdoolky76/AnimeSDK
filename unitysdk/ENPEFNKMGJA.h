#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ENPEFNKMGJA_CTOR_OFFSET UNITYSDK_OFFSET(0x155AB4A0)
#define ENPEFNKMGJA_GET_INCOMEINCREASEPERCENT_OFFSET UNITYSDK_OFFSET(0x155AB480)
#define ENPEFNKMGJA_GET_PARTNERACTORICON_OFFSET UNITYSDK_OFFSET(0x155AB440)
#define ENPEFNKMGJA_GET_PARTNERACTORNAME_OFFSET UNITYSDK_OFFSET(0x155AB460)
#define ENPEFNKMGJA_SET_INCOMEINCREASEPERCENT_OFFSET UNITYSDK_OFFSET(0x155AB490)
#define ENPEFNKMGJA_SET_PARTNERACTORICON_OFFSET UNITYSDK_OFFSET(0x155AB450)
#define ENPEFNKMGJA_SET_PARTNERACTORNAME_OFFSET UNITYSDK_OFFSET(0x155AB470)

inline static constexpr unsigned int ENPEFNKMGJA_TypeDefinitionIndex = 79750;

	class ENPEFNKMGJA : public ::System::Object
	{
	public:
		::System::String* _PartnerActorIcon_k__BackingField; // 0x10
		::RPG::Client::TextID _PartnerActorName_k__BackingField; // 0x18
		::System::Int32 _IncomeIncreasePercent_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPEFNKMGJA_CTOR_OFFSET))(this);
		}

		::System::String* get_PartnerActorIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPEFNKMGJA_GET_PARTNERACTORICON_OFFSET))(this);
		}

		::System::Void set_PartnerActorIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENPEFNKMGJA_SET_PARTNERACTORICON_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PartnerActorName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPEFNKMGJA_GET_PARTNERACTORNAME_OFFSET))(this);
		}

		::System::Void set_PartnerActorName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + ENPEFNKMGJA_SET_PARTNERACTORNAME_OFFSET))(this, a1);
		}

		::System::Int32 get_IncomeIncreasePercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPEFNKMGJA_GET_INCOMEINCREASEPERCENT_OFFSET))(this);
		}

		::System::Void set_IncomeIncreasePercent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENPEFNKMGJA_SET_INCOMEINCREASEPERCENT_OFFSET))(this, a1);
		}

	};
