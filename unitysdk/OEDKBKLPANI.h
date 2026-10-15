#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define OEDKBKLPANI_CTOR_OFFSET UNITYSDK_OFFSET(0xBE1EE60)
#define OEDKBKLPANI_EIMIIHEDKFM_OFFSET UNITYSDK_OFFSET(0xBE1EEF0)
#define OEDKBKLPANI_TRIGGER_OFFSET UNITYSDK_OFFSET(0xBE1EDC0)

inline static constexpr unsigned int OEDKBKLPANI_TypeDefinitionIndex = 66226;

	class OEDKBKLPANI : public ::System::Object
	{
	public:
		::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x10
		::System::UInt32 AIKAPJELHNK; // 0x14
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + OEDKBKLPANI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDKBKLPANI_TRIGGER_OFFSET))(this);
		}

		::System::Void EIMIIHEDKFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEDKBKLPANI_EIMIIHEDKFM_OFFSET))(this, a1);
		}

	};
