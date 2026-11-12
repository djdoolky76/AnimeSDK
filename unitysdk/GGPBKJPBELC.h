#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define GGPBKJPBELC_CTOR_OFFSET UNITYSDK_OFFSET(0x1694CE70)
#define GGPBKJPBELC_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1694CF00)

inline static constexpr unsigned int GGPBKJPBELC_TypeDefinitionIndex = 68177;

	class GGPBKJPBELC : public ::System::Object
	{
	public:
		::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x10
		::System::UInt32 JEGBJPHEHOI; // 0x14
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + GGPBKJPBELC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPBKJPBELC_TRIGGER_OFFSET))(this);
		}

	};
