#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DebateShowToast; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define NHICEOFGKLN_CTOR_OFFSET UNITYSDK_OFFSET(0x148998A0)
#define NHICEOFGKLN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14899AB0)
#define NHICEOFGKLN_DPCOKBDIADP_OFFSET UNITYSDK_OFFSET(0x14899A00)
#define NHICEOFGKLN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x148998B0)
#define NHICEOFGKLN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14899B00)
#define NHICEOFGKLN_TICK_OFFSET UNITYSDK_OFFSET(0x14899B50)
#define NHICEOFGKLN__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x14899BB0)

inline static constexpr unsigned int NHICEOFGKLN_TypeDefinitionIndex = 53872;

	class NHICEOFGKLN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::DebateShowToast* OFKGLJOAMLD; // 0x20
		::System::Boolean BFIPMHHFJJH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DebateShowToast* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DebateShowToast*))((::PBYTE)hIl2Cpp + NHICEOFGKLN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHICEOFGKLN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHICEOFGKLN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHICEOFGKLN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHICEOFGKLN_TICK_OFFSET))(this, a1);
		}

		::System::String* DPCOKBDIADP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHICEOFGKLN_DPCOKBDIADP_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHICEOFGKLN__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

	};
