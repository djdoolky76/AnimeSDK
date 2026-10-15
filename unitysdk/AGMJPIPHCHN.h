#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class IsometricEnableClusterLighting; }
namespace RPG::GameCore { class TaskContext; }

#define AGMJPIPHCHN_CTOR_OFFSET UNITYSDK_OFFSET(0xCF40790)
#define AGMJPIPHCHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF407C0)

	class AGMJPIPHCHN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::IsometricEnableClusterLighting* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::IsometricEnableClusterLighting*))((::PBYTE)hIl2Cpp + AGMJPIPHCHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMJPIPHCHN_ONTASKBEGIN_OFFSET))(this);
		}

	};
