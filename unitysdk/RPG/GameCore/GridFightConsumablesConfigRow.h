#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightConsumeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightConsumablesConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTCONSUMABLESCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FAE90)
#define RPG_GAMECORE_GRIDFIGHTCONSUMABLESCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6FABB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightConsumablesConfigRow_TypeDefinitionIndex = 13445;

	class GridFightConsumablesConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ConsumableParamList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Boolean IfConsume; // 0x1C
		::System::Boolean IfStack; // 0x1D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::GridFightConsumeType ConsumableRule; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID ConsumableDesc; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONSUMABLESCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightConsumablesConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightConsumablesConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONSUMABLESCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
