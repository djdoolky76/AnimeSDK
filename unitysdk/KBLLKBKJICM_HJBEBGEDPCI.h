#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMBMBLDFBID.h"

class AMMIEJHOJLL;
class KBLLKBKJICM;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define KBLLKBKJICM_HJBEBGEDPCI_APCKIDAENJP_OFFSET UNITYSDK_OFFSET(0x130A86A0)
#define KBLLKBKJICM_HJBEBGEDPCI_IOFIFFKGHGM_OFFSET UNITYSDK_OFFSET(0x130A8690)
#define KBLLKBKJICM_HJBEBGEDPCI_JPMDPKELFCB_OFFSET UNITYSDK_OFFSET(0x130A8A10)
#define KBLLKBKJICM_HJBEBGEDPCI__CTOR_OFFSET UNITYSDK_OFFSET(0x130A8680)

inline static constexpr unsigned int KBLLKBKJICM_HJBEBGEDPCI_TypeDefinitionIndex = 61801;

class KBLLKBKJICM_HJBEBGEDPCI : public ::System::Object
{
public:
	::KBLLKBKJICM* KLHPEBKNIFB; // 0x10
	::System::Action* LJHJGPGGBOH; // 0x18
	::System::Action* CGAEEDNPJHP; // 0x20
	::System::Action_3<::AMMIEJHOJLL*, ::System::Single, ::System::Single>* EJGDHCIBCJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLLKBKJICM_HJBEBGEDPCI__CTOR_OFFSET))(this);
	}

	::System::Void IOFIFFKGHGM(::AMMIEJHOJLL* CBLGCIFLMKL, ::System::Single MKBCMHIAMHF, ::System::Single IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::AMMIEJHOJLL*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KBLLKBKJICM_HJBEBGEDPCI_IOFIFFKGHGM_OFFSET))(this, CBLGCIFLMKL, MKBCMHIAMHF, IMLLDOHDCNC);
	}

	::System::Void APCKIDAENJP(::BMBMBLDFBID HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KBLLKBKJICM_HJBEBGEDPCI_APCKIDAENJP_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void JPMDPKELFCB(::BMBMBLDFBID HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KBLLKBKJICM_HJBEBGEDPCI_JPMDPKELFCB_OFFSET))(this, HFMHOELKCAJ);
	}
};
