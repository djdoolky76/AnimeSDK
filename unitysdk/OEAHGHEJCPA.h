#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }

#define OEAHGHEJCPA_BFDECCFKKOK_OFFSET UNITYSDK_OFFSET(0xBDF2FD0)
#define OEAHGHEJCPA_CTOR_OFFSET UNITYSDK_OFFSET(0xBDF3040)

inline static constexpr unsigned int OEAHGHEJCPA_TypeDefinitionIndex = 75141;

	class OEAHGHEJCPA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAHGHEJCPA_CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* BFDECCFKKOK(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1, ::RPG::Client::ActivityIdleLive::StoryLine* a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + OEAHGHEJCPA_BFDECCFKKOK_OFFSET))(this, a1, a2);
		}

	};
