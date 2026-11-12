#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeCharacterSomatoType; }
namespace RPG::GameCore { class TaskContext; }

#define CKAIJIBHKLF_CTOR_OFFSET UNITYSDK_OFFSET(0xE08CB00)
#define CKAIJIBHKLF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE08CB30)

inline static constexpr unsigned int CKAIJIBHKLF_TypeDefinitionIndex = 56089;

	class CKAIJIBHKLF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeCharacterSomatoType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeCharacterSomatoType*))((::PBYTE)hIl2Cpp + CKAIJIBHKLF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAIJIBHKLF_ONTASKBEGIN_OFFSET))(this);
		}

	};
