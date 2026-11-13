#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OIJLBJIKKNJ.h"
namespace RPG::Client::ComicDessert { class ComicDessertComicUnlockBubbleEntryViewModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D028480)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKVIEWMODEL_GET_BUBBLES_OFFSET UNITYSDK_OFFSET(0x1D028570)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKVIEWMODEL_GET_COMICIMGPATH_OFFSET UNITYSDK_OFFSET(0x1D028550)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKVIEWMODEL_REQUESTCLOSE_OFFSET UNITYSDK_OFFSET(0x1D028590)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKVIEWMODEL_SET_BUBBLES_OFFSET UNITYSDK_OFFSET(0x1D028580)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKVIEWMODEL_SET_COMICIMGPATH_OFFSET UNITYSDK_OFFSET(0x1D028560)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertComicUnlockViewModel_TypeDefinitionIndex = 77107;

	class ComicDessertComicUnlockViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertComicUnlockBubbleEntryViewModel*>* _Bubbles_k__BackingField; // 0x10
		::System::Action* _CloseRequested; // 0x18
		::System::String* _ComicImgPath_k__BackingField; // 0x20
		::System::Void _ctor(::OIJLBJIKKNJ a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIJLBJIKKNJ, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_ComicImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKVIEWMODEL_GET_COMICIMGPATH_OFFSET))(this);
		}

		::System::Void set_ComicImgPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKVIEWMODEL_SET_COMICIMGPATH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertComicUnlockBubbleEntryViewModel*>* get_Bubbles()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertComicUnlockBubbleEntryViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKVIEWMODEL_GET_BUBBLES_OFFSET))(this);
		}

		::System::Void set_Bubbles(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertComicUnlockBubbleEntryViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertComicUnlockBubbleEntryViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKVIEWMODEL_SET_BUBBLES_OFFSET))(this, a1);
		}

		::System::Void RequestClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKVIEWMODEL_REQUESTCLOSE_OFFSET))(this);
		}

	};
}
