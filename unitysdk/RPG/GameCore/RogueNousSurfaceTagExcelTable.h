#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousSurfaceTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA28130)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DA27810)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DA276A0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DA27390)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DA27640)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DA279A0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DA27410)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DA279E0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA27BB0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DA27DC0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DA27B10)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DA27A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousSurfaceTagExcelTable_TypeDefinitionIndex = 14910;

	class RogueNousSurfaceTagExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousSurfaceTagExcelTable")->GetStaticField(0xE680);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousSurfaceTagExcelTable")->GetStaticField(0xE688);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousSurfaceTagExcelTable")->GetStaticField(0xE690);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RogueNousSurfaceTagExcelTable")->GetStaticField(0x3070);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RogueNousSurfaceTagExcelTable")->GetStaticField(0x3071);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousSurfaceTagRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousSurfaceTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousSurfaceTagRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousSurfaceTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
