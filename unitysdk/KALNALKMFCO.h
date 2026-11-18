#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHBMLLKJIPK.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"

class BEJJBMDHHKJ;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define KALNALKMFCO_GOPPNOEDNMN_OFFSET UNITYSDK_OFFSET(0x13C46580)
#define KALNALKMFCO_SPAWN_OFFSET UNITYSDK_OFFSET(0x13C46590)
#define KALNALKMFCO__CTOR_OFFSET UNITYSDK_OFFSET(0x13C466E0)

inline static constexpr unsigned int KALNALKMFCO_TypeDefinitionIndex = 75125;

class KALNALKMFCO : public ::LHBMLLKJIPK
{
public:
	::System::Void _ctor(::MoleMole::Config::ConfigHollowChessboard* DFMKILICPFB, ::UnityEngine::Transform* EIJDGCPECIF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KALNALKMFCO__CTOR_OFFSET))(this, DFMKILICPFB, EIJDGCPECIF);
	}

	::MoleMole::HollowChessPieceSizeType GOPPNOEDNMN()
	{
		return ((::MoleMole::HollowChessPieceSizeType(*)(::PVOID))((::PBYTE)hIl2Cpp + KALNALKMFCO_GOPPNOEDNMN_OFFSET))(this);
	}

	::BEJJBMDHHKJ* Spawn(::System::String* CJBJONJDOLI, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::BEJJBMDHHKJ*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KALNALKMFCO_SPAWN_OFFSET))(this, CJBJONJDOLI, JNLBPMKIFNK);
	}
};
