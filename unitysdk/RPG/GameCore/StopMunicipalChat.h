#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class StopMunicipalChat; }
namespace System { class String; }

#define RPG_GAMECORE_STOPMUNICIPALCHAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB256C0)
#define RPG_GAMECORE_STOPMUNICIPALCHAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB256D0)
#define RPG_GAMECORE_STOPMUNICIPALCHAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB25690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopMunicipalChat_TypeDefinitionIndex = 20770;

	class StopMunicipalChat : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* MunicipalChatName; // 0x18
		::RPG::GameCore::DynamicString* MunicipalChatNameDS; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPMUNICIPALCHAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopMunicipalChat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopMunicipalChat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPMUNICIPALCHAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopMunicipalChat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopMunicipalChat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPMUNICIPALCHAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
