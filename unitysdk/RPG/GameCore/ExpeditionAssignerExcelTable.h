#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionAssignerRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D68E050)
#define RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D68D770)
#define RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D68D600)
#define RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D68D2F0)
#define RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D68D5A0)
#define RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D68D900)
#define RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D68D370)
#define RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D68D940)
#define RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D68DB10)
#define RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D68DCE0)
#define RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D68DA70)
#define RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D68D9D0)

namespace RPG::GameCore
{
	class ExpeditionAssignerExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ExpeditionAssignerExcelTable")->GetStaticField(0x2BCC0);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "ExpeditionAssignerExcelTable")->GetStaticField(0x2BCC8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionAssignerRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionAssignerRow*>**)UnitySDK::FromName("RPG.GameCore", "ExpeditionAssignerExcelTable")->GetStaticField(0x2BCD0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ExpeditionAssignerExcelTable")->GetStaticField(0x8940);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ExpeditionAssignerExcelTable")->GetStaticField(0x8941);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionAssignerRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionAssignerRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionAssignerRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionAssignerRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ExpeditionAssignerRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ExpeditionAssignerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ExpeditionAssignerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExpeditionAssignerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
