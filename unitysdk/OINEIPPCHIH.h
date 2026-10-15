#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define OINEIPPCHIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA24C0)
#define OINEIPPCHIH_TRIGGER_OFFSET UNITYSDK_OFFSET(0xBEA25E0)

	class OINEIPPCHIH : public ::System::Object
	{
	public:
		::System::UInt32 JPKEIFONDCP; // 0x10
		::System::Boolean MELOJDPIGPD; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x18
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + OINEIPPCHIH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINEIPPCHIH_TRIGGER_OFFSET))(this);
		}

	};
