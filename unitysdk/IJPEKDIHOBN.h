#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IJPEKDIHOBN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x13811260)
#define IJPEKDIHOBN__CTOR_OFFSET UNITYSDK_OFFSET(0x13811240)

inline static constexpr unsigned int IJPEKDIHOBN_TypeDefinitionIndex = 62987;

class IJPEKDIHOBN : public ::System::Object
{
public:
	::System::Single FNIOPKPHDEH; // 0x10
	::System::Single DDGJHADLIGG; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPEKDIHOBN__CTOR_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJPEKDIHOBN_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}
};
