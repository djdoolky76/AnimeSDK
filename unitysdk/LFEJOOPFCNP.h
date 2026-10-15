#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RandomSelectPropState; }
namespace RPG::GameCore { class TaskContext; }

#define LFEJOOPFCNP_CTOR_OFFSET UNITYSDK_OFFSET(0xB662060)
#define LFEJOOPFCNP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB662090)

inline static constexpr unsigned int LFEJOOPFCNP_TypeDefinitionIndex = 53195;

	class LFEJOOPFCNP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelectPropState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelectPropState*))((::PBYTE)hIl2Cpp + LFEJOOPFCNP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEJOOPFCNP_ONTASKBEGIN_OFFSET))(this);
		}

	};
