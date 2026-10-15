#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicExpTypeRow; }

#define RPG_GAMECORE_RELICEXPTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D950160)
#define RPG_GAMECORE_RELICEXPTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D94FB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicExpTypeRow_TypeDefinitionIndex = 14642;

	class RelicExpTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 Exp; // 0x14
		::System::UInt32 TypeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RelicExpTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RelicExpTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
