#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLJFIFKJCCE;
namespace RPG::Client { class ScheduleModule; }

#define CLJFIFKJCCE_CLEBKDPHHKI_OFFSET UNITYSDK_OFFSET(0xD7862C0)
#define CLJFIFKJCCE_CTOR_OFFSET UNITYSDK_OFFSET(0xD7863A0)
#define CLJFIFKJCCE_DBHIKLDHKBP_OFFSET UNITYSDK_OFFSET(0xD786160)

inline static constexpr unsigned int CLJFIFKJCCE_TypeDefinitionIndex = 67900;

	class CLJFIFKJCCE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJFIFKJCCE_CTOR_OFFSET))(this);
		}

		static ::CLJFIFKJCCE* DBHIKLDHKBP(::RPG::Client::ScheduleModule* a1, ::System::UInt32 a2)
		{
			return ((::CLJFIFKJCCE*(*)(::RPG::Client::ScheduleModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLJFIFKJCCE_DBHIKLDHKBP_OFFSET))(a1, a2);
		}

		static ::CLJFIFKJCCE* CLEBKDPHHKI(::RPG::Client::ScheduleModule* a1, ::System::UInt32 a2)
		{
			return ((::CLJFIFKJCCE*(*)(::RPG::Client::ScheduleModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLJFIFKJCCE_CLEBKDPHHKI_OFFSET))(a1, a2);
		}

	};
