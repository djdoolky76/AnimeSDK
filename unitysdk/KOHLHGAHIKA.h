#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AlleyTransportFocusCamera; }
namespace RPG::GameCore { class TaskContext; }

#define KOHLHGAHIKA_CTOR_OFFSET UNITYSDK_OFFSET(0x190FF850)
#define KOHLHGAHIKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x190FF860)
#define KOHLHGAHIKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x190FF8A0)
#define KOHLHGAHIKA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x190FF920)
#define KOHLHGAHIKA_TICK_OFFSET UNITYSDK_OFFSET(0x190FF970)

inline static constexpr unsigned int KOHLHGAHIKA_TypeDefinitionIndex = 59170;

	class KOHLHGAHIKA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::AlleyTransportFocusCamera* OFKGLJOAMLD; // 0x20
		::System::Single BOBKAKEJPEI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AlleyTransportFocusCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AlleyTransportFocusCamera*))((::PBYTE)hIl2Cpp + KOHLHGAHIKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHLHGAHIKA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHLHGAHIKA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHLHGAHIKA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KOHLHGAHIKA_TICK_OFFSET))(this, a1);
		}

	};
