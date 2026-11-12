#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/ShortCutWheelGotoType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleWheelFuncConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2B7D0)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA2AEE0)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EA2AD70)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EA2AA60)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EA2AD10)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EA2B070)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA2AAE0)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA2B0B0)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA2B280)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EA2B460)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EA2B1E0)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA2B140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleWheelFuncConfigExcelTable_TypeDefinitionIndex = 13398;

	class LittleWheelFuncConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LittleWheelFuncConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LittleWheelFuncConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "LittleWheelFuncConfigExcelTable")->GetStaticField(0x3F300);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "LittleWheelFuncConfigExcelTable")->GetStaticField(0x3F308);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "LittleWheelFuncConfigExcelTable")->GetStaticField(0x3F310);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "LittleWheelFuncConfigExcelTable")->GetStaticField(0xD920);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "LittleWheelFuncConfigExcelTable")->GetStaticField(0xD921);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LittleWheelFuncConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LittleWheelFuncConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LittleWheelFuncConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LittleWheelFuncConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::LittleWheelFuncConfigRow* GetData(::RPG::GameCore::ShortCutWheelGotoType a1)
		{
			return ((::RPG::GameCore::LittleWheelFuncConfigRow*(*)(::RPG::GameCore::ShortCutWheelGotoType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::LittleWheelFuncConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::LittleWheelFuncConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
