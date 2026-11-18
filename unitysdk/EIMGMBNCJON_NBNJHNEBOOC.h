#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AAPCFDDBMJP;
class EIMGMBNCJON;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define EIMGMBNCJON_NBNJHNEBOOC_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x1FAA6700)
#define EIMGMBNCJON_NBNJHNEBOOC_IBMMBDFFMPF_OFFSET UNITYSDK_OFFSET(0x1FAA67A0)
#define EIMGMBNCJON_NBNJHNEBOOC_PHPAEIDFNCC_OFFSET UNITYSDK_OFFSET(0x1FAA67C0)
#define EIMGMBNCJON_NBNJHNEBOOC__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAA66F0)

inline static constexpr unsigned int EIMGMBNCJON_NBNJHNEBOOC_TypeDefinitionIndex = 18075;

class EIMGMBNCJON_NBNJHNEBOOC : public ::System::Object
{
public:
	::EIMGMBNCJON* GKHOPHJFMJB; // 0x10

	::System::Void _ctor(::EIMGMBNCJON* GKHOPHJFMJB)
	{
		return ((::System::Void(*)(::PVOID, ::EIMGMBNCJON*))((::PBYTE)hIl2Cpp + EIMGMBNCJON_NBNJHNEBOOC__CTOR_OFFSET))(this, GKHOPHJFMJB);
	}

	::AAPCFDDBMJP* GLOAAACBNPP(::System::Int32 HFAFFNLNAJE)
	{
		return ((::AAPCFDDBMJP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EIMGMBNCJON_NBNJHNEBOOC_GLOAAACBNPP_OFFSET))(this, HFAFFNLNAJE);
	}

	::System::Collections::Generic::IList_1<::AAPCFDDBMJP*>* IBMMBDFFMPF()
	{
		return ((::System::Collections::Generic::IList_1<::AAPCFDDBMJP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMGMBNCJON_NBNJHNEBOOC_IBMMBDFFMPF_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::AAPCFDDBMJP*>* PHPAEIDFNCC()
	{
		return ((::System::Collections::Generic::IList_1<::AAPCFDDBMJP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMGMBNCJON_NBNJHNEBOOC_PHPAEIDFNCC_OFFSET))(this);
	}
};
