#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAvatarDepart; }
namespace RPG::GameCore { class TaskContext; }

#define KELGDMHDIIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB37D800)
#define KELGDMHDIIJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB37D830)

inline static constexpr unsigned int KELGDMHDIIJ_TypeDefinitionIndex = 55347;

	class KELGDMHDIIJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAvatarDepart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAvatarDepart*))((::PBYTE)hIl2Cpp + KELGDMHDIIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELGDMHDIIJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
