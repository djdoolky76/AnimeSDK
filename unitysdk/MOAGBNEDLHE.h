#pragma once
#include "unitysdk/unitysdk.h"
class FEOGAJHIAIO;
namespace RPG::GameCore { class TaskContext; }

#define MOAGBNEDLHE_CTOR_OFFSET UNITYSDK_OFFSET(0xBA16280)
#define MOAGBNEDLHE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA162B0)

inline static constexpr unsigned int MOAGBNEDLHE_TypeDefinitionIndex = 52906;

	class MOAGBNEDLHE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FEOGAJHIAIO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FEOGAJHIAIO*))((::PBYTE)hIl2Cpp + MOAGBNEDLHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAGBNEDLHE_ONTASKBEGIN_OFFSET))(this);
		}

	};
