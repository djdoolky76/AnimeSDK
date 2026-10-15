#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvLerpGatheredSpeedToZero; }
namespace RPG::GameCore { class TaskContext; }

#define DNBNLNELCGI_CTOR_OFFSET UNITYSDK_OFFSET(0x11940900)
#define DNBNLNELCGI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11940930)

inline static constexpr unsigned int DNBNLNELCGI_TypeDefinitionIndex = 57878;

	class DNBNLNELCGI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLerpGatheredSpeedToZero* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLerpGatheredSpeedToZero*))((::PBYTE)hIl2Cpp + DNBNLNELCGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBNLNELCGI_ONTASKBEGIN_OFFSET))(this);
		}

	};
