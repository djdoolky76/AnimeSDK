#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define OKDCIDOMKPL_CTOR_OFFSET UNITYSDK_OFFSET(0xBECC1F0)
#define OKDCIDOMKPL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBECC250)
#define OKDCIDOMKPL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBECC200)

inline static constexpr unsigned int OKDCIDOMKPL_TypeDefinitionIndex = 56631;

	class OKDCIDOMKPL : public ::System::Object
	{
	public:
		::System::UInt32 DOCIPOEABOM; // 0x10
		::System::Boolean MAAKDJAOJGJ; // 0x14
		::System::Boolean EEOIILCKPNH; // 0x15
		::System::Byte _padding0[0x2];
		::RPG::GameCore::AttackDamageType HPADLBCEKOG; // 0x18
		::System::UInt32 GNOCBLOMLAC; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OKDCIDOMKPL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDCIDOMKPL_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDCIDOMKPL_GETEVENTTYPE_OFFSET))(this);
		}

	};
