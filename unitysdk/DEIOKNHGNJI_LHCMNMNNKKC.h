#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class GameObject; }

#define DEIOKNHGNJI_LHCMNMNNKKC_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x15A381E0)
#define DEIOKNHGNJI_LHCMNMNNKKC__CTOR_OFFSET UNITYSDK_OFFSET(0x15A38330)

inline static constexpr unsigned int DEIOKNHGNJI_LHCMNMNNKKC_TypeDefinitionIndex = 81688;

class DEIOKNHGNJI_LHCMNMNNKKC : public ::PIOMHDMPINF
{
public:
	::UnityEngine::GameObject* DLIMANHMNMG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIOKNHGNJI_LHCMNMNNKKC__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIOKNHGNJI_LHCMNMNNKKC_LBJEOHBBBPN_OFFSET))(this);
	}
};
