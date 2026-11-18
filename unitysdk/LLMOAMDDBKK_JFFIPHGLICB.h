#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JFNNAFHOBCJ;
class LLMOAMDDBKK;
namespace MoleMole { class NotificationBadgeEx; }

#define LLMOAMDDBKK_JFFIPHGLICB_OEPGIJABDEJ_OFFSET UNITYSDK_OFFSET(0x12596A20)
#define LLMOAMDDBKK_JFFIPHGLICB__CTOR_OFFSET UNITYSDK_OFFSET(0x12596A10)

inline static constexpr unsigned int LLMOAMDDBKK_JFFIPHGLICB_TypeDefinitionIndex = 50426;

class LLMOAMDDBKK_JFFIPHGLICB : public ::System::Object
{
public:
	::JFNNAFHOBCJ* LJBPECKCCEA; // 0x10
	::LLMOAMDDBKK* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLMOAMDDBKK_JFFIPHGLICB__CTOR_OFFSET))(this);
	}

	::System::Void OEPGIJABDEJ(::MoleMole::NotificationBadgeEx* IKBJOJDMHFP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*))((::PBYTE)hIl2Cpp + LLMOAMDDBKK_JFFIPHGLICB_OEPGIJABDEJ_OFFSET))(this, IKBJOJDMHFP);
	}
};
