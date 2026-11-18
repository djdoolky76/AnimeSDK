#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class IMCGLAGOCHO;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define NJEMMIJGPKL_EBAKOBOKMNC_EFOJEEFCGIL_OFFSET UNITYSDK_OFFSET(0x105C0330)
#define NJEMMIJGPKL_EBAKOBOKMNC_NPMAONEHEDA_OFFSET UNITYSDK_OFFSET(0x105C0240)
#define NJEMMIJGPKL_EBAKOBOKMNC__CTOR_OFFSET UNITYSDK_OFFSET(0x105BF680)

inline static constexpr unsigned int NJEMMIJGPKL_EBAKOBOKMNC_TypeDefinitionIndex = 71527;

class NJEMMIJGPKL_EBAKOBOKMNC : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action_1<::Foundation::ViewObject::ViewObjectHandle>* EDNJGMKPFHG; // 0x18
	::IMCGLAGOCHO* JAKAPNEKNPH; // 0x20
	::Foundation::ViewObject::ViewObjectHandle JEJJLALJJKH; // 0x28
	::System::UInt32 LJMPPBEMEPP; // 0x38
	::System::UInt32 KMMGKJPAOMF; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEMMIJGPKL_EBAKOBOKMNC__CTOR_OFFSET))(this);
	}

	::System::Void NPMAONEHEDA(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NJEMMIJGPKL_EBAKOBOKMNC_NPMAONEHEDA_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::Void EFOJEEFCGIL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NJEMMIJGPKL_EBAKOBOKMNC_EFOJEEFCGIL_OFFSET))(this, BHDNBGLCNOM);
	}
};
