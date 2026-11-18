#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKLCIHALHPF;
class JPFENOJLJLE;
template <typename T> class DFDEIDBBGHG_1;

#define JPFENOJLJLE_KEGMKCOCGLD_COFALKPKJJB_OFFSET UNITYSDK_OFFSET(0x15B75B20)
#define JPFENOJLJLE_KEGMKCOCGLD_EDGJOJKICHB_OFFSET UNITYSDK_OFFSET(0x15B75C80)
#define JPFENOJLJLE_KEGMKCOCGLD__CTOR_OFFSET UNITYSDK_OFFSET(0x15B75B10)

inline static constexpr unsigned int JPFENOJLJLE_KEGMKCOCGLD_TypeDefinitionIndex = 65633;

class JPFENOJLJLE_KEGMKCOCGLD : public ::System::Object
{
public:
	::JPFENOJLJLE* KLHPEBKNIFB; // 0x10
	::DFDEIDBBGHG_1<::CKLCIHALHPF*>* INMNLFDBHLL; // 0x18
	::DFDEIDBBGHG_1<::System::UInt32>* ONFHPCPMKIP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFENOJLJLE_KEGMKCOCGLD__CTOR_OFFSET))(this);
	}

	::System::Void COFALKPKJJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFENOJLJLE_KEGMKCOCGLD_COFALKPKJJB_OFFSET))(this);
	}

	::System::Void EDGJOJKICHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFENOJLJLE_KEGMKCOCGLD_EDGJOJKICHB_OFFSET))(this);
	}
};
