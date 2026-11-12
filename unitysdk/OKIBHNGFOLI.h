#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPKHHHPKFBN;
class OBJANKHLNGO;
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Action; }

#define OKIBHNGFOLI_CTOR_OFFSET UNITYSDK_OFFSET(0xC7D46E0)
#define OKIBHNGFOLI_DIAHEFHBIEH_OFFSET UNITYSDK_OFFSET(0xC7D4BE0)
#define OKIBHNGFOLI_DJEOAAEGLDL_OFFSET UNITYSDK_OFFSET(0xC7D46F0)
#define OKIBHNGFOLI_GLHOMJKLKCB_OFFSET UNITYSDK_OFFSET(0xC7D47D0)
#define OKIBHNGFOLI_LNKCBEDBABA_OFFSET UNITYSDK_OFFSET(0xC7D4F10)
#define OKIBHNGFOLI_MGJHLJEFMNI_OFFSET UNITYSDK_OFFSET(0xC7D4FF0)
#define OKIBHNGFOLI__TRYREGISTERACTIVITYCLOSEMESSAGE_B__3_0_OFFSET UNITYSDK_OFFSET(0xC7D5060)

inline static constexpr unsigned int OKIBHNGFOLI_TypeDefinitionIndex = 84982;

	class OKIBHNGFOLI : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::RPG::Client::ScheduleTask* NAKELPEMAMH; // 0x18
		::System::Boolean FEFDBMKGABN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKIBHNGFOLI_CTOR_OFFSET))(this);
		}

		::System::Boolean DJEOAAEGLDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKIBHNGFOLI_DJEOAAEGLDL_OFFSET))(this);
		}

		::System::Void GLHOMJKLKCB(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OKIBHNGFOLI_GLHOMJKLKCB_OFFSET))(this, a1);
		}

		::System::Void DIAHEFHBIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKIBHNGFOLI_DIAHEFHBIEH_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* LNKCBEDBABA(::CPKHHHPKFBN* a1)
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID, ::CPKHHHPKFBN*))((::PBYTE)hIl2Cpp + OKIBHNGFOLI_LNKCBEDBABA_OFFSET))(this, a1);
		}

		::System::Boolean MGJHLJEFMNI(::CPKHHHPKFBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPKHHHPKFBN*))((::PBYTE)hIl2Cpp + OKIBHNGFOLI_MGJHLJEFMNI_OFFSET))(this, a1);
		}

		::System::Void _TryRegisterActivityCloseMessage_b__3_0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + OKIBHNGFOLI__TRYREGISTERACTIVITYCLOSEMESSAGE_B__3_0_OFFSET))(this, a1);
		}

	};
