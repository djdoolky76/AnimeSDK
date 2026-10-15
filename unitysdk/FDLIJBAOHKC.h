#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOADCLKADJC;

#define FDLIJBAOHKC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x156DE150)
#define FDLIJBAOHKC_CTOR_OFFSET UNITYSDK_OFFSET(0x156DE220)

inline static constexpr unsigned int FDLIJBAOHKC_TypeDefinitionIndex = 63864;

	class FDLIJBAOHKC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLIJBAOHKC_CTOR_OFFSET))(this);
		}

		::OOADCLKADJC* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::OOADCLKADJC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDLIJBAOHKC_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
