#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TalkOptionData; }
namespace RPG::GameCore { class OptionTalkInfo; }

#define BIFELGAAJOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A1130)
#define BIFELGAAJOJ_FMDIFLLEHCJ_OFFSET UNITYSDK_OFFSET(0xB4A1070)

inline static constexpr unsigned int BIFELGAAJOJ_TypeDefinitionIndex = 68026;

	class BIFELGAAJOJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFELGAAJOJ_CTOR_OFFSET))(this);
		}

		::System::Void FMDIFLLEHCJ(::RPG::GameCore::OptionTalkInfo* a1, ::RPG::Client::TalkOptionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + BIFELGAAJOJ_FMDIFLLEHCJ_OFFSET))(this, a1, a2);
		}

	};
