#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterHeadConstraint; }
namespace RPG::GameCore { class CharacterHeadLookAt; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERHEADLOOKAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D571B00)
#define RPG_GAMECORE_CHARACTERHEADLOOKAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D571B10)
#define RPG_GAMECORE_CHARACTERHEADLOOKAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D571AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterHeadLookAt_TypeDefinitionIndex = 20865;

	class CharacterHeadLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* TargetCharacterUniqueName; // 0x20
		::System::String* TargetCharacterAttachPoint; // 0x28
		::System::String* TargetAreaName; // 0x30
		::System::String* TargetAnchorName; // 0x38
		::System::Boolean KeepTracking; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single Duration; // 0x44
		::System::String* CurveName; // 0x48
		::RPG::GameCore::CharacterHeadConstraint* Constraint; // 0x50
		::System::Boolean WaitUntilFinish; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADLOOKAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterHeadLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterHeadLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADLOOKAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterHeadLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterHeadLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADLOOKAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
