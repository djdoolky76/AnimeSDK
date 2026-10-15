#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/TutorialPlatformType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialGuideDataRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC68DE0)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DC68C00)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DC68A90)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DC689B0)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DC68A30)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DC67F70)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DC67FB0)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DC681E0)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC683B0)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DC68610)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DC68310)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DC68270)

namespace RPG::GameCore
{
	class TutorialGuideDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "TutorialGuideDataExcelTable")->GetStaticField(0x31A90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "TutorialGuideDataExcelTable")->GetStaticField(0x31A98);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideDataRow*>**)UnitySDK::FromName("RPG.GameCore", "TutorialGuideDataExcelTable")->GetStaticField(0x31AA0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "TutorialGuideDataExcelTable")->GetStaticField(0xA730);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TutorialGuideDataExcelTable")->GetStaticField(0xA731);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TutorialGuideDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TutorialGuideDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TutorialGuideDataRow* GetData(::System::UInt32 a1, ::RPG::GameCore::TutorialPlatformType a2)
		{
			return ((::RPG::GameCore::TutorialGuideDataRow*(*)(::System::UInt32, ::RPG::GameCore::TutorialPlatformType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

	};
}
