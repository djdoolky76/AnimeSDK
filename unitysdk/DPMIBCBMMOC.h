#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveMiniEmoEffect; }
namespace RPG::GameCore { class TaskContext; }

#define DPMIBCBMMOC_CTOR_OFFSET UNITYSDK_OFFSET(0x181B1620)
#define DPMIBCBMMOC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181B1650)
#define DPMIBCBMMOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x181B1690)

inline static constexpr unsigned int DPMIBCBMMOC_TypeDefinitionIndex = 56490;

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
