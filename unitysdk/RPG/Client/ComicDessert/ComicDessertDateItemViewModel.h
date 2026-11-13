#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEITEMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D02A3A0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEITEMVIEWMODEL_GET_DATETEXT_OFFSET UNITYSDK_OFFSET(0x1D02A3E0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEITEMVIEWMODEL_GET_HASFORUM_OFFSET UNITYSDK_OFFSET(0x1D02A400)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEITEMVIEWMODEL_GET_HASNEWCOMIC_OFFSET UNITYSDK_OFFSET(0x1D02A3F0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEITEMVIEWMODEL_GET_ISGREEDYLEVEL_OFFSET UNITYSDK_OFFSET(0x1D02A3D0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEITEMVIEWMODEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1D02A3C0)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertDateItemViewModel_TypeDefinitionIndex = 77110;

	class ComicDessertDateItemViewModel : public ::System::Object
	{
	public:
		::System::String* _DateText_k__BackingField; // 0x10
		::System::String* _State_k__BackingField; // 0x18
		::System::Boolean _HasForum_k__BackingField; // 0x20
		::System::Boolean _HasNewComic_k__BackingField; // 0x21
		::System::Boolean _IsGreedyLevel_k__BackingField; // 0x22
		::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEITEMVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* get_State()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEITEMVIEWMODEL_GET_STATE_OFFSET))(this);
		}

		::System::Boolean get_IsGreedyLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEITEMVIEWMODEL_GET_ISGREEDYLEVEL_OFFSET))(this);
		}

		::System::String* get_DateText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEITEMVIEWMODEL_GET_DATETEXT_OFFSET))(this);
		}

		::System::Boolean get_HasNewComic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEITEMVIEWMODEL_GET_HASNEWCOMIC_OFFSET))(this);
		}

		::System::Boolean get_HasForum()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEITEMVIEWMODEL_GET_HASFORUM_OFFSET))(this);
		}

	};
}
