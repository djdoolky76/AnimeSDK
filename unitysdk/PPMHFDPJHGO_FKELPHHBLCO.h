#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define PPMHFDPJHGO_FKELPHHBLCO_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x150E76C0)
#define PPMHFDPJHGO_FKELPHHBLCO__CTOR_OFFSET UNITYSDK_OFFSET(0x150E7810)

inline static constexpr unsigned int PPMHFDPJHGO_FKELPHHBLCO_TypeDefinitionIndex = 47778;

class PPMHFDPJHGO_FKELPHHBLCO : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* GOHLGCJPNCO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMHFDPJHGO_FKELPHHBLCO__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMHFDPJHGO_FKELPHHBLCO_LBJEOHBBBPN_OFFSET))(this);
	}
};
