#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StrongChallengeStageRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB2E040)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DB2D1D0)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB2D0A0)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DB2CD90)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DB2D040)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DB2D360)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB2CE10)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB2D3A0)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB2D570)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DB2DD20)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DB2D4D0)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB2D430)

namespace RPG::GameCore
{
	class StrongChallengeStageExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "StrongChallengeStageExcelTable")->GetStaticField(0x1F650);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "StrongChallengeStageExcelTable")->GetStaticField(0x1F658);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>**)UnitySDK::FromName("RPG.GameCore", "StrongChallengeStageExcelTable")->GetStaticField(0x1F660);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "StrongChallengeStageExcelTable")->GetStaticField(0x7280);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "StrongChallengeStageExcelTable")->GetStaticField(0x7281);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StrongChallengeStageRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StrongChallengeStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StrongChallengeStageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StrongChallengeStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
