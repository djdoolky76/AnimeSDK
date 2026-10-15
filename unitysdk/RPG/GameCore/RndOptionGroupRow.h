#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RndGroupType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RndOptionGroupRow; }

#define RPG_GAMECORE_RNDOPTIONGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96E990)
#define RPG_GAMECORE_RNDOPTIONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D96E860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RndOptionGroupRow_TypeDefinitionIndex = 14662;

	class RndOptionGroupRow : public ::System::Object
	{
	public:
		::System::UInt32 OptionCount; // 0x10
		::RPG::GameCore::RndGroupType ID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RNDOPTIONGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RndOptionGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RndOptionGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RNDOPTIONGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
