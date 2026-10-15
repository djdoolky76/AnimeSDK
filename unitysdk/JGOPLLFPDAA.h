#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayVoice; }
namespace RPG::GameCore { class TaskContext; }

#define JGOPLLFPDAA_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A7640)
#define JGOPLLFPDAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1A7670)
#define JGOPLLFPDAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1A77D0)

inline static constexpr unsigned int JGOPLLFPDAA_TypeDefinitionIndex = 56379;

	class JGOPLLFPDAA
	{
	public:
		::RPG::GameCore::GameEntity* ONIACPBDNMH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayVoice* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayVoice*))((::PBYTE)hIl2Cpp + JGOPLLFPDAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOPLLFPDAA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOPLLFPDAA_ONTASKBEGIN_OFFSET))(this);
		}

	};
