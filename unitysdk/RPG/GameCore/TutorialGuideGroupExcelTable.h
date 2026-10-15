#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialGuideGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC69E40)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DC69CB0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DC69B80)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DC69AA0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DC69B20)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DC68F30)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DC68F70)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DC691A0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC69370)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DC69780)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DC692D0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DC69230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideGroupExcelTable_TypeDefinitionIndex = 15388;

	class TutorialGuideGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupRow*>**)UnitySDK::FromName("RPG.GameCore", "TutorialGuideGroupExcelTable")->GetStaticField(0x31B20);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "TutorialGuideGroupExcelTable")->GetStaticField(0x31B28);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "TutorialGuideGroupExcelTable")->GetStaticField(0x31B30);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "TutorialGuideGroupExcelTable")->GetStaticField(0xA790);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TutorialGuideGroupExcelTable")->GetStaticField(0xA791);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TutorialGuideGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TutorialGuideGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TutorialGuideGroupRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TutorialGuideGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
