#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLJFIFKJCCE.h"
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleModule; }

#define CLJFIFKJCCE_GEFOFFDJPOB_CTOR_OFFSET UNITYSDK_OFFSET(0xD786350)
#define CLJFIFKJCCE_GEFOFFDJPOB_DCKGOAIJEFP_OFFSET UNITYSDK_OFFSET(0xD7863B0)

inline static constexpr unsigned int CLJFIFKJCCE_GEFOFFDJPOB_TypeDefinitionIndex = 67902;

	class CLJFIFKJCCE_GEFOFFDJPOB : public ::CLJFIFKJCCE
	{
	public:
		::RPG::Client::ScheduleModule* DHPKGNANJED; // 0x10
		::System::UInt32 IAADOLHKODN; // 0x18
		::System::Void _ctor(::RPG::Client::ScheduleModule* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLJFIFKJCCE_GEFOFFDJPOB_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ScheduleData* DCKGOAIJEFP()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJFIFKJCCE_GEFOFFDJPOB_DCKGOAIJEFP_OFFSET))(this);
		}

	};
