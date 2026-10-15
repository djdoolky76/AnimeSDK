#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OIPMNNAHIFP.h"
class PEDNMPONAAO;

#define OFAGKOLPCFP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBE39F00)
#define OFAGKOLPCFP_CTOR_OFFSET UNITYSDK_OFFSET(0xBE39FE0)

	class OFAGKOLPCFP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAGKOLPCFP_CTOR_OFFSET))(this);
		}

		::PEDNMPONAAO* BPLPBPMEODA(::OIPMNNAHIFP a1)
		{
			return ((::PEDNMPONAAO*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + OFAGKOLPCFP_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
