#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPGTools::Timeline { class LifeCycleEventArgument; }
namespace System { class String; }

#define OLBKHCNLBGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBEFFF50)
#define OLBKHCNLBGJ_FNHGCHHJJLL_OFFSET UNITYSDK_OFFSET(0xBEFFDD0)
#define OLBKHCNLBGJ_KHIDIKCNPFK_OFFSET UNITYSDK_OFFSET(0xBEFFCB0)

	class OLBKHCNLBGJ : public ::System::Object
	{
	public:
		::System::String* KNAPCKONKFE; // 0x10
		::UnityEngine::Color AALKAGBOONM; // 0x18
		::UnityEngine::Color ILBNGMLDGJG; // 0x28
		::System::Single DIJAPAFKAIC; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKHCNLBGJ_CTOR_OFFSET))(this);
		}

		::System::Void KHIDIKCNPFK(::RPGTools::Timeline::LifeCycleEventArgument* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::LifeCycleEventArgument*))((::PBYTE)hIl2Cpp + OLBKHCNLBGJ_KHIDIKCNPFK_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::LifeCycleEventArgument* FNHGCHHJJLL()
		{
			return ((::RPGTools::Timeline::LifeCycleEventArgument*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKHCNLBGJ_FNHGCHHJJLL_OFFSET))(this);
		}

	};
