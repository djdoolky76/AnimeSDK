#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

namespace UnityEngine { class Texture2D; }

#define F47ADD1DE40E5BEF_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x286F120)
#define F47ADD1DE40E5BEF__CTOR_OFFSET UNITYSDK_OFFSET(0x286F440)

inline static constexpr unsigned int F47ADD1DE40E5BEF_TypeDefinitionIndex = 16083;

class F47ADD1DE40E5BEF : public ::ABEBA93AD61764EF
{
public:
	::UnityEngine::E46B881AA2636190 B1AE4153B931F1D5; // 0x18
	::UnityEngine::E46B881AA2636190 A90EA6835D9BB62D; // 0x28
	::System::Single B37690760B22A3B2; // 0x38
	::System::Single A1DA50F0B5502C80; // 0x3C
	::System::Single AF32EE5861F5B667; // 0x40
	::System::Single BA9187D3A6C6DDAD; // 0x44
	::System::Single E7974CACD155B3B0; // 0x48
	::System::Single A4226296BC0C35EF; // 0x4C
	::UnityEngine::Texture2D* F1EAEA0D4C3F6317; // 0x50
	::UnityEngine::Texture2D* E3FD78289E091BCD; // 0x58
	::UnityEngine::E8984F4E44AE20E5 FC1EF21E6F0EABD5; // 0x60
	::UnityEngine::E8984F4E44AE20E5 B902F0F612858FAA; // 0x70
	::System::Single B49954D81A9E655B; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F47ADD1DE40E5BEF__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::F47ADD1DE40E5BEF* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::F47ADD1DE40E5BEF*))((::PBYTE)hIl2Cpp + F47ADD1DE40E5BEF_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};
