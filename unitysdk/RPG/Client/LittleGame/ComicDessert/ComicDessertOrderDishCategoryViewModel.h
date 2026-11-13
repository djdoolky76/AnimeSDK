#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/DishCategoryKind.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERDISHCATEGORYVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14FD40)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERDISHCATEGORYVIEWMODEL_GET_BUBBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1E14FD20)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERDISHCATEGORYVIEWMODEL_GET_DISHIDS_OFFSET UNITYSDK_OFFSET(0x1E14FCF0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERDISHCATEGORYVIEWMODEL_GET_ICONPATHS_OFFSET UNITYSDK_OFFSET(0x1E14FD00)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERDISHCATEGORYVIEWMODEL_GET_KIND_OFFSET UNITYSDK_OFFSET(0x1E14FCE0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERDISHCATEGORYVIEWMODEL_GET_SERVEDFLAGS_OFFSET UNITYSDK_OFFSET(0x1E14FD10)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERDISHCATEGORYVIEWMODEL_SET_BUBBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1E14FD30)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertOrderDishCategoryViewModel_TypeDefinitionIndex = 80129;

	class ComicDessertOrderDishCategoryViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _IconPaths_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::Boolean>* _ServedFlags_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _DishIDs_k__BackingField; // 0x20
		::System::Int32 _BubbleWidth_k__BackingField; // 0x28
		::RPG::Client::LittleGame::ComicDessert::DishCategoryKind _Kind_k__BackingField; // 0x2C
		::System::Void _ctor(::RPG::Client::LittleGame::ComicDessert::DishCategoryKind a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::DishCategoryKind, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERDISHCATEGORYVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::ComicDessert::DishCategoryKind get_Kind()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::DishCategoryKind(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERDISHCATEGORYVIEWMODEL_GET_KIND_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DishIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERDISHCATEGORYVIEWMODEL_GET_DISHIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_IconPaths()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERDISHCATEGORYVIEWMODEL_GET_ICONPATHS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Boolean>* get_ServedFlags()
		{
			return ((::System::Collections::Generic::List_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERDISHCATEGORYVIEWMODEL_GET_SERVEDFLAGS_OFFSET))(this);
		}

		::System::Int32 get_BubbleWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERDISHCATEGORYVIEWMODEL_GET_BUBBLEWIDTH_OFFSET))(this);
		}

		::System::Void set_BubbleWidth(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERDISHCATEGORYVIEWMODEL_SET_BUBBLEWIDTH_OFFSET))(this, a1);
		}

	};
}
