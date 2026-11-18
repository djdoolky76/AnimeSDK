#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PKDEEDPGBOD;
class POFIMLGOIGD;
namespace System { template <typename T1, typename T2> class Action_2; }

#define POFIMLGOIGD_MFHMLKDDBDP_MPLAJKOBMGB_OFFSET UNITYSDK_OFFSET(0x1C2C6460)
#define POFIMLGOIGD_MFHMLKDDBDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C6450)

inline static constexpr unsigned int POFIMLGOIGD_MFHMLKDDBDP_TypeDefinitionIndex = 57461;

class POFIMLGOIGD_MFHMLKDDBDP : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::PKDEEDPGBOD*>* MNOAHKLLPCD; // 0x10
	::POFIMLGOIGD* KLHPEBKNIFB; // 0x18
	::System::Boolean KAAMCLPBFOF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_MFHMLKDDBDP__CTOR_OFFSET))(this);
	}

	::System::Void MPLAJKOBMGB(::System::Boolean EBFCACIEKBC, ::PKDEEDPGBOD* KGJGDJMAEIN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::PKDEEDPGBOD*))((::PBYTE)hIl2Cpp + POFIMLGOIGD_MFHMLKDDBDP_MPLAJKOBMGB_OFFSET))(this, EBFCACIEKBC, KGJGDJMAEIN);
	}
};
