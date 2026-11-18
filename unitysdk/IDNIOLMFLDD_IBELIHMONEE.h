#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IDNIOLMFLDD_KLEICPPIMGB;
class LKMLFIAKFOO;

#define IDNIOLMFLDD_IBELIHMONEE_KAFLHKFELFC_OFFSET UNITYSDK_OFFSET(0xEBB8220)
#define IDNIOLMFLDD_IBELIHMONEE__CTOR_OFFSET UNITYSDK_OFFSET(0xEBB8210)

inline static constexpr unsigned int IDNIOLMFLDD_IBELIHMONEE_TypeDefinitionIndex = 38329;

class IDNIOLMFLDD_IBELIHMONEE : public ::System::Object
{
public:
	::IDNIOLMFLDD_KLEICPPIMGB* FGBNBFHOKAA; // 0x10
	::LKMLFIAKFOO* DMCICDLPPGK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIOLMFLDD_IBELIHMONEE__CTOR_OFFSET))(this);
	}

	::System::Void KAFLHKFELFC(::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDNIOLMFLDD_IBELIHMONEE_KAFLHKFELFC_OFFSET))(this, EBFCACIEKBC);
	}
};
