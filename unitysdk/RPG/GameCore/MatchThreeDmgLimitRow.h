#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeDmgLimitRow; }

#define RPG_GAMECORE_MATCHTHREEDMGLIMITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D827100)
#define RPG_GAMECORE_MATCHTHREEDMGLIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D826F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeDmgLimitRow_TypeDefinitionIndex = 11921;

	class MatchThreeDmgLimitRow : public ::System::Object
	{
	public:
		::System::UInt32 MaxDamage; // 0x10
		::System::UInt32 BasicDamage; // 0x14
		::System::UInt32 Round; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEDMGLIMITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeDmgLimitRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeDmgLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEDMGLIMITROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
