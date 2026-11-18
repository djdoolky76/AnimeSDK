#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define AELEOHAAEIM__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE1600)

inline static constexpr unsigned int AELEOHAAEIM_TypeDefinitionIndex = 80215;

class AELEOHAAEIM : public ::System::EventArgs
{
public:
	::System::Collections::Generic::List_1<::System::Boolean>* PKKMHIDPDAN; // 0x10
	::System::Boolean DBGOHGGFGIB; // 0x18
	::System::Boolean APJNIHCKPLJ; // 0x19
	::System::Boolean NIPLBCAELIN; // 0x1A
	::System::Boolean CHCBLGEAALG; // 0x1B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELEOHAAEIM__CTOR_OFFSET))(this);
	}
};
