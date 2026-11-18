#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EKGNKPJENPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1426C500)

inline static constexpr unsigned int EKGNKPJENPL_TypeDefinitionIndex = 92434;

class EKGNKPJENPL : public ::System::Object
{
public:
	// static const ::System::Int32 EDKIGLOLOPL = 0x1; // 0x0
	// static const ::System::Int32 PJJPGCFLDAO = 0x2; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGNKPJENPL__CTOR_OFFSET))(this);
	}
};
