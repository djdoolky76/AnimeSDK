#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ActiveFMChannelReceiver; }
namespace RPG::GameCore { class TaskContext; }

#define JGLIAAIGFDK_CTOR_OFFSET UNITYSDK_OFFSET(0xB19E6F0)
#define JGLIAAIGFDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB19E720)

inline static constexpr unsigned int JGLIAAIGFDK_TypeDefinitionIndex = 52265;

	class JGLIAAIGFDK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveFMChannelReceiver* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveFMChannelReceiver*))((::PBYTE)hIl2Cpp + JGLIAAIGFDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLIAAIGFDK_ONTASKBEGIN_OFFSET))(this);
		}

	};
