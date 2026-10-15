#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/RPG/GameCore/GridFightEquipDressType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipFuncType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightEquipConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTEQUIPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FEF40)
#define RPG_GAMECORE_GRIDFIGHTEQUIPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6FE9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipConfigRow_TypeDefinitionIndex = 13447;

	class GridFightEquipConfigRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* GeneralPropertyList; // 0x28
		::Il2CppArray<::System::UInt32>* EquipFuncParamList; // 0x30
		::System::String* JsonPath; // 0x38
		::Il2CppArray<::System::UInt32>* EquipmentTagList; // 0x40
		::Il2CppArray<::System::UInt32>* DressRuleParamList; // 0x48
		::RPG::GameCore::GridFightEquipFuncType EquipFunc; // 0x50
		::RPG::GameCore::GridFightEquipType EquipType; // 0x54
		::RPG::GameCore::GridFightEquipDressType DressRule; // 0x58
		::System::Boolean IsDisplaySpecialParam; // 0x5C
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x60
		::RPG::GameCore::GridFightEquipCategory EquipCategory; // 0x64
		::RPG::Client::TextID EquipDesc; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightEquipConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
