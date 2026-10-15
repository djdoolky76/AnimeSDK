#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDynamicSkillButtonInput; }

#define PHBJCJGPBCF_CTOR_OFFSET UNITYSDK_OFFSET(0xC22F2E0)
#define PHBJCJGPBCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC22F3A0)
#define PHBJCJGPBCF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC22F4C0)
#define PHBJCJGPBCF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC22F470)
#define PHBJCJGPBCF_TICK_OFFSET UNITYSDK_OFFSET(0xC22F570)

inline static constexpr unsigned int PHBJCJGPBCF_TypeDefinitionIndex = 55808;

	class PHBJCJGPBCF : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::WaitDynamicSkillButtonInput* OFKGLJOAMLD; // 0x28
		::System::Single EFKCJMFANEB; // 0x30
		::System::Single DKOFFPPGEFI; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + PHBJCJGPBCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBJCJGPBCF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBJCJGPBCF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBJCJGPBCF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHBJCJGPBCF_TICK_OFFSET))(this, a1);
		}

	};
