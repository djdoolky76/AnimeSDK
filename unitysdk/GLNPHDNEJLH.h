#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJJDINMFOEI.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define GLNPHDNEJLH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17AC6C20)
#define GLNPHDNEJLH_IBCPJCNGKFE_OFFSET UNITYSDK_OFFSET(0x17AC6EA0)
#define GLNPHDNEJLH_LHFJBJFOFHN_OFFSET UNITYSDK_OFFSET(0x17AC6FE0)
#define GLNPHDNEJLH_MIEDCNAAGMF_OFFSET UNITYSDK_OFFSET(0x17AC6CF0)
#define GLNPHDNEJLH__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC6BC0)

inline static constexpr unsigned int GLNPHDNEJLH_TypeDefinitionIndex = 44543;

class GLNPHDNEJLH : public ::IJJDINMFOEI
{
public:
	::UnityEngine::Vector3 NHKNILFDKGG; // 0x28
	::UnityEngine::Vector3 EHPAJFODHIP; // 0x34
	::UnityEngine::Vector3 MMBMNEDGJEN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNPHDNEJLH__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::Vector3 GJIHOPCJODF, ::UnityEngine::Vector3 PPELJIHKBBD, ::System::Single EEODALLOKMF, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + GLNPHDNEJLH_BBOMJDBNHIC_OFFSET))(this, GJIHOPCJODF, PPELJIHKBBD, EEODALLOKMF, FAJHPKBELMF);
	}

	::UnityEngine::Vector3 MIEDCNAAGMF(::UnityEngine::Vector3 GJIHOPCJODF, ::UnityEngine::Vector3 PPELJIHKBBD, ::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Single EEODALLOKMF, ::System::Single PMNLNNGEIFM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GLNPHDNEJLH_MIEDCNAAGMF_OFFSET))(this, GJIHOPCJODF, PPELJIHKBBD, FAJHPKBELMF, EEODALLOKMF, PMNLNNGEIFM);
	}

	::UnityEngine::Vector3 IBCPJCNGKFE(::System::Single PMNLNNGEIFM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GLNPHDNEJLH_IBCPJCNGKFE_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LHFJBJFOFHN(::UnityEngine::Vector3 PPELJIHKBBD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GLNPHDNEJLH_LHFJBJFOFHN_OFFSET))(this, PPELJIHKBBD);
	}
};
