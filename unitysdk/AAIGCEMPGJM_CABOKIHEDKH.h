#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class GameObject; }

#define AAIGCEMPGJM_CABOKIHEDKH_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x12622B40)
#define AAIGCEMPGJM_CABOKIHEDKH__CTOR_OFFSET UNITYSDK_OFFSET(0x12622D80)

inline static constexpr unsigned int AAIGCEMPGJM_CABOKIHEDKH_TypeDefinitionIndex = 78190;

class AAIGCEMPGJM_CABOKIHEDKH : public ::PIOMHDMPINF
{
public:
	::UnityEngine::GameObject* NGHCDJOLFPG; // 0x10
	::UnityEngine::GameObject* OPDLFIJCPGP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIGCEMPGJM_CABOKIHEDKH__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIGCEMPGJM_CABOKIHEDKH_LBJEOHBBBPN_OFFSET))(this);
	}
};
