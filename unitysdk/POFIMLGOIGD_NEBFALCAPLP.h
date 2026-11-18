#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PKDEEDPGBOD;
class POFIMLGOIGD;
namespace System { template <typename T1, typename T2> class Action_2; }

#define POFIMLGOIGD_NEBFALCAPLP_KCGKBINAPLA_OFFSET UNITYSDK_OFFSET(0x119A53A0)
#define POFIMLGOIGD_NEBFALCAPLP__CTOR_OFFSET UNITYSDK_OFFSET(0x119A5390)

inline static constexpr unsigned int POFIMLGOIGD_NEBFALCAPLP_TypeDefinitionIndex = 57470;

class POFIMLGOIGD_NEBFALCAPLP : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::PKDEEDPGBOD*>* BNBLPMFBFHG; // 0x10
	::POFIMLGOIGD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_NEBFALCAPLP__CTOR_OFFSET))(this);
	}

	::System::Void KCGKBINAPLA(::System::Boolean EBFCACIEKBC, ::PKDEEDPGBOD* KNHIFHIKHIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::PKDEEDPGBOD*))((::PBYTE)hIl2Cpp + POFIMLGOIGD_NEBFALCAPLP_KCGKBINAPLA_OFFSET))(this, EBFCACIEKBC, KNHIFHIKHIO);
	}
};
