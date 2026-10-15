#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ReShaEasterEggStateListener; }
namespace RPG::GameCore { class TaskContext; }

#define FBEGGBJKINM_CTOR_OFFSET UNITYSDK_OFFSET(0x15697980)
#define FBEGGBJKINM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156979B0)

inline static constexpr unsigned int FBEGGBJKINM_TypeDefinitionIndex = 53197;

	class FBEGGBJKINM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReShaEasterEggStateListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReShaEasterEggStateListener*))((::PBYTE)hIl2Cpp + FBEGGBJKINM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEGGBJKINM_ONTASKBEGIN_OFFSET))(this);
		}

	};
