#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAPEMBCNNIG;

#define BBIJJEDBMDL_ABNMKAPKMGF_OFFSET UNITYSDK_OFFSET(0x15E8D840)

	class BBIJJEDBMDL : public ::System::Object
	{
	public:
		static ::System::Boolean ABNMKAPKMGF(::KAPEMBCNNIG* a1, ::KAPEMBCNNIG* a2)
		{
			return ((::System::Boolean(*)(::KAPEMBCNNIG*, ::KAPEMBCNNIG*))((::PBYTE)hIl2Cpp + BBIJJEDBMDL_ABNMKAPKMGF_OFFSET))(a1, a2);
		}

	};
