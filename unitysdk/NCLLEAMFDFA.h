#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetSpecialVisionOn; }
namespace RPG::GameCore { class TaskContext; }

#define NCLLEAMFDFA_CTOR_OFFSET UNITYSDK_OFFSET(0x151030C0)
#define NCLLEAMFDFA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x151030F0)

inline static constexpr unsigned int NCLLEAMFDFA_TypeDefinitionIndex = 59842;

	class NCLLEAMFDFA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSpecialVisionOn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSpecialVisionOn*))((::PBYTE)hIl2Cpp + NCLLEAMFDFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLLEAMFDFA_ONTASKBEGIN_OFFSET))(this);
		}

	};
