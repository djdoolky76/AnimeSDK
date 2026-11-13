#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AmphoreusCurioUIConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA9AC0)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DEA8F90)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DEA8E20)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DEA8B10)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DEA8DC0)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DEA9120)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DEA8B90)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DEA9160)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DEA9330)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DEA9750)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DEA9290)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DEA91F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AmphoreusCurioUIConfigExcelTable_TypeDefinitionIndex = 12025;

	class AmphoreusCurioUIConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AmphoreusCurioUIConfigExcelTable")->GetStaticField(0x41DF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AmphoreusCurioUIConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AmphoreusCurioUIConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "AmphoreusCurioUIConfigExcelTable")->GetStaticField(0x41DF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "AmphoreusCurioUIConfigExcelTable")->GetStaticField(0x41E00);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AmphoreusCurioUIConfigExcelTable")->GetStaticField(0xD310);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AmphoreusCurioUIConfigExcelTable")->GetStaticField(0xD311);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AmphoreusCurioUIConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AmphoreusCurioUIConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AmphoreusCurioUIConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AmphoreusCurioUIConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AmphoreusCurioUIConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AmphoreusCurioUIConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AmphoreusCurioUIConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AmphoreusCurioUIConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
