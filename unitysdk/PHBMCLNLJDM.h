#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAHAIEHANOH.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PHBMCLNLJDM__CTOR_OFFSET UNITYSDK_OFFSET(0x13A93C30)

inline static constexpr unsigned int PHBMCLNLJDM_TypeDefinitionIndex = 40776;

class PHBMCLNLJDM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* PCONBLBCEDF; // 0x10
	::DAHAIEHANOH JLDNMNKIAAE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBMCLNLJDM__CTOR_OFFSET))(this);
	}
};
