#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFKNBJMPOOM;

#define IJMJDBOBDOP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1805FA20)
#define IJMJDBOBDOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1805FAA0)

inline static constexpr unsigned int IJMJDBOBDOP_TypeDefinitionIndex = 64039;

	class IJMJDBOBDOP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMJDBOBDOP_CTOR_OFFSET))(this);
		}

		::JFKNBJMPOOM* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::JFKNBJMPOOM*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJMJDBOBDOP_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
