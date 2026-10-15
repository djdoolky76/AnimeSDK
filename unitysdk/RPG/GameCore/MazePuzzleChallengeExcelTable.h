#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleChallengeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D869C80)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D8690F0)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D868F80)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D868C70)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D868F20)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D869280)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D868CF0)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8692C0)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D869490)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D869910)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D8693F0)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D869350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleChallengeExcelTable_TypeDefinitionIndex = 14034;

	class MazePuzzleChallengeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleChallengeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleChallengeRow*>**)UnitySDK::FromName("RPG.GameCore", "MazePuzzleChallengeExcelTable")->GetStaticField(0x3BC30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MazePuzzleChallengeExcelTable")->GetStaticField(0x3BC38);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MazePuzzleChallengeExcelTable")->GetStaticField(0x3BC40);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MazePuzzleChallengeExcelTable")->GetStaticField(0xCB80);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MazePuzzleChallengeExcelTable")->GetStaticField(0xCB81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleChallengeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleChallengeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleChallengeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleChallengeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleChallengeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazePuzzleChallengeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazePuzzleChallengeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleChallengeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
