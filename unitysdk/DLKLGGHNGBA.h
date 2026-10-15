#pragma once
#include "unitysdk/unitysdk.h"
class LAPKGFCDPCD;
namespace RPG::GameCore { class TaskContext; }

#define DLKLGGHNGBA_CTOR_OFFSET UNITYSDK_OFFSET(0xF89DB70)
#define DLKLGGHNGBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF89DBA0)

inline static constexpr unsigned int DLKLGGHNGBA_TypeDefinitionIndex = 55157;

	class DLKLGGHNGBA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LAPKGFCDPCD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LAPKGFCDPCD*))((::PBYTE)hIl2Cpp + DLKLGGHNGBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKLGGHNGBA_ONTASKBEGIN_OFFSET))(this);
		}

	};
