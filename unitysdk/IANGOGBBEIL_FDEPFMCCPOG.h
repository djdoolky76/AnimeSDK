#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FFEOMOMFAKP;
class HHBFOPNELHO;

#define IANGOGBBEIL_FDEPFMCCPOG_MFDKJNNLLJM_OFFSET UNITYSDK_OFFSET(0x16A8F200)
#define IANGOGBBEIL_FDEPFMCCPOG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8F1F0)

inline static constexpr unsigned int IANGOGBBEIL_FDEPFMCCPOG_TypeDefinitionIndex = 57489;

class IANGOGBBEIL_FDEPFMCCPOG : public ::System::Object
{
public:
	::HHBFOPNELHO* LHPFMGBDFPN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANGOGBBEIL_FDEPFMCCPOG__CTOR_OFFSET))(this);
	}

	::System::Boolean MFDKJNNLLJM(::FFEOMOMFAKP* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::FFEOMOMFAKP*))((::PBYTE)hIl2Cpp + IANGOGBBEIL_FDEPFMCCPOG_MFDKJNNLLJM_OFFSET))(this, HAAEBCOBKFF);
	}
};
