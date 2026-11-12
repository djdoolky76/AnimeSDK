#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OONGDLIDJJJ;
namespace RPG::GameCore { class CheckAIVariableIntAxis; }

#define HMJBEHCCPLE_CTOR_OFFSET UNITYSDK_OFFSET(0x16D21190)
#define HMJBEHCCPLE_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0x16D211A0)

inline static constexpr unsigned int HMJBEHCCPLE_TypeDefinitionIndex = 55529;

	class HMJBEHCCPLE : public ::BEMKNPIFMBI
	{
	public:
		::RPG::GameCore::CheckAIVariableIntAxis* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::CheckAIVariableIntAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckAIVariableIntAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + HMJBEHCCPLE_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJBEHCCPLE_MNAKIEOGPDK_OFFSET))(this);
		}

	};
