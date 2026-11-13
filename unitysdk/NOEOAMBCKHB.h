#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDGNGFLEPIM.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOEOAMBCKHB_CTOR_OFFSET UNITYSDK_OFFSET(0x19CE31C0)
#define NOEOAMBCKHB_FBBEEOPNMHM_OFFSET UNITYSDK_OFFSET(0x19CE2D60)
#define NOEOAMBCKHB_FNACDFOALAJ_OFFSET UNITYSDK_OFFSET(0x19CE2900)
#define NOEOAMBCKHB_GET_BASE_OFFSET UNITYSDK_OFFSET(0x19CE2820)
#define NOEOAMBCKHB_GET_DECORATION_OFFSET UNITYSDK_OFFSET(0x19CE2860)
#define NOEOAMBCKHB_GET_DISHID_OFFSET UNITYSDK_OFFSET(0x19CE2800)
#define NOEOAMBCKHB_GET_FILLINGS_OFFSET UNITYSDK_OFFSET(0x19CE2840)
#define NOEOAMBCKHB_GET_ISORDERED_OFFSET UNITYSDK_OFFSET(0x19CE2880)
#define NOEOAMBCKHB_HDMPODFMCNF_OFFSET UNITYSDK_OFFSET(0x19CE28A0)
#define NOEOAMBCKHB_LPIDPFJNBCO_OFFSET UNITYSDK_OFFSET(0x19CE2D00)
#define NOEOAMBCKHB_SET_BASE_OFFSET UNITYSDK_OFFSET(0x19CE2830)
#define NOEOAMBCKHB_SET_DECORATION_OFFSET UNITYSDK_OFFSET(0x19CE2870)
#define NOEOAMBCKHB_SET_DISHID_OFFSET UNITYSDK_OFFSET(0x19CE2810)
#define NOEOAMBCKHB_SET_FILLINGS_OFFSET UNITYSDK_OFFSET(0x19CE2850)
#define NOEOAMBCKHB_SET_ISORDERED_OFFSET UNITYSDK_OFFSET(0x19CE2890)

inline static constexpr unsigned int NOEOAMBCKHB_TypeDefinitionIndex = 79862;

	class NOEOAMBCKHB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::IngredientKind>* HFOFIODMFGB; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IngredientKind, ::System::Int32>* PLFLIAMCCKB; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::GDGNGFLEPIM>* _Fillings_k__BackingField; // 0x20
		::RPG::GameCore::IngredientKind _Base_k__BackingField; // 0x28
		::System::Boolean _IsOrdered_k__BackingField; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 _DishID_k__BackingField; // 0x30
		::RPG::GameCore::IngredientKind _Decoration_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_DishID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_GET_DISHID_OFFSET))(this);
		}

		::System::Void set_DishID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_SET_DISHID_OFFSET))(this, a1);
		}

		::RPG::GameCore::IngredientKind get_Base()
		{
			return ((::RPG::GameCore::IngredientKind(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_GET_BASE_OFFSET))(this);
		}

		::System::Void set_Base(::RPG::GameCore::IngredientKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IngredientKind))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_SET_BASE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::GDGNGFLEPIM>* get_Fillings()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::GDGNGFLEPIM>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_GET_FILLINGS_OFFSET))(this);
		}

		::System::Void set_Fillings(::System::Collections::Generic::IReadOnlyList_1<::GDGNGFLEPIM>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::GDGNGFLEPIM>*))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_SET_FILLINGS_OFFSET))(this, a1);
		}

		::RPG::GameCore::IngredientKind get_Decoration()
		{
			return ((::RPG::GameCore::IngredientKind(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_GET_DECORATION_OFFSET))(this);
		}

		::System::Void set_Decoration(::RPG::GameCore::IngredientKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IngredientKind))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_SET_DECORATION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOrdered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_GET_ISORDERED_OFFSET))(this);
		}

		::System::Void set_IsOrdered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_SET_ISORDERED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::IngredientKind, ::System::Int32>* HDMPODFMCNF()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::IngredientKind, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_HDMPODFMCNF_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>* LPIDPFJNBCO()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_LPIDPFJNBCO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::IngredientKind>* FBBEEOPNMHM()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::IngredientKind>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_FBBEEOPNMHM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IngredientKind, ::System::Int32>* FNACDFOALAJ()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IngredientKind, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEOAMBCKHB_FNACDFOALAJ_OFFSET))(this);
		}

	};
