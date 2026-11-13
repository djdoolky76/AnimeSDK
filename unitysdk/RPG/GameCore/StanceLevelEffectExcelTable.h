#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StanceLevelEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BFB60)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E3BF9D0)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E3BF8A0)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E3BF7C0)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E3BF840)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E3BEE40)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E3BEE80)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E3BF0B0)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E3BF280)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E3BF4A0)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E3BF1E0)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E3BF140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StanceLevelEffectExcelTable_TypeDefinitionIndex = 15335;

	class StanceLevelEffectExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>**)UnitySDK::FromName("RPG.GameCore", "StanceLevelEffectExcelTable")->GetStaticField(0x1A100);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "StanceLevelEffectExcelTable")->GetStaticField(0x1A108);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "StanceLevelEffectExcelTable")->GetStaticField(0x1A110);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "StanceLevelEffectExcelTable")->GetStaticField(0x5CA0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "StanceLevelEffectExcelTable")->GetStaticField(0x5CA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StanceLevelEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StanceLevelEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StanceLevelEffectRow* GetData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::StanceLevelEffectRow*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
