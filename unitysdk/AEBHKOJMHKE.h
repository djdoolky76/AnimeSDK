#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HipplenSetAreaAnchorVisible; }
namespace RPG::GameCore { class TaskContext; }

#define AEBHKOJMHKE_CTOR_OFFSET UNITYSDK_OFFSET(0xB14A5C0)
#define AEBHKOJMHKE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB14A5F0)

inline static constexpr unsigned int AEBHKOJMHKE_TypeDefinitionIndex = 52279;

	class AEBHKOJMHKE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenSetAreaAnchorVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenSetAreaAnchorVisible*))((::PBYTE)hIl2Cpp + AEBHKOJMHKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBHKOJMHKE_ONTASKBEGIN_OFFSET))(this);
		}

	};
