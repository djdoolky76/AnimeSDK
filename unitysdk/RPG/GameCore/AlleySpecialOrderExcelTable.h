#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleySpecialOrderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60CE40)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E60C3E0)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E60C270)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E60BF60)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E60C210)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E60C530)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E60BFE0)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E60C570)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E60C740)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E60CB20)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E60C6A0)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E60C600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleySpecialOrderExcelTable_TypeDefinitionIndex = 12691;

	class AlleySpecialOrderExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>**)UnitySDK::FromName("RPG.GameCore", "AlleySpecialOrderExcelTable")->GetStaticField(0x3F320);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AlleySpecialOrderExcelTable")->GetStaticField(0x3F328);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "AlleySpecialOrderExcelTable")->GetStaticField(0x3F330);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AlleySpecialOrderExcelTable")->GetStaticField(0xD930);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AlleySpecialOrderExcelTable")->GetStaticField(0xD931);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleySpecialOrderRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleySpecialOrderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleySpecialOrderRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleySpecialOrderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
