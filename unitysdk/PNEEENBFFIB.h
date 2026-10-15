#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNEEENBFFIB_CTOR_OFFSET UNITYSDK_OFFSET(0xC32DD60)
#define PNEEENBFFIB_MEPAOJIBLED_OFFSET UNITYSDK_OFFSET(0xC32DA60)
#define PNEEENBFFIB_NHBPDCJIAPI_OFFSET UNITYSDK_OFFSET(0xC32D760)

inline static constexpr unsigned int PNEEENBFFIB_TypeDefinitionIndex = 62409;

	class PNEEENBFFIB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::Client::ScheduleTask*>* IFPFIFOFAMB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::Client::ScheduleTask*>* LGAKKMDBELN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEEENBFFIB_CTOR_OFFSET))(this);
		}

		::System::Void NHBPDCJIAPI(::RPG::Client::ScheduleData* a1, ::System::Action_1<::RPG::Client::ScheduleData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::Action_1<::RPG::Client::ScheduleData*>*))((::PBYTE)hIl2Cpp + PNEEENBFFIB_NHBPDCJIAPI_OFFSET))(this, a1, a2);
		}

		::System::Void MEPAOJIBLED(::RPG::Client::ScheduleData* a1, ::System::Action_1<::RPG::Client::ScheduleData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::Action_1<::RPG::Client::ScheduleData*>*))((::PBYTE)hIl2Cpp + PNEEENBFFIB_MEPAOJIBLED_OFFSET))(this, a1, a2);
		}

	};
