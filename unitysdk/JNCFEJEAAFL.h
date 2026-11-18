#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPIGJJKLDDK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JNCFEJEAAFL_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x13C3AFB0)
#define JNCFEJEAAFL__CTOR_OFFSET UNITYSDK_OFFSET(0x13C3AFA0)

inline static constexpr unsigned int JNCFEJEAAFL_TypeDefinitionIndex = 83825;

class JNCFEJEAAFL : public ::System::Object
{
public:
	::System::Action* OICINACGNKE; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* KCKAOICGLCC; // 0x18
	::System::Action* IFCBDACHPIM; // 0x20
	::System::Action_1<::System::UInt32>* ACOJLFCCHPM; // 0x28
	::System::Boolean MJNEGGDDDNE; // 0x30
	::System::Boolean EOGFJMIGPJH; // 0x31
	::System::Boolean BPOAGLNLJML; // 0x32
	::System::Byte _padding0[0x1];
	::System::Nullable_1<::System::UInt32> CFBGEOHHKJK; // 0x34
	::System::UInt32 LKLNKAAEACM; // 0x3C
	::IPIGJJKLDDK FOBNEAMALAA; // 0x40
	::System::UInt32 LPPNIFOPCFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCFEJEAAFL__CTOR_OFFSET))(this);
	}

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCFEJEAAFL_OAJEIDFGCII_OFFSET))(this);
	}
};
