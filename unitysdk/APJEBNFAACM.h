#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TalkOptionData; }
namespace RPG::GameCore { class OptionTalkInfo; }

#define APJEBNFAACM_CBLIONHHJBO_OFFSET UNITYSDK_OFFSET(0x15BA09A0)
#define APJEBNFAACM_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA0B20)
#define APJEBNFAACM_FMDIFLLEHCJ_OFFSET UNITYSDK_OFFSET(0x15BA08B0)

inline static constexpr unsigned int APJEBNFAACM_TypeDefinitionIndex = 68025;

	class APJEBNFAACM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APJEBNFAACM_CTOR_OFFSET))(this);
		}

		::System::Void FMDIFLLEHCJ(::RPG::GameCore::OptionTalkInfo* a1, ::RPG::Client::TalkOptionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + APJEBNFAACM_FMDIFLLEHCJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean CBLIONHHJBO(::RPG::GameCore::OptionTalkInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + APJEBNFAACM_CBLIONHHJBO_OFFSET))(this, a1);
		}

	};
