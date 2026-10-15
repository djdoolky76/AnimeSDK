#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFKFEBANDA;

#define GCCIAEBCFCH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1595AC40)
#define GCCIAEBCFCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1595ACF0)

inline static constexpr unsigned int GCCIAEBCFCH_TypeDefinitionIndex = 80103;

	class GCCIAEBCFCH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCIAEBCFCH_CTOR_OFFSET))(this);
		}

		::EKFKFEBANDA* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::EKFKFEBANDA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCCIAEBCFCH_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
