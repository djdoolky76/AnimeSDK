#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueGuideActivityPanelDataRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9CD7D0)
#define RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D9CCFC0)
#define RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D9CCE50)
#define RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D9CCB40)
#define RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D9CCDF0)
#define RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D9CD110)
#define RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9CCBC0)
#define RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9CD150)
#define RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9CD320)
#define RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D9CD4B0)
#define RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D9CD280)
#define RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9CD1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueGuideActivityPanelDataExcelTable_TypeDefinitionIndex = 14723;

	class RogueGuideActivityPanelDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "RogueGuideActivityPanelDataExcelTable")->GetStaticField(0xAB20);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueGuideActivityPanelDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueGuideActivityPanelDataRow*>**)UnitySDK::FromName("RPG.GameCore", "RogueGuideActivityPanelDataExcelTable")->GetStaticField(0xAB28);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RogueGuideActivityPanelDataExcelTable")->GetStaticField(0xAB30);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RogueGuideActivityPanelDataExcelTable")->GetStaticField(0x2550);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RogueGuideActivityPanelDataExcelTable")->GetStaticField(0x2551);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueGuideActivityPanelDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueGuideActivityPanelDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueGuideActivityPanelDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueGuideActivityPanelDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueGuideActivityPanelDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueGuideActivityPanelDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueGuideActivityPanelDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueGuideActivityPanelDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
