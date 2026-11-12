#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PeiPeiChallengeUpdateCheckPoint; }
namespace RPG::GameCore { class TaskContext; }

#define JKPLAOOHMOG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA56A40)
#define JKPLAOOHMOG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA56A70)

inline static constexpr unsigned int JKPLAOOHMOG_TypeDefinitionIndex = 54224;

	class JKPLAOOHMOG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint*))((::PBYTE)hIl2Cpp + JKPLAOOHMOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPLAOOHMOG_ONTASKBEGIN_OFFSET))(this);
		}

	};
