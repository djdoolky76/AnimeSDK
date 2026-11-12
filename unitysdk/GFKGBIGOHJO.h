#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define GFKGBIGOHJO_CTOR_OFFSET UNITYSDK_OFFSET(0x169355E0)
#define GFKGBIGOHJO_TRIGGER_OFFSET UNITYSDK_OFFSET(0x169355A0)

inline static constexpr unsigned int GFKGBIGOHJO_TypeDefinitionIndex = 68176;

	class GFKGBIGOHJO : public ::System::Object
	{
	public:
		::System::UInt32 AIKAPJELHNK; // 0x10
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + GFKGBIGOHJO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKGBIGOHJO_TRIGGER_OFFSET))(this);
		}

	};
