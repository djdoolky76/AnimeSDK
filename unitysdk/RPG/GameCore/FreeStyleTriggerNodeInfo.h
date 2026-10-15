#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FreeStyleTriggerSimpleNodeInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleTriggerNodeInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLETRIGGERNODEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F5610)
#define RPG_GAMECORE_FREESTYLETRIGGERNODEINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F5640)
#define RPG_GAMECORE_FREESTYLETRIGGERNODEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F55C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleTriggerNodeInfo_TypeDefinitionIndex = 16942;

	class FreeStyleTriggerNodeInfo : public ::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo
	{
	public:
		::System::String* CharacterID; // 0x20
		::System::UInt32 MotionID; // 0x28
		::System::Single MinLoopTime; // 0x2C
		::System::Single MaxLoopTime; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* JumpNodeNameOnLoopMotion; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERNODEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleTriggerNodeInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleTriggerNodeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERNODEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleTriggerNodeInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleTriggerNodeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERNODEINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
