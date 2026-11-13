#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipCraftRecipeCollection; }
namespace RPG::Client { class IGridFightEquipCraftRecipeEntry; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D172850)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D172890)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYADDITEM_B__10_0_OFFSET UNITYSDK_OFFSET(0x1D172B40)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYADDITEM_B__10_1_OFFSET UNITYSDK_OFFSET(0x1D172B60)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYADDITEM_B__10_3_OFFSET UNITYSDK_OFFSET(0x1D172BC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYELATIONLAUGHPOINTEQUIPS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D172AA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYELATIONLAUGHPOINTEQUIPS_B__8_1_OFFSET UNITYSDK_OFFSET(0x1D172AC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYELATIONLAUGHPOINTEQUIPS_B__8_3_OFFSET UNITYSDK_OFFSET(0x1D172B20)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1D172960)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__6_1_OFFSET UNITYSDK_OFFSET(0x1D172980)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__6_3_OFFSET UNITYSDK_OFFSET(0x1D1729E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1D172A00)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__7_1_OFFSET UNITYSDK_OFFSET(0x1D172A20)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__7_3_OFFSET UNITYSDK_OFFSET(0x1D172A80)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCONTAINSITEM_B__4_0_OFFSET UNITYSDK_OFFSET(0x1D1728B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCONTAINSITEM_B__4_1_OFFSET UNITYSDK_OFFSET(0x1D1728D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCONTAINSITEM_B__4_3_OFFSET UNITYSDK_OFFSET(0x1D172930)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCONTAINSITEM_B__5_0_OFFSET UNITYSDK_OFFSET(0x1D172950)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETTARGETEQUIPCRAFTRECIPES_B__3_0_OFFSET UNITYSDK_OFFSET(0x1D1728A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftMapInfo___c_TypeDefinitionIndex = 66047;

	class GridFightEquipCraftMapInfo___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::IGridFightEquipCraftRecipeEntry*>** StaticGet___9__3_0()
		{
			return (::System::Converter_2<::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::IGridFightEquipCraftRecipeEntry*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70CE0);
		}

		static ::System::Func_2<::System::Object*, ::RPG::Client::GridFightEquipCraftRecipe*>** StaticGet___9__10_3()
		{
			return (::System::Func_2<::System::Object*, ::RPG::Client::GridFightEquipCraftRecipe*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70CE8);
		}

		static ::System::Func_2<::System::Object*, ::RPG::Client::GridFightEquipCraftRecipe*>** StaticGet___9__8_3()
		{
			return (::System::Func_2<::System::Object*, ::RPG::Client::GridFightEquipCraftRecipe*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70CF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70CF8);
		}

		static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Object*>** StaticGet___9__10_1()
		{
			return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Object*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70D00);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70D08);
		}

		static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Object*>** StaticGet___9__7_1()
		{
			return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Object*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70D10);
		}

		static ::System::Converter_2<::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::IGridFightEquipCraftRecipeEntry*>** StaticGet___9__5_0()
		{
			return (::System::Converter_2<::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::IGridFightEquipCraftRecipeEntry*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70D18);
		}

		static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Object*>** StaticGet___9__4_1()
		{
			return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Object*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70D20);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70D28);
		}

		static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Object*>** StaticGet___9__8_1()
		{
			return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Object*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70D30);
		}

		static ::System::Func_2<::System::Object*, ::RPG::Client::GridFightEquipCraftRecipe*>** StaticGet___9__4_3()
		{
			return (::System::Func_2<::System::Object*, ::RPG::Client::GridFightEquipCraftRecipe*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70D38);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70D40);
		}

		static ::System::Func_2<::System::Object*, ::RPG::Client::GridFightEquipCraftRecipe*>** StaticGet___9__6_3()
		{
			return (::System::Func_2<::System::Object*, ::RPG::Client::GridFightEquipCraftRecipe*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70D48);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70D50);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70D58);
		}

		static ::System::Func_2<::System::Object*, ::RPG::Client::GridFightEquipCraftRecipe*>** StaticGet___9__7_3()
		{
			return (::System::Func_2<::System::Object*, ::RPG::Client::GridFightEquipCraftRecipe*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70D60);
		}

		static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Object*>** StaticGet___9__6_1()
		{
			return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Object*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70D68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::IGridFightEquipCraftRecipeEntry* _GetTargetEquipCraftRecipes_b__3_0(::RPG::Client::GridFightEquipCraftRecipe* a1)
		{
			return ((::RPG::Client::IGridFightEquipCraftRecipeEntry*(*)(::PVOID, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETTARGETEQUIPCRAFTRECIPES_B__3_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>* _GetRecipesContainsItem_b__4_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCONTAINSITEM_B__4_0_OFFSET))(this, a1);
		}

		::System::Object* _GetRecipesContainsItem_b__4_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1, ::RPG::Client::GridFightEquipCraftRecipe* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCONTAINSITEM_B__4_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightEquipCraftRecipe* _GetRecipesContainsItem_b__4_3(::System::Object* a1)
		{
			return ((::RPG::Client::GridFightEquipCraftRecipe*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCONTAINSITEM_B__4_3_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightEquipCraftRecipeEntry* _GetRecipesContainsItem_b__5_0(::RPG::Client::GridFightEquipCraftRecipe* a1)
		{
			return ((::RPG::Client::IGridFightEquipCraftRecipeEntry*(*)(::PVOID, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCONTAINSITEM_B__5_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>* _GetRecipesCanCraft_b__6_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__6_0_OFFSET))(this, a1);
		}

		::System::Object* _GetRecipesCanCraft_b__6_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1, ::RPG::Client::GridFightEquipCraftRecipe* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__6_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightEquipCraftRecipe* _GetRecipesCanCraft_b__6_3(::System::Object* a1)
		{
			return ((::RPG::Client::GridFightEquipCraftRecipe*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__6_3_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>* _GetRecipesCanCraft_b__7_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__7_0_OFFSET))(this, a1);
		}

		::System::Object* _GetRecipesCanCraft_b__7_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1, ::RPG::Client::GridFightEquipCraftRecipe* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__7_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightEquipCraftRecipe* _GetRecipesCanCraft_b__7_3(::System::Object* a1)
		{
			return ((::RPG::Client::GridFightEquipCraftRecipe*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__7_3_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>* _GetRecipesCanCraftByElationLaughPointEquips_b__8_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYELATIONLAUGHPOINTEQUIPS_B__8_0_OFFSET))(this, a1);
		}

		::System::Object* _GetRecipesCanCraftByElationLaughPointEquips_b__8_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1, ::RPG::Client::GridFightEquipCraftRecipe* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYELATIONLAUGHPOINTEQUIPS_B__8_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightEquipCraftRecipe* _GetRecipesCanCraftByElationLaughPointEquips_b__8_3(::System::Object* a1)
		{
			return ((::RPG::Client::GridFightEquipCraftRecipe*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYELATIONLAUGHPOINTEQUIPS_B__8_3_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>* _GetRecipesCanCraftByAddItem_b__10_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYADDITEM_B__10_0_OFFSET))(this, a1);
		}

		::System::Object* _GetRecipesCanCraftByAddItem_b__10_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1, ::RPG::Client::GridFightEquipCraftRecipe* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYADDITEM_B__10_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightEquipCraftRecipe* _GetRecipesCanCraftByAddItem_b__10_3(::System::Object* a1)
		{
			return ((::RPG::Client::GridFightEquipCraftRecipe*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYADDITEM_B__10_3_OFFSET))(this, a1);
		}

	};
}
