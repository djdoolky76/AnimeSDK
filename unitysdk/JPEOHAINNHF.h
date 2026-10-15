#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvIsometricSetSwipeCamera; }
namespace RPG::GameCore { class TaskContext; }

#define JPEOHAINNHF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2B56D0)
#define JPEOHAINNHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2B5700)

inline static constexpr unsigned int JPEOHAINNHF_TypeDefinitionIndex = 52388;

	class JPEOHAINNHF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvIsometricSetSwipeCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvIsometricSetSwipeCamera*))((::PBYTE)hIl2Cpp + JPEOHAINNHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEOHAINNHF_ONTASKBEGIN_OFFSET))(this);
		}

	};
