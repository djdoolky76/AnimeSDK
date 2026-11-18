#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class EGCJOPJKNLD;
namespace System { class Action; }

#define EGCJOPJKNLD_IGJNGCGAALL_OKHDBGEAEFM_OFFSET UNITYSDK_OFFSET(0x17108580)
#define EGCJOPJKNLD_IGJNGCGAALL__CTOR_OFFSET UNITYSDK_OFFSET(0x17108570)

inline static constexpr unsigned int EGCJOPJKNLD_IGJNGCGAALL_TypeDefinitionIndex = 75248;

class EGCJOPJKNLD_IGJNGCGAALL : public ::System::Object
{
public:
	::System::Action* GJBHEJGENMI; // 0x10
	::EGCJOPJKNLD* KLHPEBKNIFB; // 0x18
	::System::Nullable_1<::System::Int32> AELLPLBJELA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_IGJNGCGAALL__CTOR_OFFSET))(this);
	}

	::System::Void OKHDBGEAEFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_IGJNGCGAALL_OKHDBGEAEFM_OFFSET))(this);
	}
};
