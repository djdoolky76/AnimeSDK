#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKAAHMNPJPA.h"
class KCJNGDLDKFG;
namespace System { class Action; }

#define FKEGHFCBHIM_CTOR_OFFSET UNITYSDK_OFFSET(0x157EEA00)
#define FKEGHFCBHIM_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x157EEA10)

	class FKEGHFCBHIM : public ::CKAAHMNPJPA
	{
	public:
		::System::UInt32 ALGDMKOKEMO; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::KCJNGDLDKFG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::KCJNGDLDKFG*))((::PBYTE)hIl2Cpp + FKEGHFCBHIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DMKJAJLNEBK(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FKEGHFCBHIM_DMKJAJLNEBK_OFFSET))(this, a1);
		}

	};
