#pragma once
#include "unitysdk/unitysdk.h"
class CPBDANBHPBE;
namespace RPG::GameCore { class TaskContext; }

#define DMJLELAHHDP_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC3210)
#define DMJLELAHHDP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFEC3240)

inline static constexpr unsigned int DMJLELAHHDP_TypeDefinitionIndex = 52301;

	class DMJLELAHHDP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CPBDANBHPBE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CPBDANBHPBE*))((::PBYTE)hIl2Cpp + DMJLELAHHDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMJLELAHHDP_ONTASKBEGIN_OFFSET))(this);
		}

	};
