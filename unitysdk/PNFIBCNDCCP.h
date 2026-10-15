#pragma once
#include "unitysdk/unitysdk.h"
class LHOKPKHEBIK;
namespace RPG::GameCore { class TaskContext; }

#define PNFIBCNDCCP_CTOR_OFFSET UNITYSDK_OFFSET(0xC3304E0)
#define PNFIBCNDCCP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC330510)

inline static constexpr unsigned int PNFIBCNDCCP_TypeDefinitionIndex = 58595;

	class PNFIBCNDCCP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LHOKPKHEBIK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LHOKPKHEBIK*))((::PBYTE)hIl2Cpp + PNFIBCNDCCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFIBCNDCCP_ONTASKBEGIN_OFFSET))(this);
		}

	};
