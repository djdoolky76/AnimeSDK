#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesBonusMascotRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESBONUSMASCOTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3CDE0)
#define RPG_GAMECORE_PLANETFESBONUSMASCOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB3CCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesBonusMascotRow_TypeDefinitionIndex = 12316;

	class PlanetFesBonusMascotRow : public ::System::Object
	{
	public:
		::System::String* SourcePath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBONUSMASCOTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesBonusMascotRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesBonusMascotRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBONUSMASCOTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
