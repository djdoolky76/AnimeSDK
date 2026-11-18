#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class APLLGBDEKKA;

#define APLLGBDEKKA_GEIJDDMOLGD_AJPHKFDCHON_OFFSET UNITYSDK_OFFSET(0x11BE2BA0)
#define APLLGBDEKKA_GEIJDDMOLGD__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE2B90)

inline static constexpr unsigned int APLLGBDEKKA_GEIJDDMOLGD_TypeDefinitionIndex = 67123;

class APLLGBDEKKA_GEIJDDMOLGD : public ::System::Object
{
public:
	::APLLGBDEKKA* KLHPEBKNIFB; // 0x10
	::System::Int32 EKPCDDMDLMO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLLGBDEKKA_GEIJDDMOLGD__CTOR_OFFSET))(this);
	}

	::System::Void AJPHKFDCHON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLLGBDEKKA_GEIJDDMOLGD_AJPHKFDCHON_OFFSET))(this);
	}
};
