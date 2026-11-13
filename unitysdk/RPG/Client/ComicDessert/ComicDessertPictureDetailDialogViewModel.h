#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFCPCNGNEC.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Guid.h"
namespace RPG::Client::ComicDessert { class ComicDessertComicUnlockBubbleEntryViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96FE40)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_GET_BUBBLES_OFFSET UNITYSDK_OFFSET(0x1C9700E0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_GET_COMICPATH_OFFSET UNITYSDK_OFFSET(0x1C9700C0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_GET_FULLTITLE_OFFSET UNITYSDK_OFFSET(0x1C9700A0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_REPORTDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0x1C96FF20)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_SET_BUBBLES_OFFSET UNITYSDK_OFFSET(0x1C9700F0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_SET_COMICPATH_OFFSET UNITYSDK_OFFSET(0x1C9700D0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_SET_FULLTITLE_OFFSET UNITYSDK_OFFSET(0x1C9700B0)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertPictureDetailDialogViewModel_TypeDefinitionIndex = 77119;

	class ComicDessertPictureDetailDialogViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertComicUnlockBubbleEntryViewModel*>* _Bubbles_k__BackingField; // 0x10
		::System::String* _ComicPath_k__BackingField; // 0x18
		::CKFCPCNGNEC _IllustrationId; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _FullTitle_k__BackingField; // 0x28
		// static const ::System::String* _UI_PATH; // 0x0
		::System::Void _ctor(::CKFCPCNGNEC a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKFCPCNGNEC))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::System::Void ReportDialogOpen(::System::Guid a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_REPORTDIALOGOPEN_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_FullTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_GET_FULLTITLE_OFFSET))(this);
		}

		::System::Void set_FullTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_SET_FULLTITLE_OFFSET))(this, a1);
		}

		::System::String* get_ComicPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_GET_COMICPATH_OFFSET))(this);
		}

		::System::Void set_ComicPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_SET_COMICPATH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertComicUnlockBubbleEntryViewModel*>* get_Bubbles()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertComicUnlockBubbleEntryViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_GET_BUBBLES_OFFSET))(this);
		}

		::System::Void set_Bubbles(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertComicUnlockBubbleEntryViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertComicUnlockBubbleEntryViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREDETAILDIALOGVIEWMODEL_SET_BUBBLES_OFFSET))(this, a1);
		}

	};
}
