#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ActiveFMChannelSource; }
namespace RPG::GameCore { class TaskContext; }

#define CPIAINFPJNE_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD6070)
#define CPIAINFPJNE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCD60A0)

inline static constexpr unsigned int CPIAINFPJNE_TypeDefinitionIndex = 52266;

	class CPIAINFPJNE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveFMChannelSource* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveFMChannelSource*))((::PBYTE)hIl2Cpp + CPIAINFPJNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIAINFPJNE_ONTASKBEGIN_OFFSET))(this);
		}

	};
