#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKCLHMNONOD.h"
#include "unitysdk/LHNBPHNHNBI.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NKLAJLPIJCF_CTOR_OFFSET UNITYSDK_OFFSET(0xC51E2D0)
#define NKLAJLPIJCF_GET_BASE_OFFSET UNITYSDK_OFFSET(0xC51E210)
#define NKLAJLPIJCF_GET_DECORATION_OFFSET UNITYSDK_OFFSET(0xC51E250)
#define NKLAJLPIJCF_GET_DISHID_OFFSET UNITYSDK_OFFSET(0xC51E170)
#define NKLAJLPIJCF_GET_FILLINGS_OFFSET UNITYSDK_OFFSET(0xC51E230)
#define NKLAJLPIJCF_GET_GREEDYORDERBUBBLEWIDTH_OFFSET UNITYSDK_OFFSET(0xC51E2B0)
#define NKLAJLPIJCF_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC51E190)
#define NKLAJLPIJCF_GET_ISORDEREDRECIPE_OFFSET UNITYSDK_OFFSET(0xC51E270)
#define NKLAJLPIJCF_GET_ISSINGLESHOW_OFFSET UNITYSDK_OFFSET(0xC51E290)
#define NKLAJLPIJCF_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xC51E1B0)
#define NKLAJLPIJCF_GET_PRICE_OFFSET UNITYSDK_OFFSET(0xC51E1F0)
#define NKLAJLPIJCF_GET_UNLOCKCYCLE_OFFSET UNITYSDK_OFFSET(0xC51E1D0)
#define NKLAJLPIJCF_SET_BASE_OFFSET UNITYSDK_OFFSET(0xC51E220)
#define NKLAJLPIJCF_SET_DECORATION_OFFSET UNITYSDK_OFFSET(0xC51E260)
#define NKLAJLPIJCF_SET_DISHID_OFFSET UNITYSDK_OFFSET(0xC51E180)
#define NKLAJLPIJCF_SET_FILLINGS_OFFSET UNITYSDK_OFFSET(0xC51E240)
#define NKLAJLPIJCF_SET_GREEDYORDERBUBBLEWIDTH_OFFSET UNITYSDK_OFFSET(0xC51E2C0)
#define NKLAJLPIJCF_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC51E1A0)
#define NKLAJLPIJCF_SET_ISORDEREDRECIPE_OFFSET UNITYSDK_OFFSET(0xC51E280)
#define NKLAJLPIJCF_SET_ISSINGLESHOW_OFFSET UNITYSDK_OFFSET(0xC51E2A0)
#define NKLAJLPIJCF_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xC51E1C0)
#define NKLAJLPIJCF_SET_PRICE_OFFSET UNITYSDK_OFFSET(0xC51E200)
#define NKLAJLPIJCF_SET_UNLOCKCYCLE_OFFSET UNITYSDK_OFFSET(0xC51E1E0)

inline static constexpr unsigned int NKLAJLPIJCF_TypeDefinitionIndex = 77056;

	class NKLAJLPIJCF : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::LHNBPHNHNBI>* _Fillings_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::System::String* _ModelPath_k__BackingField; // 0x20
		::RPG::GameCore::IngredientKind _Base_k__BackingField; // 0x28
		::System::Boolean _IsOrderedRecipe_k__BackingField; // 0x2C
		::System::Boolean _IsSingleShow_k__BackingField; // 0x2D
		::System::Byte _padding0[0x2];
		::System::UInt32 _Price_k__BackingField; // 0x30
		::System::UInt32 _UnlockCycle_k__BackingField; // 0x34
		::System::UInt32 _GreedyOrderBubbleWidth_k__BackingField; // 0x38
		::RPG::GameCore::IngredientKind _Decoration_k__BackingField; // 0x3C
		::AKCLHMNONOD _DishId_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_CTOR_OFFSET))(this);
		}

		::AKCLHMNONOD get_DishId()
		{
			return ((::AKCLHMNONOD(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_GET_DISHID_OFFSET))(this);
		}

		::System::Void set_DishId(::AKCLHMNONOD a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKCLHMNONOD))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_SET_DISHID_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_GET_MODELPATH_OFFSET))(this);
		}

		::System::Void set_ModelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_SET_MODELPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockCycle()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_GET_UNLOCKCYCLE_OFFSET))(this);
		}

		::System::Void set_UnlockCycle(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_SET_UNLOCKCYCLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_GET_PRICE_OFFSET))(this);
		}

		::System::Void set_Price(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_SET_PRICE_OFFSET))(this, a1);
		}

		::RPG::GameCore::IngredientKind get_Base()
		{
			return ((::RPG::GameCore::IngredientKind(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_GET_BASE_OFFSET))(this);
		}

		::System::Void set_Base(::RPG::GameCore::IngredientKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IngredientKind))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_SET_BASE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::LHNBPHNHNBI>* get_Fillings()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::LHNBPHNHNBI>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_GET_FILLINGS_OFFSET))(this);
		}

		::System::Void set_Fillings(::System::Collections::Generic::IReadOnlyList_1<::LHNBPHNHNBI>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::LHNBPHNHNBI>*))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_SET_FILLINGS_OFFSET))(this, a1);
		}

		::RPG::GameCore::IngredientKind get_Decoration()
		{
			return ((::RPG::GameCore::IngredientKind(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_GET_DECORATION_OFFSET))(this);
		}

		::System::Void set_Decoration(::RPG::GameCore::IngredientKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IngredientKind))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_SET_DECORATION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOrderedRecipe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_GET_ISORDEREDRECIPE_OFFSET))(this);
		}

		::System::Void set_IsOrderedRecipe(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_SET_ISORDEREDRECIPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSingleShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_GET_ISSINGLESHOW_OFFSET))(this);
		}

		::System::Void set_IsSingleShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_SET_ISSINGLESHOW_OFFSET))(this, a1);
		}

		::System::UInt32 get_GreedyOrderBubbleWidth()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_GET_GREEDYORDERBUBBLEWIDTH_OFFSET))(this);
		}

		::System::Void set_GreedyOrderBubbleWidth(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NKLAJLPIJCF_SET_GREEDYORDERBUBBLEWIDTH_OFFSET))(this, a1);
		}

	};
