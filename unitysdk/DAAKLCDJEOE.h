#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define DAAKLCDJEOE_CTOR_OFFSET UNITYSDK_OFFSET(0xDFB06B0)
#define DAAKLCDJEOE_TRIGGER_OFFSET UNITYSDK_OFFSET(0xDFB0740)

inline static constexpr unsigned int DAAKLCDJEOE_TypeDefinitionIndex = 66237;

	class DAAKLCDJEOE : public ::System::Object
	{
	public:
		::System::UInt32 AIDLKPHEAMD; // 0x10
		::System::UInt32 NHGPMJAGGCJ; // 0x14
		::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x18
		::System::UInt32 NBJOOFCNMFM; // 0x1C
		::System::UInt32 IHFNLAGGGNM; // 0x20
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + DAAKLCDJEOE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAKLCDJEOE_TRIGGER_OFFSET))(this);
		}

	};
