#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RedirectActionDelayChange; }
namespace RPG::GameCore { class TaskContext; }

#define HFNLBILBFFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15C7F820)
#define HFNLBILBFFJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C7F850)

inline static constexpr unsigned int HFNLBILBFFJ_TypeDefinitionIndex = 55287;

	class HFNLBILBFFJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RedirectActionDelayChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RedirectActionDelayChange*))((::PBYTE)hIl2Cpp + HFNLBILBFFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNLBILBFFJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
