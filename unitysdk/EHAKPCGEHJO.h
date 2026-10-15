#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DisableNextBattleWinVO; }
namespace RPG::GameCore { class TaskContext; }

#define EHAKPCGEHJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1549D500)
#define EHAKPCGEHJO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1549D530)
#define EHAKPCGEHJO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1549D570)

inline static constexpr unsigned int EHAKPCGEHJO_TypeDefinitionIndex = 58084;

	class EHAKPCGEHJO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableNextBattleWinVO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableNextBattleWinVO*))((::PBYTE)hIl2Cpp + EHAKPCGEHJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAKPCGEHJO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAKPCGEHJO_ONTASKBEGIN_OFFSET))(this);
		}

	};
