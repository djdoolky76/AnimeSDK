#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class ST_Side_MuteAlertValueDecline; }
namespace RPG::GameCore { class TaskContext; }

#define OIOCPENEBOH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE9C050)
#define OIOCPENEBOH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE9C110)
#define OIOCPENEBOH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE9C1A0)

inline static constexpr unsigned int OIOCPENEBOH_TypeDefinitionIndex = 52239;

	class OIOCPENEBOH
	{
	public:
		::RPG::GameCore::NPCComponent* DDFNJFHPMJF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_MuteAlertValueDecline* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_MuteAlertValueDecline*))((::PBYTE)hIl2Cpp + OIOCPENEBOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOCPENEBOH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOCPENEBOH_ONTASKRESET_OFFSET))(this);
		}

	};
