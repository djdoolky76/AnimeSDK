#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MFHEIOBAEDI.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/NHEPPDKDPPD.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class HKLENLLABEJ_2;

#define EJMAONHIINC_BNKKPAHHNJF_1_OFFSET UNITYSDK_OFFSET(0x169A07F0)
#define EJMAONHIINC_BNKKPAHHNJF_OFFSET UNITYSDK_OFFSET(0x169A0720)
#define EJMAONHIINC_DCPFFDMHJAM_OFFSET UNITYSDK_OFFSET(0x169A0560)
#define EJMAONHIINC_HDEMGKMLEMP_OFFSET UNITYSDK_OFFSET(0x169A0AC0)
#define EJMAONHIINC_KFHNBDMCMJF_OFFSET UNITYSDK_OFFSET(0x169A0E70)

inline static constexpr unsigned int EJMAONHIINC_TypeDefinitionIndex = 73167;

class EJMAONHIINC : public ::System::Object
{
public:
	static ::HKLENLLABEJ_2<::NHEPPDKDPPD, ::MFHEIOBAEDI>* DCPFFDMHJAM(::MoleMole::EntityHandle& HPADNAEINPK)
	{
		return ((::HKLENLLABEJ_2<::NHEPPDKDPPD, ::MFHEIOBAEDI>*(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + EJMAONHIINC_DCPFFDMHJAM_OFFSET))(HPADNAEINPK);
	}

	static ::NHEPPDKDPPD BNKKPAHHNJF(::MoleMole::EntityHandle& HPADNAEINPK, ::System::Func_2<::MoleMole::EntityHandle, ::UnityEngine::Transform*>*& HBAIENEBGMH)
	{
		return ((::NHEPPDKDPPD(*)(::MoleMole::EntityHandle&, ::System::Func_2<::MoleMole::EntityHandle, ::UnityEngine::Transform*>*&))((::PBYTE)hIl2Cpp + EJMAONHIINC_BNKKPAHHNJF_OFFSET))(HPADNAEINPK, HBAIENEBGMH);
	}

	static ::UnityEngine::Transform* HDEMGKMLEMP(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::UnityEngine::Transform*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + EJMAONHIINC_HDEMGKMLEMP_OFFSET))(HPADNAEINPK);
	}

	static ::NHEPPDKDPPD BNKKPAHHNJF_1(::MoleMole::EntityHandle& HPADNAEINPK, ::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::NHEPPDKDPPD(*)(::MoleMole::EntityHandle&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EJMAONHIINC_BNKKPAHHNJF_1_OFFSET))(HPADNAEINPK, GKBJOPJKCLB);
	}

	static ::NHEPPDKDPPD KFHNBDMCMJF(::MoleMole::EntityHandle& HPADNAEINPK, ::System::Func_2<::MoleMole::EntityHandle, ::UnityEngine::Transform*>*& HBAIENEBGMH)
	{
		return ((::NHEPPDKDPPD(*)(::MoleMole::EntityHandle&, ::System::Func_2<::MoleMole::EntityHandle, ::UnityEngine::Transform*>*&))((::PBYTE)hIl2Cpp + EJMAONHIINC_KFHNBDMCMJF_OFFSET))(HPADNAEINPK, HBAIENEBGMH);
	}
};
