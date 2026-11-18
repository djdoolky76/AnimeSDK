#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FIBCHCLKAAA;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GENHOCEIFEE_EMNMGDGLPFE_JHMBIEGADOD_OFFSET UNITYSDK_OFFSET(0x16609A90)
#define GENHOCEIFEE_EMNMGDGLPFE_OFKBAMJIKCH_OFFSET UNITYSDK_OFFSET(0x16609B00)
#define GENHOCEIFEE_EMNMGDGLPFE__CTOR_OFFSET UNITYSDK_OFFSET(0x16609A80)

inline static constexpr unsigned int GENHOCEIFEE_EMNMGDGLPFE_TypeDefinitionIndex = 52658;

class GENHOCEIFEE_EMNMGDGLPFE : public ::System::Object
{
public:
	::System::Action_1<::FIBCHCLKAAA*>* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHOCEIFEE_EMNMGDGLPFE__CTOR_OFFSET))(this);
	}

	::System::Void JHMBIEGADOD(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_EMNMGDGLPFE_JHMBIEGADOD_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void OFKBAMJIKCH(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_EMNMGDGLPFE_OFKBAMJIKCH_OFFSET))(this, BHDNBGLCNOM);
	}
};
