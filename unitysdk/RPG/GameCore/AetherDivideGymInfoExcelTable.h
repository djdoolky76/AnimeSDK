#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideGymInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E908A80)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E907DF0)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E907CC0)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E9079B0)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E907C60)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E907F80)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E907A30)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E907FC0)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E908190)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E908760)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E9080F0)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E908050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideGymInfoExcelTable_TypeDefinitionIndex = 10935;

	class AetherDivideGymInfoExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "AetherDivideGymInfoExcelTable")->GetStaticField(0x54030);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>**)UnitySDK::FromName("RPG.GameCore", "AetherDivideGymInfoExcelTable")->GetStaticField(0x54038);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AetherDivideGymInfoExcelTable")->GetStaticField(0x54040);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AetherDivideGymInfoExcelTable")->GetStaticField(0x12040);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AetherDivideGymInfoExcelTable")->GetStaticField(0x12041);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideGymInfoRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AetherDivideGymInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideGymInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideGymInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
