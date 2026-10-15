#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAKNHIMMBOM;

#define JDKEJJBIGHO_COMPARE_OFFSET UNITYSDK_OFFSET(0x1CB8FEF0)
#define JDKEJJBIGHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8FF90)

	class JDKEJJBIGHO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKEJJBIGHO_CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::CAKNHIMMBOM* a1, ::CAKNHIMMBOM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CAKNHIMMBOM*, ::CAKNHIMMBOM*))((::PBYTE)hIl2Cpp + JDKEJJBIGHO_COMPARE_OFFSET))(this, a1, a2);
		}

	};
