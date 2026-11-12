#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFKNBJMPOOM;

#define IJMJDBOBDOP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x174418D0)
#define IJMJDBOBDOP_CTOR_OFFSET UNITYSDK_OFFSET(0x17441950)

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
