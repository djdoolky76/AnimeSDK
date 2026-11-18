#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
template <typename T> class KLIOMMIOFDC_1;

#define DEBNKJEHNIL_LICOBOMKNCH_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x147C41C0)
#define DEBNKJEHNIL_LICOBOMKNCH__CTOR_OFFSET UNITYSDK_OFFSET(0x147C4360)

inline static constexpr unsigned int DEBNKJEHNIL_LICOBOMKNCH_TypeDefinitionIndex = 40864;

class DEBNKJEHNIL_LICOBOMKNCH : public ::JJEJBPGJPJN
{
public:
	::KLIOMMIOFDC_1<::System::Object*>* LDMGHJGIHHL; // 0x88
	::KLIOMMIOFDC_1<::System::Boolean>* GIODADNGFMH; // 0x90
	::KLIOMMIOFDC_1<::System::Boolean>* IHHPJHJAOBP; // 0x98
	::KLIOMMIOFDC_1<::System::Boolean>* JGAACHKECKG; // 0xA0
	::KLIOMMIOFDC_1<::System::Boolean>* KHHPELFCDCJ; // 0xA8
	::KLIOMMIOFDC_1<::System::Boolean>* HBIBMLKGFFN; // 0xB0
	::KLIOMMIOFDC_1<::System::Boolean>* OPEPBMDIPEL; // 0xB8
	::System::Collections::Generic::Queue_1<::System::Object*>* HHHACGMDKAC; // 0xC0
	::KLIOMMIOFDC_1<::System::Boolean>* DCAJIAECMGD; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBNKJEHNIL_LICOBOMKNCH__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBNKJEHNIL_LICOBOMKNCH_ONCREATEPROPERTY_OFFSET))(this);
	}
};
