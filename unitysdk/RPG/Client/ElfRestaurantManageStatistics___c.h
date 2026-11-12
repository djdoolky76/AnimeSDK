#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD792140)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD792180)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTPRODUCINGPRODUCTIDS_B__21_0_OFFSET UNITYSDK_OFFSET(0xD7921F0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTPRODUCINGPRODUCTIDS_B__21_1_OFFSET UNITYSDK_OFFSET(0xD792200)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTSELLINGRECIPEIDS_B__16_0_OFFSET UNITYSDK_OFFSET(0xD792190)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTSELLINGRECIPEIDS_B__16_1_OFFSET UNITYSDK_OFFSET(0xD7921A0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETHIGHESTSELLPRICERECIPEIDS_B__19_0_OFFSET UNITYSDK_OFFSET(0xD7921D0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETHIGHESTSELLPRICERECIPEIDS_B__19_1_OFFSET UNITYSDK_OFFSET(0xD7921E0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETTOTALRECIPECOUNT_B__17_0_OFFSET UNITYSDK_OFFSET(0xD7921B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantManageStatistics___c_TypeDefinitionIndex = 65187;

	class ElfRestaurantManageStatistics___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x44AF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x44AF8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x44B00);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__21_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x44B08);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x44B10);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x44B18);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x44B20);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x44B28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetBestSellingRecipeIDs_b__16_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTSELLINGRECIPEIDS_B__16_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetBestSellingRecipeIDs_b__16_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTSELLINGRECIPEIDS_B__16_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetTotalRecipeCount_b__17_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETTOTALRECIPECOUNT_B__17_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetHighestSellPriceRecipeIDs_b__19_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETHIGHESTSELLPRICERECIPEIDS_B__19_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHighestSellPriceRecipeIDs_b__19_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETHIGHESTSELLPRICERECIPEIDS_B__19_1_OFFSET))(this, a1);
		}

		::System::Int32 _GetBestProducingProductIDs_b__21_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTPRODUCINGPRODUCTIDS_B__21_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetBestProducingProductIDs_b__21_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTPRODUCINGPRODUCTIDS_B__21_1_OFFSET))(this, a1);
		}

	};
}
