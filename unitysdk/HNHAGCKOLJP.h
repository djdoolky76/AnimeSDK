#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HNHAGCKOLJP_CTOR_OFFSET UNITYSDK_OFFSET(0x15D93D50)
#define HNHAGCKOLJP_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x15D93950)

	class HNHAGCKOLJP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHAGCKOLJP_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHAGCKOLJP_JJNFOPNOPBF_OFFSET))(this);
		}

	};
