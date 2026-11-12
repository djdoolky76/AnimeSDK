#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define OINEIPPCHIH_CTOR_OFFSET UNITYSDK_OFFSET(0xC798840)
#define OINEIPPCHIH_TRIGGER_OFFSET UNITYSDK_OFFSET(0xC798960)

inline static constexpr unsigned int OINEIPPCHIH_TypeDefinitionIndex = 68166;

	class OINEIPPCHIH : public ::System::Object
	{
	public:
		::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x10
		::System::Boolean MELOJDPIGPD; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 JPKEIFONDCP; // 0x18
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + OINEIPPCHIH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINEIPPCHIH_TRIGGER_OFFSET))(this);
		}

	};
