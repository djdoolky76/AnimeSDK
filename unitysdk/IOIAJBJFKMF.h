#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define IOIAJBJFKMF_CTOR_OFFSET UNITYSDK_OFFSET(0x164F4D90)
#define IOIAJBJFKMF_TRIGGER_OFFSET UNITYSDK_OFFSET(0x164F4C40)

inline static constexpr unsigned int IOIAJBJFKMF_TypeDefinitionIndex = 66228;

	class IOIAJBJFKMF : public ::System::Object
	{
	public:
		::System::UInt32 IHHNMMBAAGN; // 0x10
		::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x14
		::System::UInt32 AIKAPJELHNK; // 0x18
		::System::UInt32 HKAHFHHICEN; // 0x1C
		// static const ::System::String* NNKPLACOBCD; // 0x0
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + IOIAJBJFKMF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOIAJBJFKMF_TRIGGER_OFFSET))(this);
		}

	};
