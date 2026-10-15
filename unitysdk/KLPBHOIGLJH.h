#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define KLPBHOIGLJH_CTOR_OFFSET UNITYSDK_OFFSET(0xB52FB50)
#define KLPBHOIGLJH_TRIGGER_OFFSET UNITYSDK_OFFSET(0xB52FB10)

inline static constexpr unsigned int KLPBHOIGLJH_TypeDefinitionIndex = 66242;

	class KLPBHOIGLJH : public ::System::Object
	{
	public:
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + KLPBHOIGLJH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPBHOIGLJH_TRIGGER_OFFSET))(this);
		}

	};
