#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeBasicRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D854160)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D8538D0)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D853760)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D853450)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D853700)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D853A60)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8534D0)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D853AA0)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D853C70)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D853DF0)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D853BD0)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D853B30)

namespace RPG::GameCore
{
	class MatchThreeBasicExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "MatchThreeBasicExcelTable")->GetStaticField(0x3A2A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MatchThreeBasicExcelTable")->GetStaticField(0x3A2A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBasicRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBasicRow*>**)UnitySDK::FromName("RPG.GameCore", "MatchThreeBasicExcelTable")->GetStaticField(0x3A2B0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MatchThreeBasicExcelTable")->GetStaticField(0xC680);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MatchThreeBasicExcelTable")->GetStaticField(0xC681);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBasicRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBasicRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBasicRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBasicRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeBasicRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeBasicRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MatchThreeBasicRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeBasicRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
