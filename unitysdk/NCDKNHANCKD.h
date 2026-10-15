#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StopPermanentEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define NCDKNHANCKD_CTOR_OFFSET UNITYSDK_OFFSET(0xBB065E0)
#define NCDKNHANCKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB06610)

inline static constexpr unsigned int NCDKNHANCKD_TypeDefinitionIndex = 55902;

	class NCDKNHANCKD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopPermanentEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopPermanentEmotion*))((::PBYTE)hIl2Cpp + NCDKNHANCKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDKNHANCKD_ONTASKBEGIN_OFFSET))(this);
		}

	};
