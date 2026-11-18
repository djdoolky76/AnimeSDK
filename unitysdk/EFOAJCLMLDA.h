#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

inline static constexpr unsigned int EFOAJCLMLDA_TypeDefinitionIndex = 82665;

struct alignas(8) EFOAJCLMLDA
{
	::System::Boolean PKCEADEBOJE; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x14
	::UnityEngine::Quaternion GJNLCLDFFIN; // 0x20
	::UnityEngine::Transform* LNEEMAGIHLB; // 0x30
	::MGHNAPKHBOG HODAIDNDKHD; // 0x38
};
