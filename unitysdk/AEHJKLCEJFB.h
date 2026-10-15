#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StopRandomMissionTalk; }
namespace RPG::GameCore { class TaskContext; }

#define AEHJKLCEJFB_CTOR_OFFSET UNITYSDK_OFFSET(0xB150E80)
#define AEHJKLCEJFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB150E90)
#define AEHJKLCEJFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB150ED0)
#define AEHJKLCEJFB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB150F30)
#define AEHJKLCEJFB_TICK_OFFSET UNITYSDK_OFFSET(0xB150F80)

inline static constexpr unsigned int AEHJKLCEJFB_TypeDefinitionIndex = 58735;

	class AEHJKLCEJFB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::StopRandomMissionTalk* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopRandomMissionTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopRandomMissionTalk*))((::PBYTE)hIl2Cpp + AEHJKLCEJFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHJKLCEJFB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHJKLCEJFB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHJKLCEJFB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AEHJKLCEJFB_TICK_OFFSET))(this, a1);
		}

	};
