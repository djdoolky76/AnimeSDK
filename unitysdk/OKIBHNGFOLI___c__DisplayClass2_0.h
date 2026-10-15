#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKIBHNGFOLI;
namespace RPG::Client { class ScheduleData; }
namespace System { class Action; }

#define OKIBHNGFOLI___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBEDB5D0)
#define OKIBHNGFOLI___C__DISPLAYCLASS2_0__TRYREGISTERSCHEDULEOPENCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xBEDBAB0)

inline static constexpr unsigned int OKIBHNGFOLI___c__DisplayClass2_0_TypeDefinitionIndex = 82110;

	class OKIBHNGFOLI___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::OKIBHNGFOLI* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKIBHNGFOLI___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _TryRegisterScheduleOpenCallback_b__0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + OKIBHNGFOLI___C__DISPLAYCLASS2_0__TRYREGISTERSCHEDULEOPENCALLBACK_B__0_OFFSET))(this, a1);
		}

	};
