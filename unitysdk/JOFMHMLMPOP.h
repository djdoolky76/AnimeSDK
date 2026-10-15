#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JOFMHMLMPOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7088B0)

	class JOFMHMLMPOP : public ::System::Object
	{
	public:
		::System::UInt32 JCKBFHAANHB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFMHMLMPOP_CTOR_OFFSET))(this);
		}

	};
