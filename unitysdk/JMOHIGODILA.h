#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLBHACNKKFC;

#define JMOHIGODILA_CTOR_OFFSET UNITYSDK_OFFSET(0xB26DA30)
#define JMOHIGODILA_GET_NOTIFY_OFFSET UNITYSDK_OFFSET(0xB26DA20)

inline static constexpr unsigned int JMOHIGODILA_TypeDefinitionIndex = 76057;

	class JMOHIGODILA : public ::System::Object
	{
	public:
		::BLBHACNKKFC* _Notify_k__BackingField; // 0x10
		::System::Void _ctor(::BLBHACNKKFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLBHACNKKFC*))((::PBYTE)hIl2Cpp + JMOHIGODILA_CTOR_OFFSET))(this, a1);
		}

		::BLBHACNKKFC* get_Notify()
		{
			return ((::BLBHACNKKFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOHIGODILA_GET_NOTIFY_OFFSET))(this);
		}

	};
