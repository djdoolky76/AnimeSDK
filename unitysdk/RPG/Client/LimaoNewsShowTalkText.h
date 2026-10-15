#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class LimaoNewsShowTalkText; }

#define RPG_CLIENT_LIMAONEWSSHOWTALKTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3207C0)
#define RPG_CLIENT_LIMAONEWSSHOWTALKTEXT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3207D0)
#define RPG_CLIENT_LIMAONEWSSHOWTALKTEXT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D320790)

namespace RPG::Client
{
	inline static constexpr unsigned int LimaoNewsShowTalkText_TypeDefinitionIndex = 10234;

	class LimaoNewsShowTalkText : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSSHOWTALKTEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LimaoNewsShowTalkText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LimaoNewsShowTalkText*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSSHOWTALKTEXT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LimaoNewsShowTalkText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LimaoNewsShowTalkText*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSSHOWTALKTEXT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
