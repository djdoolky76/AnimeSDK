#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

namespace UnityEngine { class Texture2D; }

#define AF753761084EA700_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x2865900)
#define AF753761084EA700__CTOR_OFFSET UNITYSDK_OFFSET(0x2865AB0)

inline static constexpr unsigned int AF753761084EA700_TypeDefinitionIndex = 15984;

class AF753761084EA700 : public ::ABEBA93AD61764EF
{
public:
	::System::Single A01583338FCE198E; // 0x18
	::System::Byte _padding0[0x4];
	::UnityEngine::Texture2D* B209A3C353CDBDC8; // 0x20
	::System::Boolean B8EE14FC37B60B95; // 0x28
	::System::Byte _padding1[0x7];
	::UnityEngine::Texture2D* F0313B4454A68F01; // 0x30
	::UnityEngine::E8984F4E44AE20E5 B824E957F85A664B; // 0x38

	::System::Boolean FC3208D7B8C7EE04(::AF753761084EA700* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::AF753761084EA700*))((::PBYTE)hIl2Cpp + AF753761084EA700_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF753761084EA700__CTOR_OFFSET))(this);
	}
};
