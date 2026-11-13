#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEntityForceVisible; }
namespace RPG::GameCore { class TaskContext; }

#define KALBGDAPAIG_CTOR_OFFSET UNITYSDK_OFFSET(0x19DB4C60)
#define KALBGDAPAIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19DB4C90)

inline static constexpr unsigned int KALBGDAPAIG_TypeDefinitionIndex = 57626;

	class KALBGDAPAIG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityForceVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityForceVisible*))((::PBYTE)hIl2Cpp + KALBGDAPAIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALBGDAPAIG_ONTASKBEGIN_OFFSET))(this);
		}

	};
