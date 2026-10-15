#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByWeakness; }
namespace RPG::GameCore { class TaskContext; }

#define CELKIABDADM_CTOR_OFFSET UNITYSDK_OFFSET(0xC9E6180)
#define CELKIABDADM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC9E6260)

	class CELKIABDADM
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByWeakness* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByWeakness*))((::PBYTE)hIl2Cpp + CELKIABDADM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELKIABDADM_ONTASKBEGIN_OFFSET))(this);
		}

	};
