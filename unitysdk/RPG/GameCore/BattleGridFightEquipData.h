#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKAFNCBDJAH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"
class EMPHNEBCEIE;
class FNNMLBJJPBJ;
class MBBEBLGELAP;
namespace RPG::GameCore { class BattleGridFightEquipData; }

#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE5C1AE0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xE5C1970)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_GETEQUIPSHOWSTATUSCOUNT_OFFSET UNITYSDK_OFFSET(0xE5C1DD0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_GETFINALPARAMLIST_OFFSET UNITYSDK_OFFSET(0xE5C1B80)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_SETUPABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xE5C1C20)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA__ONSELFCUSTOMDYNAMICVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xE5C1D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightEquipData_TypeDefinitionIndex = 56288;

	class BattleGridFightEquipData : public ::System::Object
	{
	public:
		::MBBEBLGELAP* _AbilityInstance; // 0x10
		::EMPHNEBCEIE* AdditionalParamProtoMap; // 0x18
		::FNNMLBJJPBJ* AdditionalPropertyMap; // 0x20
		::NKAFNCBDJAH SrcType; // 0x28
		::System::Boolean IsDynamicCreate; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x30
		::System::UInt32 UniqueID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::BattleGridFightEquipData* DeepClone()
		{
			return ((::RPG::GameCore::BattleGridFightEquipData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_DEEPCLONE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* GetFinalParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_GETFINALPARAMLIST_OFFSET))(this);
		}

		::System::Void SetupAbilityInstance(::MBBEBLGELAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBBEBLGELAP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_SETUPABILITYINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _OnSelfCustomDynamicValueChanged(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA__ONSELFCUSTOMDYNAMICVALUECHANGED_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint GetEquipShowStatusCount()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_GETEQUIPSHOWSTATUSCOUNT_OFFSET))(this);
		}

	};
}
