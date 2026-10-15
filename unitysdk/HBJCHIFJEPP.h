#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BACCOPOCMPC;
class BBOFEHOPCEC;
class GELIALJDFBL;
namespace RPG::GameCore { class AdvRunStateTree; }
namespace RPG::GameCore { class TaskContext; }

#define HBJCHIFJEPP_CTOR_OFFSET UNITYSDK_OFFSET(0x15C0A410)
#define HBJCHIFJEPP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C0A7D0)
#define HBJCHIFJEPP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C0A8B0)
#define HBJCHIFJEPP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C0A990)
#define HBJCHIFJEPP_TICK_OFFSET UNITYSDK_OFFSET(0x15C0AA70)

inline static constexpr unsigned int HBJCHIFJEPP_TypeDefinitionIndex = 52484;

	class HBJCHIFJEPP : public ::GELIALJDFBL
	{
	public:
		::BACCOPOCMPC* PJLGDHFHFLO; // 0x18
		::RPG::GameCore::AdvRunStateTree* OFKGLJOAMLD; // 0x20
		::BBOFEHOPCEC* HDMEPPFFIDK; // 0x28
		::GELIALJDFBL* LHJBPEBMKDN; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRunStateTree* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRunStateTree*))((::PBYTE)hIl2Cpp + HBJCHIFJEPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJCHIFJEPP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJCHIFJEPP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJCHIFJEPP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBJCHIFJEPP_TICK_OFFSET))(this, a1);
		}

	};
