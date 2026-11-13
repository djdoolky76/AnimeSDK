#pragma once
#include "unitysdk/unitysdk.h"
class CKCOFEAAJII;
namespace RPG::GameCore { class TaskContext; }

#define IEAKHOOENCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1779EF20)
#define IEAKHOOENCO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1779EF50)

inline static constexpr unsigned int IEAKHOOENCO_TypeDefinitionIndex = 56447;

	class IEAKHOOENCO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CKCOFEAAJII* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CKCOFEAAJII*))((::PBYTE)hIl2Cpp + IEAKHOOENCO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAKHOOENCO_ONTASKBEGIN_OFFSET))(this);
		}

	};
