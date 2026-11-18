#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDPNKBKHMKK.h"
#include "unitysdk/JDIBGBGPCMN.h"
#include "unitysdk/System/Object.h"

class FPKIFHKCBEK;
class JNMGHDNIEJC;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define JNMGHDNIEJC_EMIFOLBDOFB_NJJANJKJKPI_OFFSET UNITYSDK_OFFSET(0x13CD2720)
#define JNMGHDNIEJC_EMIFOLBDOFB__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD2710)

inline static constexpr unsigned int JNMGHDNIEJC_EMIFOLBDOFB_TypeDefinitionIndex = 58204;

class JNMGHDNIEJC_EMIFOLBDOFB : public ::System::Object
{
public:
	::JNMGHDNIEJC* KLHPEBKNIFB; // 0x10
	::System::Action* LNACGAEGNAD; // 0x18
	::System::Action* PCBOBEBCECM; // 0x20
	::System::Action_1<::UnityEngine::Transform*>* OJOCLICNEGM; // 0x28
	::System::Action* EDMIHOBLDOH; // 0x30
	::System::Action_3<::System::Int32, ::System::Int32, ::CDPNKBKHMKK>* KHNIEFIOPPN; // 0x38
	::System::Action_1<::FPKIFHKCBEK*>* JFIAPEBGFAD; // 0x40
	::System::Int32 EGKGLCIDEHC; // 0x48
	::JDIBGBGPCMN IIPNDKEICFJ; // 0x4C
	::System::Int32 BDHFADMIJGL; // 0x50
	::System::Int32 NCJHNBIKEJC; // 0x54
	::System::Boolean BJMNKBGLFIP; // 0x58
	::System::Boolean HEGMLPAMHNH; // 0x59
	::System::Boolean DILALCIHPGH; // 0x5A
	::System::Boolean MIOEPFEADKK; // 0x5B
	::System::Boolean HAEDBNEDCNG; // 0x5C
	::System::Boolean HNMDJPGKAMP; // 0x5D
	::System::Boolean CILBHLAHPKE; // 0x5E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMGHDNIEJC_EMIFOLBDOFB__CTOR_OFFSET))(this);
	}

	::System::Void NJJANJKJKPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMGHDNIEJC_EMIFOLBDOFB_NJJANJKJKPI_OFFSET))(this);
	}
};
