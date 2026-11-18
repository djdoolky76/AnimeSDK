#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CLPEHLLCADI;
class KLODEKCODDH;

#define EFOMLGDJMBL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xF9C3310)
#define EFOMLGDJMBL__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF9C3280)
#define EFOMLGDJMBL__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C3200)

inline static constexpr unsigned int EFOMLGDJMBL_TypeDefinitionIndex = 55368;

class EFOMLGDJMBL : public ::System::Object
{
public:
	::KLODEKCODDH* JNIDMGEKNCH; // 0x10
	::CLPEHLLCADI* FIPPJCICEBJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOMLGDJMBL__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::CLPEHLLCADI* GNHINLPPLLC, ::KLODEKCODDH* JEFPNJOJBNP)
	{
		return ((::System::Void(*)(::PVOID, ::CLPEHLLCADI*, ::KLODEKCODDH*))((::PBYTE)hIl2Cpp + EFOMLGDJMBL__CTOR_1_OFFSET))(this, GNHINLPPLLC, JEFPNJOJBNP);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOMLGDJMBL_NPOLNFDBOOD_OFFSET))(this);
	}
};
