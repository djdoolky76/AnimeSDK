#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPPLDKIOIBD.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJEHBIBGHOP_IIAAMALOPFN_OFFSET UNITYSDK_OFFSET(0x19E278A0)
#define HJEHBIBGHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x19E27950)

inline static constexpr unsigned int HJEHBIBGHOP_TypeDefinitionIndex = 76164;

class HJEHBIBGHOP : public ::HPPLDKIOIBD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEHBIBGHOP__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* IIAAMALOPFN()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEHBIBGHOP_IIAAMALOPFN_OFFSET))(this);
	}
};
