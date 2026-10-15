#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define IEGHKAIMCAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF9C60)
#define IEGHKAIMCAJ_TRIGGER_OFFSET UNITYSDK_OFFSET(0x15EF9C20)

inline static constexpr unsigned int IEGHKAIMCAJ_TypeDefinitionIndex = 66243;

	class IEGHKAIMCAJ : public ::System::Object
	{
	public:
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + IEGHKAIMCAJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGHKAIMCAJ_TRIGGER_OFFSET))(this);
		}

	};
