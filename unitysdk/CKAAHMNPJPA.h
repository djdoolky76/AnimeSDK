#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCJNGDLDKFG;

#define CKAAHMNPJPA_CTOR_OFFSET UNITYSDK_OFFSET(0xD751C50)
#define CKAAHMNPJPA_GET__FLOWCOORDINATOR_OFFSET UNITYSDK_OFFSET(0xD751C40)

	class CKAAHMNPJPA : public ::System::Object
	{
	public:
		::KCJNGDLDKFG* __FlowCoordinator_k__BackingField; // 0x10
		::System::Void _ctor(::KCJNGDLDKFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCJNGDLDKFG*))((::PBYTE)hIl2Cpp + CKAAHMNPJPA_CTOR_OFFSET))(this, a1);
		}

		::KCJNGDLDKFG* get__FlowCoordinator()
		{
			return ((::KCJNGDLDKFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAAHMNPJPA_GET__FLOWCOORDINATOR_OFFSET))(this);
		}

	};
