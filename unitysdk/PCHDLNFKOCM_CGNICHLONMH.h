#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define PCHDLNFKOCM_CGNICHLONMH_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x14B52AC0)
#define PCHDLNFKOCM_CGNICHLONMH__CTOR_OFFSET UNITYSDK_OFFSET(0x14B52C10)

inline static constexpr unsigned int PCHDLNFKOCM_CGNICHLONMH_TypeDefinitionIndex = 47111;

class PCHDLNFKOCM_CGNICHLONMH : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* PNDOLJBHMHE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHDLNFKOCM_CGNICHLONMH__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHDLNFKOCM_CGNICHLONMH_LBJEOHBBBPN_OFFSET))(this);
	}
};
