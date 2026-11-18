#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPGNBHLMOKP.h"
#include "unitysdk/System/Object.h"

#define JGAOCMLAJBA__CTOR_OFFSET UNITYSDK_OFFSET(0x15262600)

inline static constexpr unsigned int JGAOCMLAJBA_TypeDefinitionIndex = 54610;

class JGAOCMLAJBA : public ::System::Object
{
public:
	::System::Int32 HKJDHPDOEFL; // 0x10
	::System::Int32 KCAOMPDAPLD; // 0x14
	::System::Int32 APJGHNMKNDK; // 0x18
	::CPGNBHLMOKP GOPMFIGAHAI; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAOCMLAJBA__CTOR_OFFSET))(this);
	}
};
