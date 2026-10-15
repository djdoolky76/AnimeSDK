#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNEEENBFFIB_CTOR_OFFSET UNITYSDK_OFFSET(0xC3356A0)
#define PNEEENBFFIB_MEPAOJIBLED_OFFSET UNITYSDK_OFFSET(0xC335360)
#define PNEEENBFFIB_NHBPDCJIAPI_OFFSET UNITYSDK_OFFSET(0xC335020)

	class PNEEENBFFIB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::Client::ScheduleTask*>* LGAKKMDBELN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::Client::ScheduleTask*>* IFPFIFOFAMB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEEENBFFIB_CTOR_OFFSET))(this);
		}

		::System::Void NHBPDCJIAPI(::RPG::Client::ScheduleData* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::Action*))((::PBYTE)hIl2Cpp + PNEEENBFFIB_NHBPDCJIAPI_OFFSET))(this, a1, a2);
		}

		::System::Void MEPAOJIBLED(::RPG::Client::ScheduleData* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::Action*))((::PBYTE)hIl2Cpp + PNEEENBFFIB_MEPAOJIBLED_OFFSET))(this, a1, a2);
		}

	};
