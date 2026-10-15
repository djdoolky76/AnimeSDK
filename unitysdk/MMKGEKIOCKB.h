#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeAnimEventConfig; }
namespace RPG::GameCore { class TaskContext; }

#define MMKGEKIOCKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D4920)
#define MMKGEKIOCKB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9D4950)

inline static constexpr unsigned int MMKGEKIOCKB_TypeDefinitionIndex = 54913;

	class MMKGEKIOCKB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeAnimEventConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeAnimEventConfig*))((::PBYTE)hIl2Cpp + MMKGEKIOCKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKGEKIOCKB_ONTASKBEGIN_OFFSET))(this);
		}

	};
