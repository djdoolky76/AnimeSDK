#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define KABJIGHDKFI__CTOR_OFFSET UNITYSDK_OFFSET(0x13C44E50)

inline static constexpr unsigned int KABJIGHDKFI_TypeDefinitionIndex = 58452;

class KABJIGHDKFI : public ::System::Object
{
public:
	::UnityEngine::Transform* HBAIENEBGMH; // 0x10
	::System::String* MCOHLHMKLIP; // 0x18
	::UnityEngine::Vector3 BOGPAHGJOJK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KABJIGHDKFI__CTOR_OFFSET))(this);
	}
};
