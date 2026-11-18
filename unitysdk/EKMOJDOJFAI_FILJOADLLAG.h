#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define EKMOJDOJFAI_FILJOADLLAG_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x11A99520)
#define EKMOJDOJFAI_FILJOADLLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x11A99670)

inline static constexpr unsigned int EKMOJDOJFAI_FILJOADLLAG_TypeDefinitionIndex = 71288;

class EKMOJDOJFAI_FILJOADLLAG : public ::PIOMHDMPINF
{
public:
	::UnityEngine::GameObject* FIPFDIOCDEC; // 0x10
	::UnityEngine::GameObject* OHMIAAFFBFC; // 0x18
	::UnityEngine::GameObject* DPOPFCMCGNA; // 0x20
	::UnityEngine::Transform* CEBJJNGOEHF; // 0x28
	::UnityEngine::GameObject* GHJCMEKBMMK; // 0x30
	::UnityEngine::Transform* GJHHHADJIDA; // 0x38
	::UnityEngine::Transform* FDFCOBFCEMO; // 0x40
	::UnityEngine::GameObject* PALCIADLKKH; // 0x48
	::UnityEngine::GameObject* CODEFIJPAEH; // 0x50
	::UnityEngine::Transform* NKGJGOIKICF; // 0x58
	::UnityEngine::GameObject* MPPJLDIMEEF; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMOJDOJFAI_FILJOADLLAG__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMOJDOJFAI_FILJOADLLAG_LBJEOHBBBPN_OFFSET))(this);
	}
};
