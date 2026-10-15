#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AIDecisionGroup; }

#define JGCAJLNLEJB_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xB1957B0)

inline static constexpr unsigned int JGCAJLNLEJB_TypeDefinitionIndex = 57761;

	class JGCAJLNLEJB : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AIDecisionGroup* NBHCPBBGAKA(::RPG::GameCore::AIDecisionGroup* a1)
		{
			return ((::RPG::GameCore::AIDecisionGroup*(*)(::RPG::GameCore::AIDecisionGroup*))((::PBYTE)hIl2Cpp + JGCAJLNLEJB_NBHCPBBGAKA_OFFSET))(a1);
		}

	};
