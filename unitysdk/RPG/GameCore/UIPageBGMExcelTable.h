#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UIPageBGMRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE83A40)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EE83890)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EE83720)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EE83640)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EE836C0)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EE82D10)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE82D50)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE82F80)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE83150)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EE832D0)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EE830B0)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE83010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIPageBGMExcelTable_TypeDefinitionIndex = 15558;

	class UIPageBGMExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "UIPageBGMExcelTable")->GetStaticField(0x2D8F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "UIPageBGMExcelTable")->GetStaticField(0x2D8F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIPageBGMRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIPageBGMRow*>**)UnitySDK::FromName("RPG.GameCore", "UIPageBGMExcelTable")->GetStaticField(0x2D900);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "UIPageBGMExcelTable")->GetStaticField(0x9830);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "UIPageBGMExcelTable")->GetStaticField(0x9831);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::UIPageBGMRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::UIPageBGMRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIPageBGMRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIPageBGMRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIPageBGMRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIPageBGMRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::UIPageBGMRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::UIPageBGMRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
