#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOCCBMLAELL;

#define HLONMANFCJE_CTOR_OFFSET UNITYSDK_OFFSET(0x15D75BD0)

	class HLONMANFCJE : public ::System::Object
	{
	public:
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x10
		::System::Void _ctor(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + HLONMANFCJE_CTOR_OFFSET))(this, a1);
		}

	};
