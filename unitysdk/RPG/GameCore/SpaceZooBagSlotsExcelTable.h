#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooBagSlotsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED04B50)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1ED04270)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1ED04100)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1ED03DF0)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1ED040A0)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1ED04400)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED03E70)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED04440)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1ED04610)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1ED047E0)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1ED04570)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED044D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooBagSlotsExcelTable_TypeDefinitionIndex = 12445;

	class SpaceZooBagSlotsExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "SpaceZooBagSlotsExcelTable")->GetStaticField(0xE070);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "SpaceZooBagSlotsExcelTable")->GetStaticField(0xE078);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooBagSlotsRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooBagSlotsRow*>**)UnitySDK::FromName("RPG.GameCore", "SpaceZooBagSlotsExcelTable")->GetStaticField(0xE080);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "SpaceZooBagSlotsExcelTable")->GetStaticField(0x2EE0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "SpaceZooBagSlotsExcelTable")->GetStaticField(0x2EE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooBagSlotsRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooBagSlotsRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooBagSlotsRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooBagSlotsRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooBagSlotsRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpaceZooBagSlotsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpaceZooBagSlotsRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooBagSlotsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
