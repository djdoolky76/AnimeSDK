#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCMainStoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F57C370)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F57B840)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F57B6D0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F57B3C0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F57B670)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F57B9D0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F57B440)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F57BA10)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F57BBE0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F57C000)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F57BB40)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F57BAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMainStoryExcelTable_TypeDefinitionIndex = 14948;

	class RogueDLCMainStoryExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRow*>**)UnitySDK::FromName("RPG.GameCore", "RogueDLCMainStoryExcelTable")->GetStaticField(0x4BE90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RogueDLCMainStoryExcelTable")->GetStaticField(0x4BE98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RogueDLCMainStoryExcelTable")->GetStaticField(0x4BEA0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RogueDLCMainStoryExcelTable")->GetStaticField(0xE770);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RogueDLCMainStoryExcelTable")->GetStaticField(0xE771);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCMainStoryRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCMainStoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCMainStoryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCMainStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
