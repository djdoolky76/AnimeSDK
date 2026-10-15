#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_StartCardCutin; }

#define ILBLDCHIGGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B3620)
#define ILBLDCHIGGE_FAPNDMMBKLN_OFFSET UNITYSDK_OFFSET(0x1C6B3700)
#define ILBLDCHIGGE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C6B3750)
#define ILBLDCHIGGE_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6B3630)

inline static constexpr unsigned int ILBLDCHIGGE_TypeDefinitionIndex = 36311;

	class ILBLDCHIGGE : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::System::Single PGMIOKKLHIE; // 0x20
		// static const ::System::Object MOHEDBDBMJG; // 0x0
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + ILBLDCHIGGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBLDCHIGGE_MLKLPMJEHPF_OFFSET))(this);
		}

		::System::Void FAPNDMMBKLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBLDCHIGGE_FAPNDMMBKLN_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILBLDCHIGGE_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
