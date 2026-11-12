#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ComicDessert::Service { class ComicDessertWindowService; }
namespace System { class String; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDECELLVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD509A10)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDECELLVIEWMODEL_GET_CELLID_OFFSET UNITYSDK_OFFSET(0xD509A30)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDECELLVIEWMODEL_GET_COMICPATH_OFFSET UNITYSDK_OFFSET(0xD509A60)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDECELLVIEWMODEL_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD509A40)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDECELLVIEWMODEL_GET_SHORTTITLE_OFFSET UNITYSDK_OFFSET(0xD509A50)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDECELLVIEWMODEL_OPENDETAIL_OFFSET UNITYSDK_OFFSET(0xD509A70)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertPictureGuideCellViewModel_TypeDefinitionIndex = 77122;

	class ComicDessertPictureGuideCellViewModel : public ::System::Object
	{
	public:
		::System::String* _ComicPath_k__BackingField; // 0x10
		::RPG::Client::ComicDessert::Service::ComicDessertWindowService* _WindowService; // 0x18
		::System::Boolean _IsUnlocked_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 _CellId_k__BackingField; // 0x24
		::RPG::Client::TextID _ShortTitle_k__BackingField; // 0x28
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::RPG::Client::TextID a3, ::System::String* a4, ::RPG::Client::ComicDessert::Service::ComicDessertWindowService* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::Client::TextID, ::System::String*, ::RPG::Client::ComicDessert::Service::ComicDessertWindowService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDECELLVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_CellId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDECELLVIEWMODEL_GET_CELLID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDECELLVIEWMODEL_GET_ISUNLOCKED_OFFSET))(this);
		}

		::RPG::Client::TextID get_ShortTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDECELLVIEWMODEL_GET_SHORTTITLE_OFFSET))(this);
		}

		::System::String* get_ComicPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDECELLVIEWMODEL_GET_COMICPATH_OFFSET))(this);
		}

		::System::Void OpenDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDECELLVIEWMODEL_OPENDETAIL_OFFSET))(this);
		}

	};
}
