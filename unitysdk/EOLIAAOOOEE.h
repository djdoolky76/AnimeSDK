#pragma once
#include "unitysdk/unitysdk.h"
class LCBCNOJNFHE;
namespace RPG::GameCore { class TaskContext; }

#define EOLIAAOOOEE_CTOR_OFFSET UNITYSDK_OFFSET(0x155C57A0)
#define EOLIAAOOOEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155C57D0)

inline static constexpr unsigned int EOLIAAOOOEE_TypeDefinitionIndex = 54950;

	class EOLIAAOOOEE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LCBCNOJNFHE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LCBCNOJNFHE*))((::PBYTE)hIl2Cpp + EOLIAAOOOEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLIAAOOOEE_ONTASKBEGIN_OFFSET))(this);
		}

	};
