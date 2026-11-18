#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HPILLDFKPPL_IGNPDNAGFHF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16559FC0)
#define HPILLDFKPPL_IGNPDNAGFHF_PLAPCJLGELB_OFFSET UNITYSDK_OFFSET(0x16559F50)
#define HPILLDFKPPL_IGNPDNAGFHF__CTOR_OFFSET UNITYSDK_OFFSET(0x16559F00)

inline static constexpr unsigned int HPILLDFKPPL_IGNPDNAGFHF_TypeDefinitionIndex = 86387;

class HPILLDFKPPL_IGNPDNAGFHF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* FBLDFDHJDKE; // 0x10
	::System::Single HACJFKBLODH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILLDFKPPL_IGNPDNAGFHF__CTOR_OFFSET))(this);
	}

	::System::Boolean PLAPCJLGELB(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPILLDFKPPL_IGNPDNAGFHF_PLAPCJLGELB_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILLDFKPPL_IGNPDNAGFHF_NPOLNFDBOOD_OFFSET))(this);
	}
};
