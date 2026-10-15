#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousDiceSurfaceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA21330)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DA20740)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DA20610)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DA20300)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DA205B0)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DA20890)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DA20380)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DA208D0)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA20AA0)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DA21010)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DA20A00)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DA20960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDiceSurfaceExcelTable_TypeDefinitionIndex = 14908;

	class RogueNousDiceSurfaceExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousDiceSurfaceExcelTable")->GetStaticField(0xE3F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSurfaceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSurfaceRow*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousDiceSurfaceExcelTable")->GetStaticField(0xE3F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousDiceSurfaceExcelTable")->GetStaticField(0xE400);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RogueNousDiceSurfaceExcelTable")->GetStaticField(0x2FF0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RogueNousDiceSurfaceExcelTable")->GetStaticField(0x2FF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSurfaceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSurfaceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSurfaceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSurfaceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousDiceSurfaceRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousDiceSurfaceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousDiceSurfaceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousDiceSurfaceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
