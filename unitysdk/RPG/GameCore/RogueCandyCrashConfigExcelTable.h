#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCandyCrashConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F567640)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F566CE0)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F566B70)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F566860)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F566B10)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F566E70)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F5668E0)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F566EB0)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F567080)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F5672D0)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F566FE0)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F566F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCandyCrashConfigExcelTable_TypeDefinitionIndex = 14835;

	class RogueCandyCrashConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCandyCrashConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCandyCrashConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "RogueCandyCrashConfigExcelTable")->GetStaticField(0x218B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RogueCandyCrashConfigExcelTable")->GetStaticField(0x218B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RogueCandyCrashConfigExcelTable")->GetStaticField(0x218C0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RogueCandyCrashConfigExcelTable")->GetStaticField(0x7990);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RogueCandyCrashConfigExcelTable")->GetStaticField(0x7991);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCandyCrashConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCandyCrashConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCandyCrashConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCandyCrashConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueCandyCrashConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueCandyCrashConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueCandyCrashConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueCandyCrashConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
