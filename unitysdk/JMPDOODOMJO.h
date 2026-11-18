#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NLNIIPDCABP;
namespace System { template <typename T> class Func_1; }

#define JMPDOODOMJO_IAMINDLMNBC_OFFSET UNITYSDK_OFFSET(0x152AFBE0)
#define JMPDOODOMJO_JLAONGEDAKK_OFFSET UNITYSDK_OFFSET(0x152AFBD0)
#define JMPDOODOMJO__CTOR_OFFSET UNITYSDK_OFFSET(0x152AFBC0)

inline static constexpr unsigned int JMPDOODOMJO_TypeDefinitionIndex = 49503;

class JMPDOODOMJO : public ::System::Object
{
public:
	::System::Func_1<::NLNIIPDCABP*>* _BLPLOCAENJC_k__BackingField; // 0x10

	::System::Void _ctor(::System::Func_1<::NLNIIPDCABP*>* NCNEKPIDEIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::NLNIIPDCABP*>*))((::PBYTE)hIl2Cpp + JMPDOODOMJO__CTOR_OFFSET))(this, NCNEKPIDEIJ);
	}

	::System::Void JLAONGEDAKK(::System::Func_1<::NLNIIPDCABP*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::NLNIIPDCABP*>*))((::PBYTE)hIl2Cpp + JMPDOODOMJO_JLAONGEDAKK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Func_1<::NLNIIPDCABP*>* IAMINDLMNBC()
	{
		return ((::System::Func_1<::NLNIIPDCABP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPDOODOMJO_IAMINDLMNBC_OFFSET))(this);
	}
};
