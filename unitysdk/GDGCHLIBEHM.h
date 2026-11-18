#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AJMMCPMPHCK;
class CJIEIHEDMME;
namespace MoleMole { class UIActivityGotoMissionRowWidgetController; }

#define GDGCHLIBEHM_DFCEDLIEAKF_OFFSET UNITYSDK_OFFSET(0x11D9D280)
#define GDGCHLIBEHM_JGLFKFDGOOO_OFFSET UNITYSDK_OFFSET(0x11D9D2D0)
#define GDGCHLIBEHM_NJGGHGJICOG_OFFSET UNITYSDK_OFFSET(0x11D9D610)
#define GDGCHLIBEHM__CTOR_OFFSET UNITYSDK_OFFSET(0x11D9D600)

inline static constexpr unsigned int GDGCHLIBEHM_TypeDefinitionIndex = 54988;

class GDGCHLIBEHM : public ::System::Object
{
public:
	::AJMMCPMPHCK* DDPLJEPOFLN; // 0x10
	::CJIEIHEDMME* IHACKHOBPKG; // 0x18
	::MoleMole::UIActivityGotoMissionRowWidgetController* FPPPIIFJOBO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGCHLIBEHM__CTOR_OFFSET))(this);
	}

	::System::Void DFCEDLIEAKF(::MoleMole::UIActivityGotoMissionRowWidgetController* MNOMCCLBJAO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityGotoMissionRowWidgetController*))((::PBYTE)hIl2Cpp + GDGCHLIBEHM_DFCEDLIEAKF_OFFSET))(this, MNOMCCLBJAO);
	}

	::System::Void NJGGHGJICOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGCHLIBEHM_NJGGHGJICOG_OFFSET))(this);
	}

	::System::Void JGLFKFDGOOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGCHLIBEHM_JGLFKFDGOOO_OFFSET))(this);
	}
};
