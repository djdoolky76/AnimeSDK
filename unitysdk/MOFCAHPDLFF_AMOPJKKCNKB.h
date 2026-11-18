#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/System/Object.h"

class MOFCAHPDLFF;
class MonoUITableScrollV2;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOFCAHPDLFF_AMOPJKKCNKB_FGOLGOKJHIO_OFFSET UNITYSDK_OFFSET(0x177D44A0)
#define MOFCAHPDLFF_AMOPJKKCNKB__CTOR_OFFSET UNITYSDK_OFFSET(0x177D4490)

inline static constexpr unsigned int MOFCAHPDLFF_AMOPJKKCNKB_TypeDefinitionIndex = 68524;

class MOFCAHPDLFF_AMOPJKKCNKB : public ::System::Object
{
public:
	::System::Func_1<::System::Boolean>* AMHGBGMOMLL; // 0x10
	::MonoUITableScrollV2* NLNBPDBCCGM; // 0x18
	::MOFCAHPDLFF* KLHPEBKNIFB; // 0x20
	::System::Collections::Generic::List_1<::GPJMHAAEIKO>* EDPABLNHMNH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFCAHPDLFF_AMOPJKKCNKB__CTOR_OFFSET))(this);
	}

	::System::Boolean FGOLGOKJHIO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFCAHPDLFF_AMOPJKKCNKB_FGOLGOKJHIO_OFFSET))(this);
	}
};
