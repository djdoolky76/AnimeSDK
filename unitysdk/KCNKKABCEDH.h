#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }

#define KCNKKABCEDH_BFDECCFKKOK_OFFSET UNITYSDK_OFFSET(0xB338E30)
#define KCNKKABCEDH_CTOR_OFFSET UNITYSDK_OFFSET(0xB338E90)

inline static constexpr unsigned int KCNKKABCEDH_TypeDefinitionIndex = 75141;

	class KCNKKABCEDH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNKKABCEDH_CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveNode* BFDECCFKKOK(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1, ::RPG::Client::ActivityIdleLive::StoryLine* a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + KCNKKABCEDH_BFDECCFKKOK_OFFSET))(this, a1, a2);
		}

	};
