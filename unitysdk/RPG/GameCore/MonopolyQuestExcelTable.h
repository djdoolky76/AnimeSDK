#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E469E20)
#define RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E4694E0)
#define RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E469370)
#define RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E469060)
#define RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E469310)
#define RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E469670)
#define RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E4690E0)
#define RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E4696B0)
#define RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E469880)
#define RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E469AB0)
#define RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E4697E0)
#define RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E469740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuestExcelTable_TypeDefinitionIndex = 12125;

	class MonopolyQuestExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MonopolyQuestExcelTable")->GetStaticField(0x43B20);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MonopolyQuestExcelTable")->GetStaticField(0x43B28);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuestRow*>**)UnitySDK::FromName("RPG.GameCore", "MonopolyQuestExcelTable")->GetStaticField(0x43B30);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MonopolyQuestExcelTable")->GetStaticField(0xD8C0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MonopolyQuestExcelTable")->GetStaticField(0xD8C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyQuestRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonopolyQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUESTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
