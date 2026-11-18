#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define DONGCBIGJJL_ENCBONEEGJP__CTOR_OFFSET UNITYSDK_OFFSET(0x148BE300)

inline static constexpr unsigned int DONGCBIGJJL_ENCBONEEGJP_TypeDefinitionIndex = 70482;

class DONGCBIGJJL_ENCBONEEGJP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* AFDCBAMGGGL; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* IDMIMLNBCAH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_ENCBONEEGJP__CTOR_OFFSET))(this);
	}
};
