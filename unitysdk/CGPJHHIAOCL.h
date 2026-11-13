#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCharacterPartsVisibility; }
namespace RPG::GameCore { class TaskContext; }

#define CGPJHHIAOCL_CTOR_OFFSET UNITYSDK_OFFSET(0x17861FA0)
#define CGPJHHIAOCL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17861FD0)

inline static constexpr unsigned int CGPJHHIAOCL_TypeDefinitionIndex = 57094;

	class CGPJHHIAOCL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterPartsVisibility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterPartsVisibility*))((::PBYTE)hIl2Cpp + CGPJHHIAOCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPJHHIAOCL_ONTASKBEGIN_OFFSET))(this);
		}

	};
