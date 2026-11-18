#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define DLACDAJLFFK_JOGHHCGKHNH_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x7FC2150)
#define DLACDAJLFFK_JOGHHCGKHNH__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC2390)

inline static constexpr unsigned int DLACDAJLFFK_JOGHHCGKHNH_TypeDefinitionIndex = 92567;

class DLACDAJLFFK_JOGHHCGKHNH : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* PNDOLJBHMHE; // 0x10
	::UnityEngine::Transform* HGPHKCCIMLG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLACDAJLFFK_JOGHHCGKHNH__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLACDAJLFFK_JOGHHCGKHNH_LBJEOHBBBPN_OFFSET))(this);
	}
};
