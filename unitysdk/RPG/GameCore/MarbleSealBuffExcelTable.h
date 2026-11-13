#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSealBuffRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4D740)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EB4CEB0)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EB4CD40)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EB4CA30)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EB4CCE0)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EB4D040)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB4CAB0)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB4D080)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB4D250)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EB4D3D0)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EB4D1B0)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB4D110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealBuffExcelTable_TypeDefinitionIndex = 11907;

	class MarbleSealBuffExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MarbleSealBuffExcelTable")->GetStaticField(0x3AE20);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealBuffRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealBuffRow*>**)UnitySDK::FromName("RPG.GameCore", "MarbleSealBuffExcelTable")->GetStaticField(0x3AE28);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MarbleSealBuffExcelTable")->GetStaticField(0x3AE30);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MarbleSealBuffExcelTable")->GetStaticField(0xBBC0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MarbleSealBuffExcelTable")->GetStaticField(0xBBC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealBuffRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealBuffRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealBuffRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealBuffRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MarbleSealBuffRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleSealBuffRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MarbleSealBuffRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleSealBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
