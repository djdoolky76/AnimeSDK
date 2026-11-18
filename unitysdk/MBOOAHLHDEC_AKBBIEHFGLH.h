#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define MBOOAHLHDEC_AKBBIEHFGLH_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x17D04190)
#define MBOOAHLHDEC_AKBBIEHFGLH__CTOR_OFFSET UNITYSDK_OFFSET(0x17D042E0)

inline static constexpr unsigned int MBOOAHLHDEC_AKBBIEHFGLH_TypeDefinitionIndex = 79179;

class MBOOAHLHDEC_AKBBIEHFGLH : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* FPBNHPCLHMI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOAHLHDEC_AKBBIEHFGLH__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOAHLHDEC_AKBBIEHFGLH_LBJEOHBBBPN_OFFSET))(this);
	}
};
