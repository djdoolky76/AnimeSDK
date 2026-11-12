#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableCharacterAttachmentSolverPoint; }
namespace RPG::GameCore { class TaskContext; }

#define JJGOPODIIPK_CTOR_OFFSET UNITYSDK_OFFSET(0xBA280A0)
#define JJGOPODIIPK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA280D0)

inline static constexpr unsigned int JJGOPODIIPK_TypeDefinitionIndex = 53887;

	class JJGOPODIIPK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableCharacterAttachmentSolverPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableCharacterAttachmentSolverPoint*))((::PBYTE)hIl2Cpp + JJGOPODIIPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGOPODIIPK_ONTASKBEGIN_OFFSET))(this);
		}

	};
