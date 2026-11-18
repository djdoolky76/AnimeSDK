#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define EJOPHIEBHFG_EOLKDPEMDFD_AOBFOKKGLLF_OFFSET UNITYSDK_OFFSET(0x158B6760)
#define EJOPHIEBHFG_EOLKDPEMDFD_GKMMFAKDKFI_OFFSET UNITYSDK_OFFSET(0x158B6770)
#define EJOPHIEBHFG_EOLKDPEMDFD__CTOR_OFFSET UNITYSDK_OFFSET(0x158B6750)

inline static constexpr unsigned int EJOPHIEBHFG_EOLKDPEMDFD_TypeDefinitionIndex = 76959;

class EJOPHIEBHFG_EOLKDPEMDFD : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::System::Int32>* NBPGONFNDJD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOPHIEBHFG_EOLKDPEMDFD__CTOR_OFFSET))(this);
	}

	::System::Boolean AOBFOKKGLLF(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJOPHIEBHFG_EOLKDPEMDFD_AOBFOKKGLLF_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Boolean GKMMFAKDKFI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJOPHIEBHFG_EOLKDPEMDFD_GKMMFAKDKFI_OFFSET))(this, MGMDLMBEDJF);
	}
};
