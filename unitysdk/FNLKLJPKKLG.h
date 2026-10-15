#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetFloorDefaultEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define FNLKLJPKKLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1587EE30)
#define FNLKLJPKKLG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1587EE60)

inline static constexpr unsigned int FNLKLJPKKLG_TypeDefinitionIndex = 58395;

	class FNLKLJPKKLG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetFloorDefaultEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetFloorDefaultEmotion*))((::PBYTE)hIl2Cpp + FNLKLJPKKLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLKLJPKKLG_ONTASKBEGIN_OFFSET))(this);
		}

	};
