#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
class IJFIHJJPHNA;
class PMMIGNNAIJB;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_GlobalData; }

#define KCJENHOOBDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88E650)
#define KCJENHOOBDJ_DKHOEIMMPMM_OFFSET UNITYSDK_OFFSET(0x1D88EA20)
#define KCJENHOOBDJ_JCIBPNFBKKK_OFFSET UNITYSDK_OFFSET(0x1D88F360)
#define KCJENHOOBDJ_KLEIBGPAIGA_OFFSET UNITYSDK_OFFSET(0x1D88F150)
#define KCJENHOOBDJ_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1D88E660)
#define KCJENHOOBDJ_OPJFLHPFKAN_OFFSET UNITYSDK_OFFSET(0x1D88EDB0)

inline static constexpr unsigned int KCJENHOOBDJ_TypeDefinitionIndex = 37298;

	class KCJENHOOBDJ : public ::AJBKGPOEBFG
	{
	public:
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_GlobalData* IGHAHBNLIJA; // 0x20
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
