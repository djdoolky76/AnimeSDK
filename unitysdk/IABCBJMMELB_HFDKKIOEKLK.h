#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIKGHHJKNCE;
class IABCBJMMELB;

#define IABCBJMMELB_HFDKKIOEKLK_JCHPCBLMCCL_OFFSET UNITYSDK_OFFSET(0x1A3897E0)
#define IABCBJMMELB_HFDKKIOEKLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3897D0)

inline static constexpr unsigned int IABCBJMMELB_HFDKKIOEKLK_TypeDefinitionIndex = 79528;

class IABCBJMMELB_HFDKKIOEKLK : public ::System::Object
{
public:
	::IABCBJMMELB* KLHPEBKNIFB; // 0x10
	::System::Single PMNLNNGEIFM; // 0x18
	::System::Single BEKLCLFIDKF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABCBJMMELB_HFDKKIOEKLK__CTOR_OFFSET))(this);
	}

	::System::Boolean JCHPCBLMCCL(::AIKGHHJKNCE* CENDLIKDNJA)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_HFDKKIOEKLK_JCHPCBLMCCL_OFFSET))(this, CENDLIKDNJA);
	}
};
