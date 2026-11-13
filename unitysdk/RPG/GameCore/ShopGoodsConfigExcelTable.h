#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShopGoodsConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1F3DFFB0)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3E0180)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F3E0030)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F3DFE40)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F3DFD60)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F3DFDE0)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F3DEC70)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F3DECB0)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F3DEEE0)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F3DF0B0)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F3DFA40)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F3DF010)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F3DEF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopGoodsConfigExcelTable_TypeDefinitionIndex = 15265;

	class ShopGoodsConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "ShopGoodsConfigExcelTable")->GetStaticField(0x15EF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ShopGoodsConfigExcelTable")->GetStaticField(0x15EF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ShopGoodsConfigExcelTable")->GetStaticField(0x15F00);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ShopGoodsConfigExcelTable")->GetStaticField(0x4E30);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ShopGoodsConfigExcelTable")->GetStaticField(0x4E31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ShopGoodsConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ShopGoodsConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsConfigRow*>, ::RPG::GameCore::ShopGoodsConfigRow*> AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsConfigRow*>, ::RPG::GameCore::ShopGoodsConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::ShopGoodsConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ShopGoodsConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
