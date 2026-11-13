#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChimeraDuelEnterShowcaseBattle; }
namespace RPG::GameCore { class TaskContext; }

#define GJPGIBAFBEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8BDC50)
#define GJPGIBAFBEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8BDC80)

inline static constexpr unsigned int GJPGIBAFBEC_TypeDefinitionIndex = 59260;

	class GJPGIBAFBEC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChimeraDuelEnterShowcaseBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChimeraDuelEnterShowcaseBattle*))((::PBYTE)hIl2Cpp + GJPGIBAFBEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPGIBAFBEC_ONTASKBEGIN_OFFSET))(this);
		}

	};
