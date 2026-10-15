#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GMAccountEquipmentConfigRow; }

#define RPG_GAMECORE_GMACCOUNTEQUIPMENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F9490)
#define RPG_GAMECORE_GMACCOUNTEQUIPMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6F92A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GMAccountEquipmentConfigRow_TypeDefinitionIndex = 13340;

	class GMAccountEquipmentConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 ItemEquipmentNum; // 0x14
		::System::UInt32 ItemEquipmentLevel; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 ItemEquipmentID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GMACCOUNTEQUIPMENTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GMAccountEquipmentConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GMAccountEquipmentConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GMACCOUNTEQUIPMENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
