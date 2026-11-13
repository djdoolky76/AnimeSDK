#pragma once
#include "unitysdk/unitysdk.h"
class BACCOPOCMPC;
namespace RPG::GameCore { class ST_Side_EnableDialogue; }
namespace RPG::GameCore { class TaskContext; }

#define FJOMGLDODDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA8CC90)
#define FJOMGLDODDO_HNALGDBPDMB_OFFSET UNITYSDK_OFFSET(0x1AA8CDE0)
#define FJOMGLDODDO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AA8CD50)
#define FJOMGLDODDO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AA8CF60)

inline static constexpr unsigned int FJOMGLDODDO_TypeDefinitionIndex = 53338;

	class FJOMGLDODDO
	{
	public:
		::BACCOPOCMPC* PJLGDHFHFLO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_EnableDialogue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_EnableDialogue*))((::PBYTE)hIl2Cpp + FJOMGLDODDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOMGLDODDO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOMGLDODDO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void HNALGDBPDMB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJOMGLDODDO_HNALGDBPDMB_OFFSET))(this, a1);
		}

	};
