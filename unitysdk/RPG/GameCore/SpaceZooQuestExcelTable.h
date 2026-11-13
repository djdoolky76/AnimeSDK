#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E39D770)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E39CE60)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E39CD30)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E39CA20)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E39CCD0)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E39CFF0)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E39CAA0)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E39D030)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E39D200)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E39D450)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E39D160)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E39D0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooQuestExcelTable_TypeDefinitionIndex = 12449;

	class SpaceZooQuestExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "SpaceZooQuestExcelTable")->GetStaticField(0x181A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>**)UnitySDK::FromName("RPG.GameCore", "SpaceZooQuestExcelTable")->GetStaticField(0x181A8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "SpaceZooQuestExcelTable")->GetStaticField(0x181B0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "SpaceZooQuestExcelTable")->GetStaticField(0x56A0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "SpaceZooQuestExcelTable")->GetStaticField(0x56A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooQuestRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpaceZooQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpaceZooQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
