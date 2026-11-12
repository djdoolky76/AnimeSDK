#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFKFEBANDA;

#define GCCIAEBCFCH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1689B8D0)
#define GCCIAEBCFCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1689B980)

inline static constexpr unsigned int GCCIAEBCFCH_TypeDefinitionIndex = 82881;

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
