#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/HOAAKHNGJJI.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }

#define IPLJEIJIGBP_AGKIPNJELIK_OFFSET UNITYSDK_OFFSET(0x197EE5D0)
#define IPLJEIJIGBP_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x197EE210)
#define IPLJEIJIGBP__CTOR_OFFSET UNITYSDK_OFFSET(0x197EE090)

inline static constexpr unsigned int IPLJEIJIGBP_TypeDefinitionIndex = 58837;

class IPLJEIJIGBP : public ::HOAAKHNGJJI
{
public:
	// static const ::System::String* MNKGPDPNOAP; // 0x0
	// static const ::System::String* FICCGFKJBNI; // 0x0
	// static const ::System::String* EALBJJEIGND; // 0x0
	// static const ::System::String* FMHMFILDHDP; // 0x0
	// static const ::System::String* GOEFNAPFPHC; // 0x0
	// static const ::System::String* IENKHJBFHAO; // 0x0
	// static const ::System::String* DOGLLLNLDOK; // 0x0
	::MoleMole::ConfigAnimationCurveGroup* EEFOCCNFJCO; // 0x20
	::System::Boolean MPDFCCLBFGP; // 0x28
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 LPCKNPBCGHA; // 0x2C
	::System::Single JLFMLKLCPJE; // 0x38
	::UnityEngine::Vector3 BPBNNHHEAPI; // 0x3C
	::Foundation::Unreal::FTransform3D FBMBONODIAN; // 0x48

	::System::Void _ctor(::System::Boolean NNMFMPBGFFB, ::System::Boolean NNIODGODLBN, ::Foundation::Unreal::FTransform3D CEHCGNDBKLO, ::MoleMole::ConfigAnimationCurveGroup* AOKJEGNBALI, ::System::Boolean GPHCEJBFOIH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::Foundation::Unreal::FTransform3D, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Boolean))((::PBYTE)hIl2Cpp + IPLJEIJIGBP__CTOR_OFFSET))(this, NNMFMPBGFFB, NNIODGODLBN, CEHCGNDBKLO, AOKJEGNBALI, GPHCEJBFOIH);
	}

	::MoleMole::UICameraAtom PKAFJHDJEDO(::System::Single IMLLDOHDCNC, ::System::Single PBCAAADNEPK, ::MoleMole::UICameraAtom AIGOOKNCCNH)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + IPLJEIJIGBP_PKAFJHDJEDO_OFFSET))(this, IMLLDOHDCNC, PBCAAADNEPK, AIGOOKNCCNH);
	}

	::MoleMole::UICameraAtom AGKIPNJELIK(::System::Single IMLLDOHDCNC)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IPLJEIJIGBP_AGKIPNJELIK_OFFSET))(this, IMLLDOHDCNC);
	}
};
