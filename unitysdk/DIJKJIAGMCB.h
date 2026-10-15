#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class HMMHDEKAHEA;

#define DIJKJIAGMCB_CTOR_OFFSET UNITYSDK_OFFSET(0xF20B120)
#define DIJKJIAGMCB_FJBMPHLOABF_OFFSET UNITYSDK_OFFSET(0xF20AFE0)
#define DIJKJIAGMCB_START_OFFSET UNITYSDK_OFFSET(0xF20AEF0)
#define DIJKJIAGMCB_STOP_OFFSET UNITYSDK_OFFSET(0xF20AF90)

	class DIJKJIAGMCB : public ::BHPMNMMGLHI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJKJIAGMCB_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJKJIAGMCB_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJKJIAGMCB_STOP_OFFSET))(this);
		}

		::System::Void FJBMPHLOABF(::System::UInt16 a1, ::HMMHDEKAHEA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::HMMHDEKAHEA*))((::PBYTE)hIl2Cpp + DIJKJIAGMCB_FJBMPHLOABF_OFFSET))(this, a1, a2);
		}

	};
