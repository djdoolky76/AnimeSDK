#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHNBPHNHNBI.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FMMLIBBFDHG_CTOR_OFFSET UNITYSDK_OFFSET(0x167D2820)
#define FMMLIBBFDHG_GET_BASE_OFFSET UNITYSDK_OFFSET(0x167D2760)
#define FMMLIBBFDHG_GET_DECORATION_OFFSET UNITYSDK_OFFSET(0x167D27A0)
#define FMMLIBBFDHG_GET_DISHID_OFFSET UNITYSDK_OFFSET(0x167D2700)
#define FMMLIBBFDHG_GET_FILLINGS_OFFSET UNITYSDK_OFFSET(0x167D2780)
#define FMMLIBBFDHG_GET_GREEDYORDERBUBBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x167D2800)
#define FMMLIBBFDHG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x167D2740)
#define FMMLIBBFDHG_GET_ISORDEREDRECIPE_OFFSET UNITYSDK_OFFSET(0x167D27C0)
#define FMMLIBBFDHG_GET_ISSINGLESHOW_OFFSET UNITYSDK_OFFSET(0x167D27E0)
#define FMMLIBBFDHG_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x167D2720)
#define FMMLIBBFDHG_SET_BASE_OFFSET UNITYSDK_OFFSET(0x167D2770)
#define FMMLIBBFDHG_SET_DECORATION_OFFSET UNITYSDK_OFFSET(0x167D27B0)
#define FMMLIBBFDHG_SET_DISHID_OFFSET UNITYSDK_OFFSET(0x167D2710)
#define FMMLIBBFDHG_SET_FILLINGS_OFFSET UNITYSDK_OFFSET(0x167D2790)
#define FMMLIBBFDHG_SET_GREEDYORDERBUBBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x167D2810)
#define FMMLIBBFDHG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x167D2750)
#define FMMLIBBFDHG_SET_ISORDEREDRECIPE_OFFSET UNITYSDK_OFFSET(0x167D27D0)
#define FMMLIBBFDHG_SET_ISSINGLESHOW_OFFSET UNITYSDK_OFFSET(0x167D27F0)
#define FMMLIBBFDHG_SET_PRICE_OFFSET UNITYSDK_OFFSET(0x167D2730)

inline static constexpr unsigned int FMMLIBBFDHG_TypeDefinitionIndex = 77012;

	class FMMLIBBFDHG : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::LHNBPHNHNBI>* _Fillings_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::System::UInt32 _Price_k__BackingField; // 0x20
		::System::Boolean _IsOrderedRecipe_k__BackingField; // 0x24
		::System::Boolean _IsSingleShow_k__BackingField; // 0x25
		::System::Byte _padding0[0x2];
		::System::UInt32 _DishId_k__BackingField; // 0x28
		::System::UInt32 _GreedyOrderBubbleWidth_k__BackingField; // 0x2C
		::RPG::GameCore::IngredientKind _Decoration_k__BackingField; // 0x30
		::RPG::GameCore::IngredientKind _Base_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_DishId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_GET_DISHID_OFFSET))(this);
		}

		::System::Void set_DishId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_SET_DISHID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_GET_PRICE_OFFSET))(this);
		}

		::System::Void set_Price(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_SET_PRICE_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::GameCore::IngredientKind get_Base()
		{
			return ((::RPG::GameCore::IngredientKind(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_GET_BASE_OFFSET))(this);
		}

		::System::Void set_Base(::RPG::GameCore::IngredientKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IngredientKind))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_SET_BASE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::LHNBPHNHNBI>* get_Fillings()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::LHNBPHNHNBI>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_GET_FILLINGS_OFFSET))(this);
		}

		::System::Void set_Fillings(::System::Collections::Generic::IReadOnlyList_1<::LHNBPHNHNBI>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::LHNBPHNHNBI>*))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_SET_FILLINGS_OFFSET))(this, a1);
		}

		::RPG::GameCore::IngredientKind get_Decoration()
		{
			return ((::RPG::GameCore::IngredientKind(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_GET_DECORATION_OFFSET))(this);
		}

		::System::Void set_Decoration(::RPG::GameCore::IngredientKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IngredientKind))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_SET_DECORATION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOrderedRecipe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_GET_ISORDEREDRECIPE_OFFSET))(this);
		}

		::System::Void set_IsOrderedRecipe(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_SET_ISORDEREDRECIPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSingleShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_GET_ISSINGLESHOW_OFFSET))(this);
		}

		::System::Void set_IsSingleShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_SET_ISSINGLESHOW_OFFSET))(this, a1);
		}

		::System::UInt32 get_GreedyOrderBubbleWidth()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_GET_GREEDYORDERBUBBLEWIDTH_OFFSET))(this);
		}

		::System::Void set_GreedyOrderBubbleWidth(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMMLIBBFDHG_SET_GREEDYORDERBUBBLEWIDTH_OFFSET))(this, a1);
		}

	};
