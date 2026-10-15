#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlayVoice_Sequence; }
namespace RPG::GameCore { class TaskContext; }

#define HHLGEGKCIOH_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD1680)
#define HHLGEGKCIOH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CD16B0)
#define HHLGEGKCIOH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CD1810)

inline static constexpr unsigned int HHLGEGKCIOH_TypeDefinitionIndex = 56377;

	class HHLGEGKCIOH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayVoice_Sequence* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayVoice_Sequence*))((::PBYTE)hIl2Cpp + HHLGEGKCIOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLGEGKCIOH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLGEGKCIOH_ONTASKBEGIN_OFFSET))(this);
		}

	};
