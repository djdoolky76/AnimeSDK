#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowGridFightEnergyFetterEffect; }
namespace RPG::GameCore { class TaskContext; }

#define IFDAHOMCIGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC055A0)
#define IFDAHOMCIGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BC055D0)

inline static constexpr unsigned int IFDAHOMCIGE_TypeDefinitionIndex = 56811;

	class IFDAHOMCIGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGridFightEnergyFetterEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGridFightEnergyFetterEffect*))((::PBYTE)hIl2Cpp + IFDAHOMCIGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDAHOMCIGE_ONTASKBEGIN_OFFSET))(this);
		}

	};
