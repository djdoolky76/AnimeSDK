#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class HKLPMEAJCLP_DAMJCLDJKNI;
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }
namespace System { class String; }

#define HKLPMEAJCLP_AAAGACDJNBC_HMKCDCCJJEH_OFFSET UNITYSDK_OFFSET(0x15BD9C50)
#define HKLPMEAJCLP_AAAGACDJNBC__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD8E70)

inline static constexpr unsigned int HKLPMEAJCLP_AAAGACDJNBC_TypeDefinitionIndex = 91255;

class HKLPMEAJCLP_AAAGACDJNBC : public ::System::Object
{
public:
	::System::String* MCOHLHMKLIP; // 0x10
	::HKLPMEAJCLP_DAMJCLDJKNI* NGGNKKAMDGH; // 0x18
	::MoleMole::ConfigMaterialPropertyModifier* CAANMIFCCAP; // 0x20
	::Foundation::AssetPath KICHELINDJC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_AAAGACDJNBC__CTOR_OFFSET))(this);
	}

	::System::Void HMKCDCCJJEH(::MoleMole::Config::ConfigMaterialPropertyModifierMap* GIFFNLOIPIF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_AAAGACDJNBC_HMKCDCCJJEH_OFFSET))(this, GIFFNLOIPIF);
	}
};
