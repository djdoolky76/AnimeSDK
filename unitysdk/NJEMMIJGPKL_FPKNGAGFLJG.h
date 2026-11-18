#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class IMCGLAGOCHO;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define NJEMMIJGPKL_FPKNGAGFLJG_DBBBGNAAPHK_OFFSET UNITYSDK_OFFSET(0x1315A4E0)
#define NJEMMIJGPKL_FPKNGAGFLJG_HPDHKLDKKAP_OFFSET UNITYSDK_OFFSET(0x1315A5D0)
#define NJEMMIJGPKL_FPKNGAGFLJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1315A4D0)

inline static constexpr unsigned int NJEMMIJGPKL_FPKNGAGFLJG_TypeDefinitionIndex = 71528;

class NJEMMIJGPKL_FPKNGAGFLJG : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle JEJJLALJJKH; // 0x10
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x20
	::IMCGLAGOCHO* JAKAPNEKNPH; // 0x28
	::System::Action_1<::Foundation::ViewObject::ViewObjectHandle>* EDNJGMKPFHG; // 0x30
	::System::UInt32 KMMGKJPAOMF; // 0x38
	::System::UInt32 LJMPPBEMEPP; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEMMIJGPKL_FPKNGAGFLJG__CTOR_OFFSET))(this);
	}

	::System::Void DBBBGNAAPHK(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NJEMMIJGPKL_FPKNGAGFLJG_DBBBGNAAPHK_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::Void HPDHKLDKKAP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NJEMMIJGPKL_FPKNGAGFLJG_HPDHKLDKKAP_OFFSET))(this, BHDNBGLCNOM);
	}
};
