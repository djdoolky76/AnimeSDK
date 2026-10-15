#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetStanceCount; }
namespace RPG::GameCore { class TaskContext; }

#define POKNCAMNNHB_CTOR_OFFSET UNITYSDK_OFFSET(0xC367580)
#define POKNCAMNNHB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3675B0)

inline static constexpr unsigned int POKNCAMNNHB_TypeDefinitionIndex = 55569;

	class POKNCAMNNHB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetStanceCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetStanceCount*))((::PBYTE)hIl2Cpp + POKNCAMNNHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKNCAMNNHB_ONTASKBEGIN_OFFSET))(this);
		}

	};
