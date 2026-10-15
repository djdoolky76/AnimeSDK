#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNADGNOONMC;

#define LNLKODEPCLB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB7E2260)
#define LNLKODEPCLB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E2320)

inline static constexpr unsigned int LNLKODEPCLB_TypeDefinitionIndex = 63865;

	class LNLKODEPCLB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLKODEPCLB_CTOR_OFFSET))(this);
		}

		::KNADGNOONMC* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::KNADGNOONMC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNLKODEPCLB_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
