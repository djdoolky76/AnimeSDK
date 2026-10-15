#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCharacterVisibilityFollow; }
namespace RPG::GameCore { class TaskContext; }

#define OOPLKONEICN_CTOR_OFFSET UNITYSDK_OFFSET(0xBF90C10)
#define OOPLKONEICN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF90C40)

inline static constexpr unsigned int OOPLKONEICN_TypeDefinitionIndex = 55373;

	class OOPLKONEICN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterVisibilityFollow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterVisibilityFollow*))((::PBYTE)hIl2Cpp + OOPLKONEICN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPLKONEICN_ONTASKBEGIN_OFFSET))(this);
		}

	};
