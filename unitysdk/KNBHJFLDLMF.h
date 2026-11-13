#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FinishTarotBookTalk; }
namespace RPG::GameCore { class TaskContext; }

#define KNBHJFLDLMF_CTOR_OFFSET UNITYSDK_OFFSET(0x18F9A320)
#define KNBHJFLDLMF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F9A350)

inline static constexpr unsigned int KNBHJFLDLMF_TypeDefinitionIndex = 59363;

	class KNBHJFLDLMF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishTarotBookTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishTarotBookTalk*))((::PBYTE)hIl2Cpp + KNBHJFLDLMF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHJFLDLMF_ONTASKBEGIN_OFFSET))(this);
		}

	};
