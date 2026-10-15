#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ReShaRouteDisplayRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D96F2F0)
#define RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D96E790)
#define RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D96E620)
#define RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D96E310)
#define RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D96E5C0)
#define RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D96E920)
#define RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D96E390)
#define RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D96E960)
#define RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D96EB30)
#define RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D96EF80)
#define RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D96EA90)
#define RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D96E9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReShaRouteDisplayExcelTable_TypeDefinitionIndex = 13828;

	class ReShaRouteDisplayExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ReShaRouteDisplayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ReShaRouteDisplayRow*>**)UnitySDK::FromName("RPG.GameCore", "ReShaRouteDisplayExcelTable")->GetStaticField(0x35620);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ReShaRouteDisplayExcelTable")->GetStaticField(0x35628);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "ReShaRouteDisplayExcelTable")->GetStaticField(0x35630);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ReShaRouteDisplayExcelTable")->GetStaticField(0xB3B0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ReShaRouteDisplayExcelTable")->GetStaticField(0xB3B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ReShaRouteDisplayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ReShaRouteDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ReShaRouteDisplayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ReShaRouteDisplayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ReShaRouteDisplayRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ReShaRouteDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ReShaRouteDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ReShaRouteDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
