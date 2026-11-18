#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBMFHPMONGC;
namespace UnityEngine { class Animator; }

#define FBMFHPMONGC_LLINDFCAOIB_EMFGJLBDHMP_OFFSET UNITYSDK_OFFSET(0xF9F8D50)
#define FBMFHPMONGC_LLINDFCAOIB__CTOR_OFFSET UNITYSDK_OFFSET(0xF9F8D40)

inline static constexpr unsigned int FBMFHPMONGC_LLINDFCAOIB_TypeDefinitionIndex = 50506;

class FBMFHPMONGC_LLINDFCAOIB : public ::System::Object
{
public:
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x10
	::UnityEngine::Animator* ICAAMDMMDDJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_LLINDFCAOIB__CTOR_OFFSET))(this);
	}

	::System::Boolean EMFGJLBDHMP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_LLINDFCAOIB_EMFGJLBDHMP_OFFSET))(this);
	}
};
