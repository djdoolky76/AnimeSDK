#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GIGFDLPMNND;

#define CNNHOHLFFBN_ALEDFNHNAFC_NLOGIEOKJBB_OFFSET UNITYSDK_OFFSET(0x1A1C1710)
#define CNNHOHLFFBN_ALEDFNHNAFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C1700)

inline static constexpr unsigned int CNNHOHLFFBN_ALEDFNHNAFC_TypeDefinitionIndex = 39244;

class CNNHOHLFFBN_ALEDFNHNAFC : public ::System::Object
{
public:
	::GIGFDLPMNND* NLNNFINONOI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNHOHLFFBN_ALEDFNHNAFC__CTOR_OFFSET))(this);
	}

	::System::Void NLOGIEOKJBB(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNNHOHLFFBN_ALEDFNHNAFC_NLOGIEOKJBB_OFFSET))(this, NJNCGJLHLKC);
	}
};
