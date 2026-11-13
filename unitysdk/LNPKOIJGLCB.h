#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtStopMove; }
namespace RPG::GameCore { class TaskContext; }

#define LNPKOIJGLCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A59A4C0)
#define LNPKOIJGLCB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A59A4F0)

inline static constexpr unsigned int LNPKOIJGLCB_TypeDefinitionIndex = 55342;

	class LNPKOIJGLCB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtStopMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtStopMove*))((::PBYTE)hIl2Cpp + LNPKOIJGLCB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPKOIJGLCB_ONTASKBEGIN_OFFSET))(this);
		}

	};
