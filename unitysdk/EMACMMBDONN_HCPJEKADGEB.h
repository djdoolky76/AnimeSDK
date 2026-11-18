#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define EMACMMBDONN_HCPJEKADGEB_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x11A9CBE0)
#define EMACMMBDONN_HCPJEKADGEB__CTOR_OFFSET UNITYSDK_OFFSET(0x11A9CD30)

inline static constexpr unsigned int EMACMMBDONN_HCPJEKADGEB_TypeDefinitionIndex = 86578;

class EMACMMBDONN_HCPJEKADGEB : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* FGMFHLIJGJM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACMMBDONN_HCPJEKADGEB__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACMMBDONN_HCPJEKADGEB_LBJEOHBBBPN_OFFSET))(this);
	}
};
