#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
class IJFIHJJPHNA;
class PMMIGNNAIJB;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_GlobalData; }

#define KCJENHOOBDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70CC70)
#define KCJENHOOBDJ_DKHOEIMMPMM_OFFSET UNITYSDK_OFFSET(0x1C70D040)
#define KCJENHOOBDJ_JCIBPNFBKKK_OFFSET UNITYSDK_OFFSET(0x1C70D980)
#define KCJENHOOBDJ_KLEIBGPAIGA_OFFSET UNITYSDK_OFFSET(0x1C70D770)
#define KCJENHOOBDJ_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C70CC80)
#define KCJENHOOBDJ_OPJFLHPFKAN_OFFSET UNITYSDK_OFFSET(0x1C70D3D0)

	class KCJENHOOBDJ : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_GlobalData* IGHAHBNLIJA; // 0x18
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_GlobalData* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_GlobalData*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + KCJENHOOBDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCJENHOOBDJ_MLKLPMJEHPF_OFFSET))(this);
		}

		::System::Void DKHOEIMMPMM(::IJFIHJJPHNA* a1, ::PMMIGNNAIJB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::PMMIGNNAIJB*))((::PBYTE)hIl2Cpp + KCJENHOOBDJ_DKHOEIMMPMM_OFFSET))(this, a1, a2);
		}

		::System::Void OPJFLHPFKAN(::IJFIHJJPHNA* a1, ::PMMIGNNAIJB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::PMMIGNNAIJB*))((::PBYTE)hIl2Cpp + KCJENHOOBDJ_OPJFLHPFKAN_OFFSET))(this, a1, a2);
		}

		::System::Void KLEIBGPAIGA(::IJFIHJJPHNA* a1, ::PMMIGNNAIJB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::PMMIGNNAIJB*))((::PBYTE)hIl2Cpp + KCJENHOOBDJ_KLEIBGPAIGA_OFFSET))(this, a1, a2);
		}

		::System::Void JCIBPNFBKKK(::IJFIHJJPHNA* a1, ::PMMIGNNAIJB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::PMMIGNNAIJB*))((::PBYTE)hIl2Cpp + KCJENHOOBDJ_JCIBPNFBKKK_OFFSET))(this, a1, a2);
		}

	};
