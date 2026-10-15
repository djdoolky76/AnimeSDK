#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FeverTimeInfoChangeParam; }
namespace RPG::GameCore { class NotifyFeverTimeInfoChange; }
namespace RPG::GameCore { class TaskContext; }

#define HMCBAFHIOLP_CTOR_OFFSET UNITYSDK_OFFSET(0x15D6CE10)
#define HMCBAFHIOLP_ELPCLGDHAAG_OFFSET UNITYSDK_OFFSET(0x15D6D0A0)
#define HMCBAFHIOLP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D6CE40)

inline static constexpr unsigned int HMCBAFHIOLP_TypeDefinitionIndex = 55235;

	class HMCBAFHIOLP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NotifyFeverTimeInfoChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NotifyFeverTimeInfoChange*))((::PBYTE)hIl2Cpp + HMCBAFHIOLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCBAFHIOLP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ELPCLGDHAAG(::RPG::GameCore::FeverTimeInfoChangeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimeInfoChangeParam*))((::PBYTE)hIl2Cpp + HMCBAFHIOLP_ELPCLGDHAAG_OFFSET))(this, a1);
		}

	};
