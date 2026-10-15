#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKAAHMNPJPA.h"
class KCJNGDLDKFG;
namespace System { class Action; }

#define IBBHJCHGKLC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E29F90)
#define IBBHJCHGKLC_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x15E29FA0)

	class IBBHJCHGKLC : public ::CKAAHMNPJPA
	{
	public:
		::System::UInt32 PJIJAPMPJHA; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::KCJNGDLDKFG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::KCJNGDLDKFG*))((::PBYTE)hIl2Cpp + IBBHJCHGKLC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DMKJAJLNEBK(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IBBHJCHGKLC_DMKJAJLNEBK_OFFSET))(this, a1);
		}

	};
