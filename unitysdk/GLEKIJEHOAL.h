#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class EnableFreelookCameraBattleTransitionMode; }
namespace RPG::GameCore { class TaskContext; }

#define GLEKIJEHOAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15AAF410)
#define GLEKIJEHOAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AAF420)
#define GLEKIJEHOAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AAF460)
#define GLEKIJEHOAL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AB0390)
#define GLEKIJEHOAL_TICK_OFFSET UNITYSDK_OFFSET(0x15AB03E0)

inline static constexpr unsigned int GLEKIJEHOAL_TypeDefinitionIndex = 58105;

	class GLEKIJEHOAL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::EnableFreelookCameraBattleTransitionMode* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableFreelookCameraBattleTransitionMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableFreelookCameraBattleTransitionMode*))((::PBYTE)hIl2Cpp + GLEKIJEHOAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLEKIJEHOAL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLEKIJEHOAL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLEKIJEHOAL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GLEKIJEHOAL_TICK_OFFSET))(this, a1);
		}

	};
