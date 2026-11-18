#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class Tweener; }

#define OEDGJAMMOIB__CTOR_OFFSET UNITYSDK_OFFSET(0x10060F30)

inline static constexpr unsigned int OEDGJAMMOIB_TypeDefinitionIndex = 79401;

class OEDGJAMMOIB : public ::System::Object
{
public:
	::DG::Tweening::Tweener* POHLELCDNPA; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18
	::System::Single BOGPAHGJOJK; // 0x1C
	::System::Boolean IODCONPOAFO; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 KFJBOALBCPD; // 0x24
	::UnityEngine::Vector2 OHOGDOMNHNK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDGJAMMOIB__CTOR_OFFSET))(this);
	}
};
