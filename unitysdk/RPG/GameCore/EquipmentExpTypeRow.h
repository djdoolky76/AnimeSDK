#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EquipmentExpTypeRow; }

#define RPG_GAMECORE_EQUIPMENTEXPTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D650FE0)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D650980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentExpTypeRow_TypeDefinitionIndex = 13242;

	class EquipmentExpTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 Exp; // 0x10
		::System::UInt32 ExpType; // 0x14
		::System::UInt32 Level; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EquipmentExpTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EquipmentExpTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
