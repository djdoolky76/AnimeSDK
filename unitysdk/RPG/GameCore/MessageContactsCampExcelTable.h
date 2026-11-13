#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageContactsCampRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DA7E0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E6D9EC0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E6D9D50)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E6D9A40)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E6D9CF0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E6DA050)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6D9AC0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6DA090)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E6DA260)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E6DA470)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E6DA1C0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6DA120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageContactsCampExcelTable_TypeDefinitionIndex = 14631;

	class MessageContactsCampExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsCampRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsCampRow*>**)UnitySDK::FromName("RPG.GameCore", "MessageContactsCampExcelTable")->GetStaticField(0x3EFD0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MessageContactsCampExcelTable")->GetStaticField(0x3EFD8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MessageContactsCampExcelTable")->GetStaticField(0x3EFE0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MessageContactsCampExcelTable")->GetStaticField(0xCA60);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MessageContactsCampExcelTable")->GetStaticField(0xCA61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsCampRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsCampRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsCampRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsCampRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageContactsCampRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MessageContactsCampRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageContactsCampRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageContactsCampRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
