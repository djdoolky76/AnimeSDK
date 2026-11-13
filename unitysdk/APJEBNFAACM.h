#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TalkOptionData; }
namespace RPG::GameCore { class OptionTalkInfo; }

#define APJEBNFAACM_CBLIONHHJBO_OFFSET UNITYSDK_OFFSET(0x18506200)
#define APJEBNFAACM_CTOR_OFFSET UNITYSDK_OFFSET(0x18506380)
#define APJEBNFAACM_FMDIFLLEHCJ_OFFSET UNITYSDK_OFFSET(0x18506110)

inline static constexpr unsigned int APJEBNFAACM_TypeDefinitionIndex = 69971;

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
