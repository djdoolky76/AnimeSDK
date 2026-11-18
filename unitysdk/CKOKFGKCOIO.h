#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GDGBPCOGIEN;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CKOKFGKCOIO_CBGECCFCOGH_OFFSET UNITYSDK_OFFSET(0x1EDEDFD0)
#define CKOKFGKCOIO_GBMDPHNJJPD_OFFSET UNITYSDK_OFFSET(0x1EDEDD50)
#define CKOKFGKCOIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDEDD40)

inline static constexpr unsigned int CKOKFGKCOIO_TypeDefinitionIndex = 18733;

class CKOKFGKCOIO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOKFGKCOIO__CTOR_OFFSET))(this);
	}

	::System::Void GBMDPHNJJPD(::GDGBPCOGIEN* JIJFBNLHFGK, ::System::Collections::Generic::IList_1<::GDGBPCOGIEN*>* LMKFGLBHNLE)
	{
		return ((::System::Void(*)(::PVOID, ::GDGBPCOGIEN*, ::System::Collections::Generic::IList_1<::GDGBPCOGIEN*>*))((::PBYTE)hIl2Cpp + CKOKFGKCOIO_GBMDPHNJJPD_OFFSET))(this, JIJFBNLHFGK, LMKFGLBHNLE);
	}

	::System::Void CBGECCFCOGH(::GDGBPCOGIEN* JIJFBNLHFGK, ::System::Collections::Generic::IList_1<::GDGBPCOGIEN*>* LMKFGLBHNLE)
	{
		return ((::System::Void(*)(::PVOID, ::GDGBPCOGIEN*, ::System::Collections::Generic::IList_1<::GDGBPCOGIEN*>*))((::PBYTE)hIl2Cpp + CKOKFGKCOIO_CBGECCFCOGH_OFFSET))(this, JIJFBNLHFGK, LMKFGLBHNLE);
	}
};
