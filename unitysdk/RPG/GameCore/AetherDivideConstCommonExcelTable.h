#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideConstCommonRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E907850)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E907010)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E906EA0)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E906B90)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E906E40)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E907180)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E906C10)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E9071C0)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E907390)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E907530)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E9072F0)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E907250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideConstCommonExcelTable_TypeDefinitionIndex = 10939;

	class AetherDivideConstCommonExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AetherDivideConstCommonExcelTable")->GetStaticField(0x1AF10);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideConstCommonRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideConstCommonRow*>**)UnitySDK::FromName("RPG.GameCore", "AetherDivideConstCommonExcelTable")->GetStaticField(0x1AF18);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "AetherDivideConstCommonExcelTable")->GetStaticField(0x1AF20);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AetherDivideConstCommonExcelTable")->GetStaticField(0x6090);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AetherDivideConstCommonExcelTable")->GetStaticField(0x6091);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideConstCommonRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideConstCommonRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideConstCommonRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideConstCommonRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideConstCommonRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::AetherDivideConstCommonRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideConstCommonRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideConstCommonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
