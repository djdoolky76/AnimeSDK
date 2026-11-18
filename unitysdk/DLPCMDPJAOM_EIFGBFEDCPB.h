#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"

namespace System { class String; }

#define DLPCMDPJAOM_EIFGBFEDCPB_DGGGFHGCLBC_OFFSET UNITYSDK_OFFSET(0x149BC4C0)
#define DLPCMDPJAOM_EIFGBFEDCPB__CTOR_OFFSET UNITYSDK_OFFSET(0x149BC4B0)

inline static constexpr unsigned int DLPCMDPJAOM_EIFGBFEDCPB_TypeDefinitionIndex = 89046;

class DLPCMDPJAOM_EIFGBFEDCPB : public ::System::Object
{
public:
	::System::String* NNEGLBMECKE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_EIFGBFEDCPB__CTOR_OFFSET))(this);
	}

	::System::Boolean DGGGFHGCLBC(::MoleMole::Config::ProjectileTraitConfig IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ProjectileTraitConfig))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_EIFGBFEDCPB_DGGGFHGCLBC_OFFSET))(this, IPMMCGDMODG);
	}
};
