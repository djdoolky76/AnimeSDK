#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCChessBoardAnimationRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D990DA0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D9903D0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D990260)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D98FF50)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D990200)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D9905B0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D98FFD0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9905F0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9907C0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D990A00)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D990720)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D990680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCChessBoardAnimationExcelTable_TypeDefinitionIndex = 14775;

	class RogueDLCChessBoardAnimationExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RogueDLCChessBoardAnimationExcelTable")->GetStaticField(0x27D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RogueDLCChessBoardAnimationExcelTable")->GetStaticField(0x27D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*>**)UnitySDK::FromName("RPG.GameCore", "RogueDLCChessBoardAnimationExcelTable")->GetStaticField(0x27E0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RogueDLCChessBoardAnimationExcelTable")->GetStaticField(0x1EE0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RogueDLCChessBoardAnimationExcelTable")->GetStaticField(0x1EE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCChessBoardAnimationRow* GetData(::RPG::GameCore::ModifierEffectType a1, ::RPG::GameCore::RogueSubMode a2)
		{
			return ((::RPG::GameCore::RogueDLCChessBoardAnimationRow*(*)(::RPG::GameCore::ModifierEffectType, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCChessBoardAnimationRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCChessBoardAnimationRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
