#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TalkFigure; }
namespace RPG::GameCore { class TaskContext; }

#define KKBPFOMLPDK_CTOR_OFFSET UNITYSDK_OFFSET(0xB45EE00)
#define KKBPFOMLPDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB45EE30)

inline static constexpr unsigned int KKBPFOMLPDK_TypeDefinitionIndex = 53329;

	class KKBPFOMLPDK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TalkFigure* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TalkFigure*))((::PBYTE)hIl2Cpp + KKBPFOMLPDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBPFOMLPDK_ONTASKBEGIN_OFFSET))(this);
		}

	};
