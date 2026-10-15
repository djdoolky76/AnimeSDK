#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPreShowRedStanceBreak; }
namespace RPG::GameCore { class TaskContext; }

#define NNJEOBJBLBB_CTOR_OFFSET UNITYSDK_OFFSET(0xBCA95B0)
#define NNJEOBJBLBB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBCA95E0)

inline static constexpr unsigned int NNJEOBJBLBB_TypeDefinitionIndex = 54706;

	class NNJEOBJBLBB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPreShowRedStanceBreak* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPreShowRedStanceBreak*))((::PBYTE)hIl2Cpp + NNJEOBJBLBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJEOBJBLBB_EVALUATE_OFFSET))(this);
		}

	};
