#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class OpenTimeRewindSnapPage; }
namespace RPG::GameCore { class TaskContext; }

#define JLDCFFBDAJO_CTOR_OFFSET UNITYSDK_OFFSET(0x17B41FB0)
#define JLDCFFBDAJO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B41FC0)
#define JLDCFFBDAJO_EPCFEIIICGP_OFFSET UNITYSDK_OFFSET(0x17B422C0)
#define JLDCFFBDAJO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17B42010)
#define JLDCFFBDAJO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17B42210)
#define JLDCFFBDAJO_TICK_OFFSET UNITYSDK_OFFSET(0x17B42260)

inline static constexpr unsigned int JLDCFFBDAJO_TypeDefinitionIndex = 54541;

	class JLDCFFBDAJO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::OpenTimeRewindSnapPage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTimeRewindSnapPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTimeRewindSnapPage*))((::PBYTE)hIl2Cpp + JLDCFFBDAJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDCFFBDAJO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDCFFBDAJO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDCFFBDAJO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JLDCFFBDAJO_TICK_OFFSET))(this, a1);
		}

		::System::Void EPCFEIIICGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDCFFBDAJO_EPCFEIIICGP_OFFSET))(this);
		}

	};
