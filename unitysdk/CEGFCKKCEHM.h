#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CEGFCKKCEHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DD680)

	class CEGFCKKCEHM : public ::System::Object
	{
	public:
		::System::Boolean CFBHMEKHNBL; // 0x10
		::System::Boolean JPIJBFIMPKM; // 0x11
		::System::Boolean DABEFMAGJLD; // 0x12
		::System::Boolean PGGKKFDNKKL; // 0x13
		::System::Boolean AIBPPOEIHLD; // 0x14
		::System::Boolean INLDKKJGLIG; // 0x15
		::System::Boolean COIIENEOGAE; // 0x16
		::System::Boolean KDMKIHLMOBN; // 0x17
		::System::Boolean IJACLNBDMEN; // 0x18
		::System::Boolean IEAMLFEGOEG; // 0x19
		::System::Boolean ABHOBELFLJC; // 0x1A
		::System::Boolean AKLBONNKHFK; // 0x1B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGFCKKCEHM_CTOR_OFFSET))(this);
		}

	};
