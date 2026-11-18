#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NJGANAKAEIB_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AE263E0)
#define NJGANAKAEIB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AE263F0)
#define NJGANAKAEIB_RESET_OFFSET UNITYSDK_OFFSET(0x1AE26460)
#define NJGANAKAEIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE263D0)

inline static constexpr unsigned int NJGANAKAEIB_TypeDefinitionIndex = 57335;

class NJGANAKAEIB : public ::System::Object
{
public:
	::System::Single LMIODDEBANM; // 0x10
	::System::Single NAIDADGNEDI; // 0x14

	::System::Void _ctor(::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJGANAKAEIB__CTOR_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Object* get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGANAKAEIB_GET_CURRENT_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGANAKAEIB_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGANAKAEIB_RESET_OFFSET))(this);
	}
};
