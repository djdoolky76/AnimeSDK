#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDLHOCBNDMD;
class NBDLJECLJJO;
namespace MoleMole { class UIGeneralAvatarGesturePurchaseWidgetController_Context; }
namespace System { template <typename T> class Action_1; }

#define GPPMPHICDEA_KECHPAPIIGP_LDOINAIGGNB_OFFSET UNITYSDK_OFFSET(0x17A30B10)
#define GPPMPHICDEA_KECHPAPIIGP_PHDIEPCMGJB_OFFSET UNITYSDK_OFFSET(0x17A30B90)
#define GPPMPHICDEA_KECHPAPIIGP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A30B00)

inline static constexpr unsigned int GPPMPHICDEA_KECHPAPIIGP_TypeDefinitionIndex = 42619;

class GPPMPHICDEA_KECHPAPIIGP : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFGOPDLILNE; // 0x10
	::NBDLJECLJJO* JPKJBDLAAIC; // 0x18
	::System::Action_1<::MDLHOCBNDMD*>* JHIPAJNDDHC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KECHPAPIIGP__CTOR_OFFSET))(this);
	}

	::System::Void LDOINAIGGNB(::MoleMole::UIGeneralAvatarGesturePurchaseWidgetController_Context* HIGCIDADGJK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralAvatarGesturePurchaseWidgetController_Context*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KECHPAPIIGP_LDOINAIGGNB_OFFSET))(this, HIGCIDADGJK);
	}

	::System::Void PHDIEPCMGJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KECHPAPIIGP_PHDIEPCMGJB_OFFSET))(this);
	}
};
