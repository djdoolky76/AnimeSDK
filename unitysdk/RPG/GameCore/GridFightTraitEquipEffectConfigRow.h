#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEquipType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitEquipEffectConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTRAITEQUIPEFFECTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95ABB0)
#define RPG_GAMECORE_GRIDFIGHTTRAITEQUIPEFFECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E95A940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitEquipEffectConfigRow_TypeDefinitionIndex = 13843;

	class GridFightTraitEquipEffectConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x10
		::System::String* JsonPath; // 0x18
		::RPG::GameCore::GridFightTraitEquipType EquipType; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID ExtraDesc; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEQUIPEFFECTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitEquipEffectConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitEquipEffectConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEQUIPEFFECTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
