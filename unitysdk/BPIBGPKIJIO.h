#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define BPIBGPKIJIO_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A6070)
#define BPIBGPKIJIO_TRIGGER_OFFSET UNITYSDK_OFFSET(0xC1A60F0)

inline static constexpr unsigned int BPIBGPKIJIO_TypeDefinitionIndex = 66235;

	class BPIBGPKIJIO : public ::System::Object
	{
	public:
		::System::UInt32 NBJOOFCNMFM; // 0x10
		::System::UInt32 IHFNLAGGGNM; // 0x14
		::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x18
		::System::UInt32 NHGPMJAGGCJ; // 0x1C
		::System::UInt32 AIDLKPHEAMD; // 0x20
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + BPIBGPKIJIO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIBGPKIJIO_TRIGGER_OFFSET))(this);
		}

	};
