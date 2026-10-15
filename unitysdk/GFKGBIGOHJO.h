#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define GFKGBIGOHJO_CTOR_OFFSET UNITYSDK_OFFSET(0x159FB150)
#define GFKGBIGOHJO_TRIGGER_OFFSET UNITYSDK_OFFSET(0x159FB110)

inline static constexpr unsigned int GFKGBIGOHJO_TypeDefinitionIndex = 66240;

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
