#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkRaidRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5C09C0)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D5C01B0)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5C0040)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D5BFD30)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D5BFFE0)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D5C0300)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5BFDB0)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5C0340)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5C0510)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D5C06A0)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D5C0470)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5C03D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkRaidExcelTable_TypeDefinitionIndex = 11193;

	class ClockParkRaidExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRaidRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRaidRow*>**)UnitySDK::FromName("RPG.GameCore", "ClockParkRaidExcelTable")->GetStaticField(0x1A650);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "ClockParkRaidExcelTable")->GetStaticField(0x1A658);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ClockParkRaidExcelTable")->GetStaticField(0x1A660);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ClockParkRaidExcelTable")->GetStaticField(0x5FF0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ClockParkRaidExcelTable")->GetStaticField(0x5FF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRaidRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRaidRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRaidRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRaidRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkRaidRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ClockParkRaidRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkRaidRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkRaidRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
