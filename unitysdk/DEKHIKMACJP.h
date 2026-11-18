#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPLJEIJIGBP.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }

#define DEKHIKMACJP_AGKIPNJELIK_OFFSET UNITYSDK_OFFSET(0x1A1DC350)
#define DEKHIKMACJP_PGKLGKPKNDA_OFFSET UNITYSDK_OFFSET(0x1A1DCCF0)
#define DEKHIKMACJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1DC2C0)

inline static constexpr unsigned int DEKHIKMACJP_TypeDefinitionIndex = 68035;

class DEKHIKMACJP : public ::IPLJEIJIGBP
{
public:
	::UnityEngine::Vector3 ICOHPECJBKF; // 0x70
	::UnityEngine::Vector3 JEGJIIAAAHK; // 0x7C

	::System::Void _ctor(::System::Boolean NNMFMPBGFFB, ::System::Boolean NNIODGODLBN, ::Foundation::Unreal::FTransform3D CEHCGNDBKLO, ::MoleMole::ConfigAnimationCurveGroup* AOKJEGNBALI, ::System::Boolean GPHCEJBFOIH, ::UnityEngine::Vector3 IFMNKGCPEDM, ::UnityEngine::Vector3 DOPIFAIDNBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::Foundation::Unreal::FTransform3D, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEKHIKMACJP__CTOR_OFFSET))(this, NNMFMPBGFFB, NNIODGODLBN, CEHCGNDBKLO, AOKJEGNBALI, GPHCEJBFOIH, IFMNKGCPEDM, DOPIFAIDNBK);
	}

	::MoleMole::UICameraAtom AGKIPNJELIK(::System::Single IMLLDOHDCNC)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEKHIKMACJP_AGKIPNJELIK_OFFSET))(this, IMLLDOHDCNC);
	}

	::MoleMole::UICameraAtom PGKLGKPKNDA(::System::Single MIALFKCCCPI)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEKHIKMACJP_PGKLGKPKNDA_OFFSET))(this, MIALFKCCCPI);
	}
};
