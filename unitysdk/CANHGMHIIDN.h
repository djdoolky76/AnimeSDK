#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddClientMazeBuff; }
namespace RPG::GameCore { class TaskContext; }

#define CANHGMHIIDN_CTOR_OFFSET UNITYSDK_OFFSET(0xC48C700)
#define CANHGMHIIDN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC48C750)

inline static constexpr unsigned int CANHGMHIIDN_TypeDefinitionIndex = 57859;

	class CANHGMHIIDN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddClientMazeBuff* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddClientMazeBuff*))((::PBYTE)hIl2Cpp + CANHGMHIIDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANHGMHIIDN_ONTASKBEGIN_OFFSET))(this);
		}

	};
