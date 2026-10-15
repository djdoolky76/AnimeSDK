#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define CFKKCDOLGMP_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4A070)
#define CFKKCDOLGMP_TRIGGER_OFFSET UNITYSDK_OFFSET(0xCC4A100)

inline static constexpr unsigned int CFKKCDOLGMP_TypeDefinitionIndex = 66244;

	class CFKKCDOLGMP : public ::System::Object
	{
	public:
		::System::UInt32 AIDLKPHEAMD; // 0x10
		::System::UInt32 NBJOOFCNMFM; // 0x14
		::System::UInt32 NHGPMJAGGCJ; // 0x18
		::System::UInt32 IHFNLAGGGNM; // 0x1C
		::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x20
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CFKKCDOLGMP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKCDOLGMP_TRIGGER_OFFSET))(this);
		}

	};
