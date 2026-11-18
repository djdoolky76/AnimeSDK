#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HKLPMEAJCLP;
class HKLPMEAJCLP_DAMJCLDJKNI;
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierKeyBelongMap; }
namespace System { class String; }

#define HKLPMEAJCLP_AJFHIKLMMLM_JBLEIKOLLNK_OFFSET UNITYSDK_OFFSET(0x17E502A0)
#define HKLPMEAJCLP_AJFHIKLMMLM__CTOR_OFFSET UNITYSDK_OFFSET(0x17E50290)

inline static constexpr unsigned int HKLPMEAJCLP_AJFHIKLMMLM_TypeDefinitionIndex = 91257;

class HKLPMEAJCLP_AJFHIKLMMLM : public ::System::Object
{
public:
	::HKLPMEAJCLP* KLHPEBKNIFB; // 0x10
	::HKLPMEAJCLP_DAMJCLDJKNI* NGGNKKAMDGH; // 0x18
	::System::String* MCOHLHMKLIP; // 0x20
	::MoleMole::ConfigMaterialPropertyModifier* CAANMIFCCAP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_AJFHIKLMMLM__CTOR_OFFSET))(this);
	}

	::System::Void JBLEIKOLLNK(::MoleMole::Config::ConfigMaterialPropertyModifierKeyBelongMap* BPINADIDAPM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierKeyBelongMap*))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_AJFHIKLMMLM_JBLEIKOLLNK_OFFSET))(this, BPINADIDAPM);
	}
};
