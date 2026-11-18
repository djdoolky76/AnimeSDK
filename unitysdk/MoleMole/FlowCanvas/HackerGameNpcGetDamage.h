#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/HackerGameNpcDamageType.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class HackerGameBaseDamage; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETDAMAGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465A290)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1465A350)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcGetDamage_TypeDefinitionIndex = 80146;

	class HackerGameNpcGetDamage
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETDAMAGE__CTOR_OFFSET))(this);
		}

		::MoleMole::HackerGameBaseDamage* Invoke(::MoleMole::ChessEntity* npcEntity, ::MoleMole::FlowCanvas::HackerGameNpcDamageType damageType)
		{
			return ((::MoleMole::HackerGameBaseDamage*(*)(::PVOID, ::MoleMole::ChessEntity*, ::MoleMole::FlowCanvas::HackerGameNpcDamageType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETDAMAGE_INVOKE_OFFSET))(this, npcEntity, damageType);
		}
	};
}
