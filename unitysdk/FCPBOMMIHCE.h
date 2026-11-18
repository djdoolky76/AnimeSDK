#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCNGDMKEFIB.h"

class LGINJIKKBJA;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCPBOMMIHCE_CLBKMDINMCI_OFFSET UNITYSDK_OFFSET(0x169C7380)
#define FCPBOMMIHCE_KBOJMIKJOHD_OFFSET UNITYSDK_OFFSET(0x169C7370)
#define FCPBOMMIHCE__CTOR_OFFSET UNITYSDK_OFFSET(0x169C72E0)

inline static constexpr unsigned int FCPBOMMIHCE_TypeDefinitionIndex = 83859;

class FCPBOMMIHCE : public ::DCNGDMKEFIB
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* CHLPKLKLLJK; // 0x18
	::LGINJIKKBJA* _LENFPLEFJFO_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPBOMMIHCE__CTOR_OFFSET))(this);
	}

	::System::Void KBOJMIKJOHD(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + FCPBOMMIHCE_KBOJMIKJOHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::LGINJIKKBJA* CLBKMDINMCI()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPBOMMIHCE_CLBKMDINMCI_OFFSET))(this);
	}
};
