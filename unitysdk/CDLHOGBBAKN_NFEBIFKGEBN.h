#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierKeyBelongMap; }
namespace System { class String; }

#define CDLHOGBBAKN_NFEBIFKGEBN_JBLEIKOLLNK_OFFSET UNITYSDK_OFFSET(0x16864700)
#define CDLHOGBBAKN_NFEBIFKGEBN__CTOR_OFFSET UNITYSDK_OFFSET(0x168646F0)

inline static constexpr unsigned int CDLHOGBBAKN_NFEBIFKGEBN_TypeDefinitionIndex = 46176;

class CDLHOGBBAKN_NFEBIFKGEBN : public ::System::Object
{
public:
	::MoleMole::ConfigMaterialPropertyModifier* CAANMIFCCAP; // 0x10
	::System::String* MCOHLHMKLIP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_NFEBIFKGEBN__CTOR_OFFSET))(this);
	}

	::System::Void JBLEIKOLLNK(::MoleMole::Config::ConfigMaterialPropertyModifierKeyBelongMap* BPINADIDAPM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierKeyBelongMap*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_NFEBIFKGEBN_JBLEIKOLLNK_OFFSET))(this, BPINADIDAPM);
	}
};
