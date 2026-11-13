#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleEventEntitySubType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AbilityPropertyValue; }
namespace RPG::GameCore { class BattleEventDataRow; }
namespace RPG::GameCore { class BattleEventRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C312040)
#define RPG_GAMECORE_BATTLEEVENTROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1C310BE0)
#define RPG_GAMECORE_BATTLEEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C311190)
#define RPG_GAMECORE_BATTLEEVENTROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1C311FB0)
#define RPG_GAMECORE_BATTLEEVENTROW_GETRAWCONFIG_OFFSET UNITYSDK_OFFSET(0x1C312280)
#define RPG_GAMECORE_BATTLEEVENTROW_GETRAWSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x1C3122E0)
#define RPG_GAMECORE_BATTLEEVENTROW_GET_BASEPOINT_OFFSET UNITYSDK_OFFSET(0x1C312220)
#define RPG_GAMECORE_BATTLEEVENTROW_GET_BEACTIONBARPREFAB_OFFSET UNITYSDK_OFFSET(0x1C3121C0)
#define RPG_GAMECORE_BATTLEEVENTROW_GET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0x1C312050)
#define RPG_GAMECORE_BATTLEEVENTROW_GET_ISSPRESERVED_OFFSET UNITYSDK_OFFSET(0x1C312340)
#define RPG_GAMECORE_BATTLEEVENTROW_GET_LEVELAREAPREFAB_OFFSET UNITYSDK_OFFSET(0x1C312160)
#define RPG_GAMECORE_BATTLEEVENTROW_GET_NOASSETTOPRELOAD_OFFSET UNITYSDK_OFFSET(0x1C3123A0)
#define RPG_GAMECORE_BATTLEEVENTROW_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0x1C312100)
#define RPG_GAMECORE_BATTLEEVENTROW_GET__EXPANDEDDATAROW_OFFSET UNITYSDK_OFFSET(0x1C3120B0)
#define RPG_GAMECORE_BATTLEEVENTROW_RESET_OFFSET UNITYSDK_OFFSET(0x1C312010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventRow_TypeDefinitionIndex = 12925;

	class BattleEventRow : public ::System::Object
	{
	public:
		::System::String* HeadIcon; // 0x10
		::System::String* DescrptionText; // 0x18
		::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>* OverrideProperty; // 0x20
		::Il2CppArray<::System::String*>* AbilityList; // 0x28
		::RPG::GameCore::BattleEventDataRow* _ExpandedDataRowCache; // 0x30
		::System::String* AssetPackName; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x40
		::System::String* BattleEventName; // 0x48
		::System::Boolean HardLevel; // 0x50
		::System::Boolean _IsCached; // 0x51
		::System::Boolean EliteGroup; // 0x52
		::System::Byte _padding0[0x1];
		::RPG::GameCore::TeamType Team; // 0x54
		::System::UInt32 BattleEventID; // 0x58
		::System::UInt32 BattleEventButtonType; // 0x5C
		::System::UInt32 BEActionBarType; // 0x60
		::RPG::GameCore::BattleEventEntitySubType EventSubType; // 0x64
		::RPG::GameCore::FixPoint Speed; // 0x68
		::RPG::Client::TextID ActionBarDescrptionText; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::UInt32 get_BelongAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET_BELONGAVATARID_OFFSET))(this);
		}

		::System::String* get_Prefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET_PREFAB_OFFSET))(this);
		}

		::System::String* get_LevelAreaPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET_LEVELAREAPREFAB_OFFSET))(this);
		}

		::System::String* get_BEActionBarPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET_BEACTIONBARPREFAB_OFFSET))(this);
		}

		::System::String* get_BasePoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET_BASEPOINT_OFFSET))(this);
		}

		::System::String* GetRawConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GETRAWCONFIG_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetRawSkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GETRAWSKILLIDLIST_OFFSET))(this);
		}

		::System::Boolean get_IsSPReserved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET_ISSPRESERVED_OFFSET))(this);
		}

		::System::Boolean get_NoAssetToPreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET_NOASSETTOPRELOAD_OFFSET))(this);
		}

		::RPG::GameCore::BattleEventDataRow* get__ExpandedDataRow()
		{
			return ((::RPG::GameCore::BattleEventDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET__EXPANDEDDATAROW_OFFSET))(this);
		}

	};
}
