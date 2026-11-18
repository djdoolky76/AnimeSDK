#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEEFBHDBNPP.h"
#include "unitysdk/Dest/Math/Segment3.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MEMAJBJAFFP_GOAEBICNHDJ_OFFSET UNITYSDK_OFFSET(0x1A639870)
#define MEMAJBJAFFP_LKBCHHCOMDE_OFFSET UNITYSDK_OFFSET(0x1A639760)
#define MEMAJBJAFFP_LNNFABNGPHJ_OFFSET UNITYSDK_OFFSET(0x1A639AA0)
#define MEMAJBJAFFP_MINLFJPNOGE_OFFSET UNITYSDK_OFFSET(0x1A639A70)
#define MEMAJBJAFFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6396F0)

inline static constexpr unsigned int MEMAJBJAFFP_TypeDefinitionIndex = 84883;

class MEMAJBJAFFP : public ::IEEFBHDBNPP
{
public:
	::System::Single OJOLGMLDOEC; // 0x40

	::System::Void _ctor(::System::Single LNJFKBBFABK, ::UnityEngine::Vector3 LPOIBLLILAA, ::System::Single INNEMGGMFNB, ::System::Single AEIGNNIGOCH, ::System::Single MPCODBIHGNM, ::System::Single DHJLCCLKDLE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MEMAJBJAFFP__CTOR_OFFSET))(this, LNJFKBBFABK, LPOIBLLILAA, INNEMGGMFNB, AEIGNNIGOCH, MPCODBIHGNM, DHJLCCLKDLE);
	}

	::System::Boolean LKBCHHCOMDE(::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Boolean BIHFCPJENEN)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MEMAJBJAFFP_LKBCHHCOMDE_OFFSET))(this, OHOGDOMNHNK, BIHFCPJENEN);
	}

	::System::Boolean GOAEBICNHDJ(::Dest::Math::Segment3 KMNFBFBNLFL, ::UnityEngine::Vector3& OPMPKFEHOBM)
	{
		return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Segment3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MEMAJBJAFFP_GOAEBICNHDJ_OFFSET))(this, KMNFBFBNLFL, OPMPKFEHOBM);
	}

	::System::Boolean MINLFJPNOGE(::UnityEngine::Vector3 MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MEMAJBJAFFP_MINLFJPNOGE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Single LNNFABNGPHJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMAJBJAFFP_LNNFABNGPHJ_OFFSET))(this);
	}
};
