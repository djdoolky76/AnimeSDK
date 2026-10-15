#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GuideChallengeTabRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D74E650)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D74DAD0)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D74D960)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D74D650)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D74D900)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D74DC10)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D74D6D0)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D74DC50)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D74DE20)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D74E1D0)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D74DD80)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D74DCE0)

namespace RPG::GameCore
{
	class GuideChallengeTabExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::GuideChallengeTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::GuideChallengeTabRow*>**)UnitySDK::FromName("RPG.GameCore", "GuideChallengeTabExcelTable")->GetStaticField(0x2AD10);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "GuideChallengeTabExcelTable")->GetStaticField(0x2AD18);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "GuideChallengeTabExcelTable")->GetStaticField(0x2AD20);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "GuideChallengeTabExcelTable")->GetStaticField(0x8730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::GuideChallengeTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::GuideChallengeTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::System::Object*, ::RPG::GameCore::GuideChallengeTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::System::Object*, ::RPG::GameCore::GuideChallengeTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GuideChallengeTabRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GuideChallengeTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GuideChallengeTabRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GuideChallengeTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
