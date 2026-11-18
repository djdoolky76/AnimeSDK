#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageBuddiesShow; }
namespace System { class Action; }

#define IDLIDLCGNEK_FKEAHFKFNLE_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x15BFE430)
#define IDLIDLCGNEK_FKEAHFKFNLE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFE420)

inline static constexpr unsigned int IDLIDLCGNEK_FKEAHFKFNLE_TypeDefinitionIndex = 61025;

class IDLIDLCGNEK_FKEAHFKFNLE : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLIDLCGNEK_FKEAHFKFNLE__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigUIMainPageBuddiesShow* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainPageBuddiesShow*))((::PBYTE)hIl2Cpp + IDLIDLCGNEK_FKEAHFKFNLE_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
