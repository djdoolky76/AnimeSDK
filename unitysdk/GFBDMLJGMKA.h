#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEntityUnselectable; }
namespace RPG::GameCore { class TaskContext; }

#define GFBDMLJGMKA_CTOR_OFFSET UNITYSDK_OFFSET(0x159DD5F0)
#define GFBDMLJGMKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159DD620)

inline static constexpr unsigned int GFBDMLJGMKA_TypeDefinitionIndex = 55506;

	class GFBDMLJGMKA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityUnselectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityUnselectable*))((::PBYTE)hIl2Cpp + GFBDMLJGMKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBDMLJGMKA_ONTASKBEGIN_OFFSET))(this);
		}

	};
