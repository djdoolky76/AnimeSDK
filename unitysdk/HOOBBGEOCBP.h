#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PFFCGAFKDPL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOOBBGEOCBP_LHCLHEMNFOA_OFFSET UNITYSDK_OFFSET(0x153883A0)
#define HOOBBGEOCBP_OPOHDOPIFOC_OFFSET UNITYSDK_OFFSET(0x15388810)
#define HOOBBGEOCBP_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x15388480)
#define HOOBBGEOCBP__CTOR_OFFSET UNITYSDK_OFFSET(0x153882D0)

inline static constexpr unsigned int HOOBBGEOCBP_TypeDefinitionIndex = 88422;

class HOOBBGEOCBP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::PFFCGAFKDPL*>* NBINNDDMCCO; // 0x10
	::System::Collections::Generic::List_1<::PFFCGAFKDPL*>* GNACGPKPMID; // 0x18
	::System::Boolean EAMEGKPPFMA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOBBGEOCBP__CTOR_OFFSET))(this);
	}

	::System::Void LHCLHEMNFOA(::PFFCGAFKDPL* LENPCLAGPGL)
	{
		return ((::System::Void(*)(::PVOID, ::PFFCGAFKDPL*))((::PBYTE)hIl2Cpp + HOOBBGEOCBP_LHCLHEMNFOA_OFFSET))(this, LENPCLAGPGL);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOOBBGEOCBP_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void OPOHDOPIFOC(::PFFCGAFKDPL* LENPCLAGPGL)
	{
		return ((::System::Void(*)(::PVOID, ::PFFCGAFKDPL*))((::PBYTE)hIl2Cpp + HOOBBGEOCBP_OPOHDOPIFOC_OFFSET))(this, LENPCLAGPGL);
	}
};
