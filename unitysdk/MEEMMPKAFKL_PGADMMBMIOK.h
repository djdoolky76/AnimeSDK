#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigAvatarDateTeleport; }
namespace System { class Action; }

#define MEEMMPKAFKL_PGADMMBMIOK_DLIMFIMGILJ_OFFSET UNITYSDK_OFFSET(0x1852B830)
#define MEEMMPKAFKL_PGADMMBMIOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1852B820)

inline static constexpr unsigned int MEEMMPKAFKL_PGADMMBMIOK_TypeDefinitionIndex = 63988;

class MEEMMPKAFKL_PGADMMBMIOK : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_PGADMMBMIOK__CTOR_OFFSET))(this);
	}

	::System::Void DLIMFIMGILJ(::MoleMole::ConfigAvatarDateTeleport* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAvatarDateTeleport*))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_PGADMMBMIOK_DLIMFIMGILJ_OFFSET))(this, DFMKILICPFB);
	}
};
