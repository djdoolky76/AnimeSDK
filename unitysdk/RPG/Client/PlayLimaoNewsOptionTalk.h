#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class PlayLimaoNewsOptionTalk; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class String; }

#define RPG_CLIENT_PLAYLIMAONEWSOPTIONTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D329840)
#define RPG_CLIENT_PLAYLIMAONEWSOPTIONTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D329850)
#define RPG_CLIENT_PLAYLIMAONEWSOPTIONTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D329810)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayLimaoNewsOptionTalk_TypeDefinitionIndex = 10241;

	class PlayLimaoNewsOptionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* OptionList; // 0x18
		::System::Boolean TriggerStringWhenAllSelected; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* TriggerString; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYLIMAONEWSOPTIONTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::PlayLimaoNewsOptionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::PlayLimaoNewsOptionTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYLIMAONEWSOPTIONTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::PlayLimaoNewsOptionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::PlayLimaoNewsOptionTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYLIMAONEWSOPTIONTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
