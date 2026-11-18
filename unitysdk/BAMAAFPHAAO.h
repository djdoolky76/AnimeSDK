#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHBMLLKJIPK.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"

class KHJFHMLDLAD;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define BAMAAFPHAAO_GOPPNOEDNMN_OFFSET UNITYSDK_OFFSET(0x1437EB30)
#define BAMAAFPHAAO_SPAWN_OFFSET UNITYSDK_OFFSET(0x1437EB40)
#define BAMAAFPHAAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1437EC80)

inline static constexpr unsigned int BAMAAFPHAAO_TypeDefinitionIndex = 47442;

class BAMAAFPHAAO : public ::LHBMLLKJIPK
{
public:
	::System::Void _ctor(::MoleMole::Config::ConfigHollowChessboard* DFMKILICPFB, ::UnityEngine::Transform* EIJDGCPECIF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BAMAAFPHAAO__CTOR_OFFSET))(this, DFMKILICPFB, EIJDGCPECIF);
	}

	::MoleMole::HollowChessPieceSizeType GOPPNOEDNMN()
	{
		return ((::MoleMole::HollowChessPieceSizeType(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMAAFPHAAO_GOPPNOEDNMN_OFFSET))(this);
	}

	::KHJFHMLDLAD* Spawn(::System::String* CJBJONJDOLI, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::KHJFHMLDLAD*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BAMAAFPHAAO_SPAWN_OFFSET))(this, CJBJONJDOLI, JNLBPMKIFNK);
	}
};
