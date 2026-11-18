#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define MHJKAOHEGCL_AEFPGPBPLHL_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x151D2560)
#define MHJKAOHEGCL_AEFPGPBPLHL__CTOR_OFFSET UNITYSDK_OFFSET(0x151D2C30)

inline static constexpr unsigned int MHJKAOHEGCL_AEFPGPBPLHL_TypeDefinitionIndex = 87155;

class MHJKAOHEGCL_AEFPGPBPLHL : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* BJJGECJBHLH; // 0x10
	::UnityEngine::Transform* HALABGHGCPI; // 0x18
	::UnityEngine::Transform* PJCJHBBKNNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJKAOHEGCL_AEFPGPBPLHL__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJKAOHEGCL_AEFPGPBPLHL_LBJEOHBBBPN_OFFSET))(this);
	}
};
