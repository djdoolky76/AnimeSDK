#pragma once
#include "unitysdk/unitysdk.h"
class PPJKAENEFHD;
namespace RPG::GameCore { class TaskContext; }

#define PKICPBMBBLM_CTOR_OFFSET UNITYSDK_OFFSET(0xC2BBCE0)
#define PKICPBMBBLM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2BBD10)

	class PKICPBMBBLM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PPJKAENEFHD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PPJKAENEFHD*))((::PBYTE)hIl2Cpp + PKICPBMBBLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKICPBMBBLM_ONTASKBEGIN_OFFSET))(this);
		}

	};
