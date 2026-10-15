#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HIPAIGMJNOE.h"
namespace RPG::GameCore { class DamagePerformFinish; }
namespace RPG::GameCore { class TaskContext; }

#define GPGKOFENFEI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B4D270)
#define GPGKOFENFEI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B4D2A0)

inline static constexpr unsigned int GPGKOFENFEI_TypeDefinitionIndex = 55742;

	class GPGKOFENFEI : public ::HIPAIGMJNOE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamagePerformFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamagePerformFinish*))((::PBYTE)hIl2Cpp + GPGKOFENFEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGKOFENFEI_ONTASKBEGIN_OFFSET))(this);
		}

	};
