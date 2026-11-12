#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JKFEOBFNKIM;
namespace RPG::GameCore { class TaskContext; }

#define CADMPADOBIC_CTOR_OFFSET UNITYSDK_OFFSET(0xCB602A0)
#define CADMPADOBIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB604B0)
#define CADMPADOBIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB602B0)
#define CADMPADOBIC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCB60400)
#define CADMPADOBIC_TICK_OFFSET UNITYSDK_OFFSET(0xCB60450)

inline static constexpr unsigned int CADMPADOBIC_TypeDefinitionIndex = 53944;

	class CADMPADOBIC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::JKFEOBFNKIM* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JKFEOBFNKIM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JKFEOBFNKIM*))((::PBYTE)hIl2Cpp + CADMPADOBIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMPADOBIC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMPADOBIC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CADMPADOBIC_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMPADOBIC_DISPOSE_OFFSET))(this);
		}

	};
