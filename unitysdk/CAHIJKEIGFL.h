#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_WaitSecond; }

#define CAHIJKEIGFL_CTOR_OFFSET UNITYSDK_OFFSET(0x170368E0)
#define CAHIJKEIGFL_FAPNDMMBKLN_OFFSET UNITYSDK_OFFSET(0x17036940)
#define CAHIJKEIGFL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x17036990)
#define CAHIJKEIGFL_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x170368F0)

inline static constexpr unsigned int CAHIJKEIGFL_TypeDefinitionIndex = 37224;

	class CAHIJKEIGFL : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_WaitSecond* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Single PGMIOKKLHIE; // 0x28
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WaitSecond* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WaitSecond*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + CAHIJKEIGFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHIJKEIGFL_MLKLPMJEHPF_OFFSET))(this);
		}

		::System::Void FAPNDMMBKLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHIJKEIGFL_FAPNDMMBKLN_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CAHIJKEIGFL_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
