#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeGroupExtraConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55F9D0)
#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D55F3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeGroupExtraConfigRow_TypeDefinitionIndex = 12967;

	class ChallengeGroupExtraConfigRow : public ::System::Object
	{
	public:
		::System::String* ThemePosterBgPicPath; // 0x10
		::System::UInt32 GroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChallengeGroupExtraConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChallengeGroupExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
