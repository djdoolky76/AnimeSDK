#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHBMLLKJIPK.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"

class KKONNFHBIJK;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define FCGPPJJJAJB_GOPPNOEDNMN_OFFSET UNITYSDK_OFFSET(0x16179000)
#define FCGPPJJJAJB_SPAWN_OFFSET UNITYSDK_OFFSET(0x16179010)
#define FCGPPJJJAJB__CTOR_OFFSET UNITYSDK_OFFSET(0x16179150)

inline static constexpr unsigned int FCGPPJJJAJB_TypeDefinitionIndex = 84194;

class FCGPPJJJAJB : public ::LHBMLLKJIPK
{
public:
	::System::Void _ctor(::MoleMole::Config::ConfigHollowChessboard* DFMKILICPFB, ::UnityEngine::Transform* EIJDGCPECIF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FCGPPJJJAJB__CTOR_OFFSET))(this, DFMKILICPFB, EIJDGCPECIF);
	}

	::MoleMole::HollowChessPieceSizeType GOPPNOEDNMN()
	{
		return ((::MoleMole::HollowChessPieceSizeType(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGPPJJJAJB_GOPPNOEDNMN_OFFSET))(this);
	}

	::KKONNFHBIJK* Spawn(::System::String* CJBJONJDOLI, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::KKONNFHBIJK*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FCGPPJJJAJB_SPAWN_OFFSET))(this, CJBJONJDOLI, JNLBPMKIFNK);
	}
};
