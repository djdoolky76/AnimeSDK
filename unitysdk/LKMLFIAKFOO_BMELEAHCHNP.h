#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EDALIFLELHB;
class HAILBACJPGD;
class LKMLFIAKFOO;
namespace MoleMole { class UIUrbanMapPageContext; }
namespace MoleMole { class UIUrbanMapPageController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define LKMLFIAKFOO_BMELEAHCHNP_CGHEMEAFJCP_OFFSET UNITYSDK_OFFSET(0x16856300)
#define LKMLFIAKFOO_BMELEAHCHNP_DHOOHMECJKJ_OFFSET UNITYSDK_OFFSET(0x16855AA0)
#define LKMLFIAKFOO_BMELEAHCHNP_IKLIJJJEICG_OFFSET UNITYSDK_OFFSET(0x168561B0)
#define LKMLFIAKFOO_BMELEAHCHNP__CTOR_OFFSET UNITYSDK_OFFSET(0x16855A90)

inline static constexpr unsigned int LKMLFIAKFOO_BMELEAHCHNP_TypeDefinitionIndex = 43584;

class LKMLFIAKFOO_BMELEAHCHNP : public ::System::Object
{
public:
	::System::Action_1<::HAILBACJPGD*>* FFMGICPLKFB; // 0x10
	::MoleMole::UIUrbanMapPageContext* AAOCANGHBDG; // 0x18
	::System::Action_1<::HAILBACJPGD*>* DLMJCFBENGB; // 0x20
	::System::Action* GENKEAPFFJG; // 0x28
	::LKMLFIAKFOO* KLHPEBKNIFB; // 0x30
	::MoleMole::UIUrbanMapPageController* LDDJOFHAOHG; // 0x38
	::System::Boolean HLEBANIHJGG; // 0x40
	::System::Byte _padding0[0x3];
	::System::UInt32 BFBCMALKEIE; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_BMELEAHCHNP__CTOR_OFFSET))(this);
	}

	::System::Void DHOOHMECJKJ(::EDALIFLELHB* DMEJFNOLKIF)
	{
		return ((::System::Void(*)(::PVOID, ::EDALIFLELHB*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_BMELEAHCHNP_DHOOHMECJKJ_OFFSET))(this, DMEJFNOLKIF);
	}

	::System::Void IKLIJJJEICG(::HAILBACJPGD* IIDDGGNCKHM)
	{
		return ((::System::Void(*)(::PVOID, ::HAILBACJPGD*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_BMELEAHCHNP_IKLIJJJEICG_OFFSET))(this, IIDDGGNCKHM);
	}

	::System::Void CGHEMEAFJCP(::HAILBACJPGD* IIDDGGNCKHM)
	{
		return ((::System::Void(*)(::PVOID, ::HAILBACJPGD*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_BMELEAHCHNP_CGHEMEAFJCP_OFFSET))(this, IIDDGGNCKHM);
	}
};
