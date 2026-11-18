#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { class Action; }

#define FBAMLABJMKF_PBODPFENDLH_GBFFDCLLKBD_OFFSET UNITYSDK_OFFSET(0x17137BE0)
#define FBAMLABJMKF_PBODPFENDLH__CTOR_OFFSET UNITYSDK_OFFSET(0x17137BD0)

inline static constexpr unsigned int FBAMLABJMKF_PBODPFENDLH_TypeDefinitionIndex = 78138;

class FBAMLABJMKF_PBODPFENDLH : public ::System::Object
{
public:
	::System::Action* CEANKIHLGOK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_PBODPFENDLH__CTOR_OFFSET))(this);
	}

	::System::Void GBFFDCLLKBD(::DGDNKBFMHME* IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_PBODPFENDLH_GBFFDCLLKBD_OFFSET))(this, IMLLDOHDCNC);
	}
};
