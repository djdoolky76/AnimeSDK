#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ObjectHandle.h"

namespace Foundation { template <typename T> class ObjectProxy_1; }

#define BLCOGOOBCIH_PHEIAJKJIPG_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x113EF040)
#define BLCOGOOBCIH_PHEIAJKJIPG_HEPANGBFPOB_OFFSET UNITYSDK_OFFSET(0x113EF0E0)
#define BLCOGOOBCIH_PHEIAJKJIPG_RELEASE_OFFSET UNITYSDK_OFFSET(0x113EEFB0)
#define BLCOGOOBCIH_PHEIAJKJIPG__CTOR_OFFSET UNITYSDK_OFFSET(0x113EF0D0)

inline static constexpr unsigned int BLCOGOOBCIH_PHEIAJKJIPG_TypeDefinitionIndex = 85443;

class BLCOGOOBCIH_PHEIAJKJIPG : public ::System::Object
{
public:
	::Foundation::ObjectProxy_1<::System::Object*>* DKGEMJELJKG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCOGOOBCIH_PHEIAJKJIPG__CTOR_OFFSET))(this);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCOGOOBCIH_PHEIAJKJIPG_RELEASE_OFFSET))(this);
	}

	::Foundation::ObjectHandle get_Handle()
	{
		return ((::Foundation::ObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCOGOOBCIH_PHEIAJKJIPG_GET_HANDLE_OFFSET))(this);
	}

	::System::Void HEPANGBFPOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCOGOOBCIH_PHEIAJKJIPG_HEPANGBFPOB_OFFSET))(this);
	}
};
