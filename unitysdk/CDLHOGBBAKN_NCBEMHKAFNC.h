#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }
namespace System { class String; }

#define CDLHOGBBAKN_NCBEMHKAFNC_HMKCDCCJJEH_OFFSET UNITYSDK_OFFSET(0x15325ED0)
#define CDLHOGBBAKN_NCBEMHKAFNC__CTOR_OFFSET UNITYSDK_OFFSET(0x15325650)

inline static constexpr unsigned int CDLHOGBBAKN_NCBEMHKAFNC_TypeDefinitionIndex = 46180;

class CDLHOGBBAKN_NCBEMHKAFNC : public ::System::Object
{
public:
	::Foundation::AssetPath KICHELINDJC; // 0x10
	::System::String* MCOHLHMKLIP; // 0x20
	::MoleMole::ConfigMaterialPropertyModifier* CAANMIFCCAP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_NCBEMHKAFNC__CTOR_OFFSET))(this);
	}

	::System::Void HMKCDCCJJEH(::MoleMole::Config::ConfigMaterialPropertyModifierMap* GIFFNLOIPIF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_NCBEMHKAFNC_HMKCDCCJJEH_OFFSET))(this, GIFFNLOIPIF);
	}
};
