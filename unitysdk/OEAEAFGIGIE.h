#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
namespace System { class Action; }

#define OEAEAFGIGIE_CTOR_OFFSET UNITYSDK_OFFSET(0xBDF27C0)
#define OEAEAFGIGIE_HPHMJMIANDK_OFFSET UNITYSDK_OFFSET(0xBDF2660)

	class OEAEAFGIGIE : public ::BHPMNMMGLHI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAEAFGIGIE_CTOR_OFFSET))(this);
		}

		::System::Void HPHMJMIANDK(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OEAEAFGIGIE_HPHMJMIANDK_OFFSET))(this, a1);
		}

	};
