#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define GDOMHLOBEFB_CTOR_OFFSET UNITYSDK_OFFSET(0x159BE870)
#define GDOMHLOBEFB_TRIGGER_OFFSET UNITYSDK_OFFSET(0x159BE8F0)

inline static constexpr unsigned int GDOMHLOBEFB_TypeDefinitionIndex = 66239;

	class GDOMHLOBEFB : public ::System::Object
	{
	public:
		::System::UInt32 GKDLFAEOGIN; // 0x10
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + GDOMHLOBEFB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOMHLOBEFB_TRIGGER_OFFSET))(this);
		}

	};
