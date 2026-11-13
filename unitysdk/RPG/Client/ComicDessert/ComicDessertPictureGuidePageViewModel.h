#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ComicDessert { class ComicDessertPictureGuideCellViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDEPAGEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9703B0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDEPAGEVIEWMODEL_GET_CELLS_OFFSET UNITYSDK_OFFSET(0x1C970490)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDEPAGEVIEWMODEL_SET_CELLS_OFFSET UNITYSDK_OFFSET(0x1C9704A0)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertPictureGuidePageViewModel_TypeDefinitionIndex = 77120;

	class ComicDessertPictureGuidePageViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertPictureGuideCellViewModel*>* _Cells_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDEPAGEVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertPictureGuideCellViewModel*>* get_Cells()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertPictureGuideCellViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDEPAGEVIEWMODEL_GET_CELLS_OFFSET))(this);
		}

		::System::Void set_Cells(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertPictureGuideCellViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertPictureGuideCellViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPICTUREGUIDEPAGEVIEWMODEL_SET_CELLS_OFFSET))(this, a1);
		}

	};
}
