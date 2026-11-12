#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InclinationTypeRow; }

#define RPG_GAMECORE_INCLINATIONTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E999490)
#define RPG_GAMECORE_INCLINATIONTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9993D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InclinationTypeRow_TypeDefinitionIndex = 13964;

	class InclinationTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 InclinationTypeID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLINATIONTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::InclinationTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InclinationTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLINATIONTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
