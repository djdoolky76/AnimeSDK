#pragma once
#include "unitysdk/unitysdk.h"
class LPMGDCDFOOE;
namespace RPG::GameCore { class TaskContext; }

#define KHDEAMCCLLN_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F8E70)
#define KHDEAMCCLLN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3F8EA0)

inline static constexpr unsigned int KHDEAMCCLLN_TypeDefinitionIndex = 56397;

	class KHDEAMCCLLN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LPMGDCDFOOE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LPMGDCDFOOE*))((::PBYTE)hIl2Cpp + KHDEAMCCLLN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDEAMCCLLN_ONTASKBEGIN_OFFSET))(this);
		}

	};
