#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelChimeraGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9257C0)
#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F924FE0)
#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F924E70)
#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F924B60)
#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F924E10)
#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F925130)
#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F924BE0)
#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F925170)
#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F925340)
#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F9254A0)
#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F9252A0)
#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F925200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelChimeraGroupExcelTable_TypeDefinitionIndex = 11158;

	class ChimeraDuelChimeraGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelChimeraGroupExcelTable")->GetStaticField(0x11F90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraGroupRow*>**)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelChimeraGroupExcelTable")->GetStaticField(0x11F98);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelChimeraGroupExcelTable")->GetStaticField(0x11FA0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelChimeraGroupExcelTable")->GetStaticField(0x39B0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelChimeraGroupExcelTable")->GetStaticField(0x39B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelChimeraGroupRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelChimeraGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChimeraDuelChimeraGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelChimeraGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
