#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_StartCardCutin; }

#define ILBLDCHIGGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E19C0)
#define ILBLDCHIGGE_FAPNDMMBKLN_OFFSET UNITYSDK_OFFSET(0x1C6E1AA0)
#define ILBLDCHIGGE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C6E1AF0)
#define ILBLDCHIGGE_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6E19D0)

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
