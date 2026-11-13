#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertOrderDishCategoryViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AHKCPAEGHOG_CTOR_OFFSET UNITYSDK_OFFSET(0x19B26160)
#define AHKCPAEGHOG_GDHBBOGKHGG_OFFSET UNITYSDK_OFFSET(0x19B25B80)

inline static constexpr unsigned int AHKCPAEGHOG_TypeDefinitionIndex = 79972;

	class AHKCPAEGHOG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKCPAEGHOG_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderDishCategoryViewModel*>* GDHBBOGKHGG(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderDishCategoryViewModel*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + AHKCPAEGHOG_GDHBBOGKHGG_OFFSET))(this, a1);
		}

	};
