#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvRemoveNpcVisionConfig; }
namespace RPG::GameCore { class TaskContext; }

#define HIDHGJPJPOK_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD4D80)
#define HIDHGJPJPOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CD4DB0)

inline static constexpr unsigned int HIDHGJPJPOK_TypeDefinitionIndex = 52482;

	class HIDHGJPJPOK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRemoveNpcVisionConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRemoveNpcVisionConfig*))((::PBYTE)hIl2Cpp + HIDHGJPJPOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDHGJPJPOK_ONTASKBEGIN_OFFSET))(this);
		}

	};
