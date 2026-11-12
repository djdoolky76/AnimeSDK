#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJJDGONFDOC;
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertOrderDishCategoryViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKBGNPHEABE_CTOR_OFFSET UNITYSDK_OFFSET(0x16443D30)
#define EKBGNPHEABE_GDHBBOGKHGG_OFFSET UNITYSDK_OFFSET(0x16443D40)

inline static constexpr unsigned int EKBGNPHEABE_TypeDefinitionIndex = 79972;

	class EKBGNPHEABE : public ::System::Object
	{
	public:
		::EJJDGONFDOC* BECABMLCIAJ; // 0x10
		::System::Void _ctor(::EJJDGONFDOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJJDGONFDOC*))((::PBYTE)hIl2Cpp + EKBGNPHEABE_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderDishCategoryViewModel*>* GDHBBOGKHGG(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderDishCategoryViewModel*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EKBGNPHEABE_GDHBBOGKHGG_OFFSET))(this, a1);
		}

	};
