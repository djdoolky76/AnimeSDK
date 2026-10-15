#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define ICJIHJNAIKG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E42F50)
#define ICJIHJNAIKG_EKBLGBCCLIC_OFFSET UNITYSDK_OFFSET(0x15E42F60)

inline static constexpr unsigned int ICJIHJNAIKG_TypeDefinitionIndex = 49272;

	class ICJIHJNAIKG : public ::System::Object
	{
	public:
		::System::Action* JKBNNHCAFMG; // 0x10
		::System::Int32 DNMOKEDMNGD; // 0x18
		::System::Int32 JLKLHLAPFMA; // 0x1C
		::System::Void _ctor(::System::Int32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + ICJIHJNAIKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean EKBLGBCCLIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJIHJNAIKG_EKBLGBCCLIC_OFFSET))(this);
		}

	};
