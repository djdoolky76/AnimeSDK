#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ActionCountDownPreview; }
namespace RPG::GameCore { class TaskContext; }

#define PNJINEAOEGA_CTOR_OFFSET UNITYSDK_OFFSET(0xC33A6A0)
#define PNJINEAOEGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC33A6D0)

inline static constexpr unsigned int PNJINEAOEGA_TypeDefinitionIndex = 54797;

	class PNJINEAOEGA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActionCountDownPreview* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActionCountDownPreview*))((::PBYTE)hIl2Cpp + PNJINEAOEGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJINEAOEGA_ONTASKBEGIN_OFFSET))(this);
		}

	};
