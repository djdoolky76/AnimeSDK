#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetTeam; }
namespace RPG::GameCore { class TaskContext; }

#define DKDABDCPGFI_CTOR_OFFSET UNITYSDK_OFFSET(0xF2568A0)
#define DKDABDCPGFI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF2568D0)

inline static constexpr unsigned int DKDABDCPGFI_TypeDefinitionIndex = 54727;

	class DKDABDCPGFI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetTeam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetTeam*))((::PBYTE)hIl2Cpp + DKDABDCPGFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDABDCPGFI_EVALUATE_OFFSET))(this);
		}

	};
