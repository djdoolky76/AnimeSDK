#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraTeamTalkEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraTeamTalkRow; }

#define RPG_GAMECORE_CHIMERATEAMTALKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D582BC0)
#define RPG_GAMECORE_CHIMERATEAMTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D582A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTeamTalkRow_TypeDefinitionIndex = 13034;

	class ChimeraTeamTalkRow : public ::System::Object
	{
	public:
		::System::UInt32 TalkID; // 0x10
		::RPG::GameCore::ChimeraTeamTalkEffectType Effect; // 0x14
		::RPG::Client::TextID TalkContent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMTALKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTeamTalkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTeamTalkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMTALKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
