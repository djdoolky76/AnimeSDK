#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PFEOJDIJIBM;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PFEOJDIJIBM_BOMIKFJPEPH_ILJOFALAANO_OFFSET UNITYSDK_OFFSET(0x17325400)
#define PFEOJDIJIBM_BOMIKFJPEPH__CTOR_OFFSET UNITYSDK_OFFSET(0x173253F0)

inline static constexpr unsigned int PFEOJDIJIBM_BOMIKFJPEPH_TypeDefinitionIndex = 62741;

class PFEOJDIJIBM_BOMIKFJPEPH : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::System::Single>* CBDKNCFKENJ; // 0x10
	::PFEOJDIJIBM* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFEOJDIJIBM_BOMIKFJPEPH__CTOR_OFFSET))(this);
	}

	::System::Boolean ILJOFALAANO(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFEOJDIJIBM_BOMIKFJPEPH_ILJOFALAANO_OFFSET))(this, MGMDLMBEDJF);
	}
};
