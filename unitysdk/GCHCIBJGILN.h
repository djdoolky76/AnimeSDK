#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropDestructImmediately; }
namespace RPG::GameCore { class TaskContext; }

#define GCHCIBJGILN_CTOR_OFFSET UNITYSDK_OFFSET(0x159603D0)
#define GCHCIBJGILN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15960400)
#define GCHCIBJGILN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15960450)

inline static constexpr unsigned int GCHCIBJGILN_TypeDefinitionIndex = 53172;

	class GCHCIBJGILN
	{
	public:
		::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropDestructImmediately* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropDestructImmediately*))((::PBYTE)hIl2Cpp + GCHCIBJGILN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHCIBJGILN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHCIBJGILN_ONTASKBEGIN_OFFSET))(this);
		}

	};
