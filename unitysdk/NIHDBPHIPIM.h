#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOEIAGPENLB;
class MKMEPOHGPMN;
class OBJANKHLNGO;

#define NIHDBPHIPIM_CTOR_OFFSET UNITYSDK_OFFSET(0xBBEBA10)
#define NIHDBPHIPIM_JAHDBABHGJM_OFFSET UNITYSDK_OFFSET(0xBBEBB80)
#define NIHDBPHIPIM_START_OFFSET UNITYSDK_OFFSET(0xBBEBA90)
#define NIHDBPHIPIM_STOP_OFFSET UNITYSDK_OFFSET(0xBBEBB20)

	class NIHDBPHIPIM : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::BOEIAGPENLB* LBNAGLIGKIO; // 0x18
		::System::Void _ctor(::BOEIAGPENLB* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOEIAGPENLB*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + NIHDBPHIPIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHDBPHIPIM_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHDBPHIPIM_STOP_OFFSET))(this);
		}

		::System::Void JAHDBABHGJM(::MKMEPOHGPMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKMEPOHGPMN*))((::PBYTE)hIl2Cpp + NIHDBPHIPIM_JAHDBABHGJM_OFFSET))(this, a1);
		}

	};
