#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeActMarkConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEACTMARKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D52B7B0)
#define RPG_GAMECORE_CHALLENGEACTMARKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D52B680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeActMarkConfigRow_TypeDefinitionIndex = 12952;

	class ChallengeActMarkConfigRow : public ::System::Object
	{
	public:
		::System::String* MarkIconPath; // 0x10
		::System::UInt32 MarkType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTMARKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChallengeActMarkConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChallengeActMarkConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTMARKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
