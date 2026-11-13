#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvHideRushBtn; }
namespace RPG::GameCore { class TaskContext; }

#define NBFBKNABFOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB12E90)
#define NBFBKNABFOJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BB12EC0)

inline static constexpr unsigned int NBFBKNABFOJ_TypeDefinitionIndex = 59114;

	class NBFBKNABFOJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvHideRushBtn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvHideRushBtn*))((::PBYTE)hIl2Cpp + NBFBKNABFOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFBKNABFOJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
