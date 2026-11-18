#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJCHCMEFPIF.h"
#include "unitysdk/System/Object.h"

class EDALIFLELHB;
class LKMLFIAKFOO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define LKMLFIAKFOO_OELJMCIBLDO_FKGEJMKPKBD_OFFSET UNITYSDK_OFFSET(0xD437920)
#define LKMLFIAKFOO_OELJMCIBLDO__CTOR_OFFSET UNITYSDK_OFFSET(0xD437910)

inline static constexpr unsigned int LKMLFIAKFOO_OELJMCIBLDO_TypeDefinitionIndex = 43589;

class LKMLFIAKFOO_OELJMCIBLDO : public ::System::Object
{
public:
	::LKMLFIAKFOO* KLHPEBKNIFB; // 0x10
	::System::Action* BBEIEJKNFCP; // 0x18
	::System::Collections::Generic::IEnumerable_1<::DJCHCMEFPIF>* LJHOPIIGOHI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_OELJMCIBLDO__CTOR_OFFSET))(this);
	}

	::System::Void FKGEJMKPKBD(::EDALIFLELHB* DMEJFNOLKIF)
	{
		return ((::System::Void(*)(::PVOID, ::EDALIFLELHB*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_OELJMCIBLDO_FKGEJMKPKBD_OFFSET))(this, DMEJFNOLKIF);
	}
};
