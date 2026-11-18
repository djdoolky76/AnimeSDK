#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MFHEIOBAEDI.h"
#include "unitysdk/MLKKEGMGNJH.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/NHEPPDKDPPD.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class HKLENLLABEJ_2;
template <typename T> class DFNGPLNPPEG_1;

#define EGGPADBCCBH_CLCCMJOGPFC_OFFSET UNITYSDK_OFFSET(0x794860)
#define EGGPADBCCBH_GAKNMPBGNHF_OFFSET UNITYSDK_OFFSET(0x16BDD4F0)
#define EGGPADBCCBH_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x794850)

inline static constexpr unsigned int EGGPADBCCBH_TypeDefinitionIndex = 50649;

struct alignas(4) EGGPADBCCBH
{
	::System::Boolean KNDMMHPDPIB(::System::Single& PMNLNNGEIFM, ::MoleMole::EntityHandle& HPADNAEINPK, ::DFNGPLNPPEG_1<::MLKKEGMGNJH>*& HINEJHJDICB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::MoleMole::EntityHandle&, ::DFNGPLNPPEG_1<::MLKKEGMGNJH>*&))((::PBYTE)hIl2Cpp + EGGPADBCCBH_KNDMMHPDPIB_OFFSET))(this, PMNLNNGEIFM, HPADNAEINPK, HINEJHJDICB);
	}

	static ::System::Boolean GAKNMPBGNHF(::MoleMole::EntityHandle& HPADNAEINPK, ::UnityEngine::Transform* EEPCLBBDDDP, ::HKLENLLABEJ_2<::NHEPPDKDPPD, ::MFHEIOBAEDI>* OJJOOEKCCDA, ::UnityEngine::Vector3 AFGOHDAPDHP, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::UnityEngine::Transform*, ::HKLENLLABEJ_2<::NHEPPDKDPPD, ::MFHEIOBAEDI>*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EGGPADBCCBH_GAKNMPBGNHF_OFFSET))(HPADNAEINPK, EEPCLBBDDDP, OJJOOEKCCDA, AFGOHDAPDHP, PMNLNNGEIFM);
	}

	::System::Boolean CLCCMJOGPFC(::System::Single& PMNLNNGEIFM, ::MoleMole::EntityHandle& HPADNAEINPK, ::DFNGPLNPPEG_1<::MLKKEGMGNJH>*& NFKAJAIMGJM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::MoleMole::EntityHandle&, ::DFNGPLNPPEG_1<::MLKKEGMGNJH>*&))((::PBYTE)hIl2Cpp + EGGPADBCCBH_CLCCMJOGPFC_OFFSET))(this, PMNLNNGEIFM, HPADNAEINPK, NFKAJAIMGJM);
	}
};
