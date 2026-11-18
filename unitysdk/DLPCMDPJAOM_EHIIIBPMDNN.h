#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"

namespace System { class String; }

#define DLPCMDPJAOM_EHIIIBPMDNN_AMCIOAAJCPP_OFFSET UNITYSDK_OFFSET(0x149BC480)
#define DLPCMDPJAOM_EHIIIBPMDNN__CTOR_OFFSET UNITYSDK_OFFSET(0x149BC470)

inline static constexpr unsigned int DLPCMDPJAOM_EHIIIBPMDNN_TypeDefinitionIndex = 89042;

class DLPCMDPJAOM_EHIIIBPMDNN : public ::System::Object
{
public:
	::System::String* NNEGLBMECKE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_EHIIIBPMDNN__CTOR_OFFSET))(this);
	}

	::System::Boolean AMCIOAAJCPP(::MoleMole::Config::ProjectileTraitConfig IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ProjectileTraitConfig))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_EHIIIBPMDNN_AMCIOAAJCPP_OFFSET))(this, IPMMCGDMODG);
	}
};
