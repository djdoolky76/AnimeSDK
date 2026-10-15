#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define LEOAIFECBCI_CTOR_OFFSET UNITYSDK_OFFSET(0xB6570F0)
#define LEOAIFECBCI_TRIGGER_OFFSET UNITYSDK_OFFSET(0xB657050)

inline static constexpr unsigned int LEOAIFECBCI_TypeDefinitionIndex = 66248;

	class LEOAIFECBCI : public ::System::Object
	{
	public:
		::System::UInt32 DLCCLBGBAFJ; // 0x10
		// static const ::System::String* NNKPLACOBCD; // 0x0
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + LEOAIFECBCI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEOAIFECBCI_TRIGGER_OFFSET))(this);
		}

	};
