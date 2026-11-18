#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEEFBHDBNPP.h"
#include "unitysdk/Dest/Math/Segment3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GHOGEJGAKEO_DMOLIELPHPA_OFFSET UNITYSDK_OFFSET(0x116F7F40)
#define GHOGEJGAKEO_GOAEBICNHDJ_OFFSET UNITYSDK_OFFSET(0x116F7B10)
#define GHOGEJGAKEO_LKBCHHCOMDE_OFFSET UNITYSDK_OFFSET(0x116F78C0)
#define GHOGEJGAKEO_MINLFJPNOGE_OFFSET UNITYSDK_OFFSET(0x116F7F50)
#define GHOGEJGAKEO_PDFPILBJCMI_OFFSET UNITYSDK_OFFSET(0x116F7F80)
#define GHOGEJGAKEO__CTOR_OFFSET UNITYSDK_OFFSET(0x116F7840)

inline static constexpr unsigned int GHOGEJGAKEO_TypeDefinitionIndex = 53502;

class GHOGEJGAKEO : public ::IEEFBHDBNPP
{
public:
	::System::Single PJDIFFEJPJD; // 0x40
	::System::Single ODJLNMDABGB; // 0x44

	::System::Void _ctor(::System::Single JBGLCAFPGHK, ::System::Single KKAMDFNMMJH, ::UnityEngine::Vector3 LPOIBLLILAA, ::UnityEngine::Quaternion GJNLCLDFFIN, ::System::Single INNEMGGMFNB, ::System::Single AEIGNNIGOCH, ::System::Single MPCODBIHGNM, ::System::Single DHJLCCLKDLE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHOGEJGAKEO__CTOR_OFFSET))(this, JBGLCAFPGHK, KKAMDFNMMJH, LPOIBLLILAA, GJNLCLDFFIN, INNEMGGMFNB, AEIGNNIGOCH, MPCODBIHGNM, DHJLCCLKDLE);
	}

	::System::Boolean LKBCHHCOMDE(::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Boolean BIHFCPJENEN)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + GHOGEJGAKEO_LKBCHHCOMDE_OFFSET))(this, OHOGDOMNHNK, BIHFCPJENEN);
	}

	::System::Boolean GOAEBICNHDJ(::Dest::Math::Segment3 KMNFBFBNLFL, ::UnityEngine::Vector3& OPMPKFEHOBM)
	{
		return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Segment3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + GHOGEJGAKEO_GOAEBICNHDJ_OFFSET))(this, KMNFBFBNLFL, OPMPKFEHOBM);
	}

	::System::Single DMOLIELPHPA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GHOGEJGAKEO_DMOLIELPHPA_OFFSET))(this);
	}

	::System::Boolean MINLFJPNOGE(::UnityEngine::Vector3 MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + GHOGEJGAKEO_MINLFJPNOGE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Single PDFPILBJCMI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GHOGEJGAKEO_PDFPILBJCMI_OFFSET))(this);
	}
};
