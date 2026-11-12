#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDivisionStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9363C0)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E935680)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E935510)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E935200)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E9354B0)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E935810)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E935280)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E935850)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E935A20)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E936050)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E935980)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E9358E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDivisionStageExcelTable_TypeDefinitionIndex = 13730;

	class GridFightDivisionStageExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "GridFightDivisionStageExcelTable")->GetStaticField(0x2BEB0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionStageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionStageRow*>**)UnitySDK::FromName("RPG.GameCore", "GridFightDivisionStageExcelTable")->GetStaticField(0x2BEB8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "GridFightDivisionStageExcelTable")->GetStaticField(0x2BEC0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "GridFightDivisionStageExcelTable")->GetStaticField(0x90E0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "GridFightDivisionStageExcelTable")->GetStaticField(0x90E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionStageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionStageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionStageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionStageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GridFightDivisionStageRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightDivisionStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GridFightDivisionStageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightDivisionStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
