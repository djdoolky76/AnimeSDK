#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJHEGIPNKHB.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ENIHCNKGHDP__CTOR_OFFSET UNITYSDK_OFFSET(0x12376AC0)

inline static constexpr unsigned int ENIHCNKGHDP_TypeDefinitionIndex = 41806;

class ENIHCNKGHDP : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* GLHPPNDLOIM; // 0x10
	::System::Boolean HMJIJJDAAIK; // 0x18
	::System::Byte _padding0[0x3];
	::FJHEGIPNKHB HPBLEPDCKPO; // 0x1C
	::System::Single GJDBKPEHEKA; // 0x20
	::System::Int32 NFACFCMFNEC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIHCNKGHDP__CTOR_OFFSET))(this);
	}
};
