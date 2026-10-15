#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddHitByTimeRewindListener; }
namespace RPG::GameCore { class TaskContext; }

#define OGHFMKFJPPD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE572D0)
#define OGHFMKFJPPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE57300)

inline static constexpr unsigned int OGHFMKFJPPD_TypeDefinitionIndex = 53358;

	class OGHFMKFJPPD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddHitByTimeRewindListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddHitByTimeRewindListener*))((::PBYTE)hIl2Cpp + OGHFMKFJPPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHFMKFJPPD_ONTASKBEGIN_OFFSET))(this);
		}

	};
