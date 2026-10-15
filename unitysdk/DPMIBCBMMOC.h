#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveMiniEmoEffect; }
namespace RPG::GameCore { class TaskContext; }

#define DPMIBCBMMOC_CTOR_OFFSET UNITYSDK_OFFSET(0x12657330)
#define DPMIBCBMMOC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12657360)
#define DPMIBCBMMOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x126573A0)

inline static constexpr unsigned int DPMIBCBMMOC_TypeDefinitionIndex = 55308;

	class DPMIBCBMMOC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveMiniEmoEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveMiniEmoEffect*))((::PBYTE)hIl2Cpp + DPMIBCBMMOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMIBCBMMOC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMIBCBMMOC_ONTASKBEGIN_OFFSET))(this);
		}

	};
